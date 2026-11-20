/* ARM9 core — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01002cd0  dispatch_z80_mapped_read_by_address_page

void dispatch_z80_mapped_read_by_address_page(uint param_1)

{
  int in_stack_00000098;
  
                    /* WARNING: Could not recover jumptable at 0x01002cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000098 + ((param_1 & 0xf000) >> 10)))();
  return;
}


// 0x01002cec  dispatch_z80_mapped_read_from_r10

void dispatch_z80_mapped_read_from_r10(void)

{
  uint unaff_r10;
  int in_stack_00000098;
  
                    /* WARNING: Could not recover jumptable at 0x01002cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000098 + ((unaff_r10 >> 0x10 & 0xf000) >> 10)))();
  return;
}


// 0x01002cfc  bridge_to_z80_mapped_word_read

void bridge_to_z80_mapped_word_read(void)

{
  read_z80_mapped_little_endian_word();
  return;
}


// 0x01002d10  route_z80_mapped_byte_write

void route_z80_mapped_byte_write(int param_1)

{
  if (param_1 < 0x3000) {
    queue_ym2612_register_or_dac_write();
    return;
  }
  write_z80_mapped_byte();
  return;
}


// 0x01002d2c  route_z80_mapped_byte_write_from_r10

void route_z80_mapped_byte_write_from_r10(void)

{
  uint unaff_r10;
  
  if (unaff_r10 >> 0x10 < 0x3000) {
    queue_ym2612_register_or_dac_write();
    return;
  }
  write_z80_mapped_byte();
  return;
}


// 0x02000588  run_remaining_z80_cycles

void run_remaining_z80_cycles(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_02098f90 - DAT_02098f98;
  if (0x3fff < uVar1) {
    uVar2 = (uVar1 + ((uVar1 - 0x4000) / 0x3fff) * -0x3fff) - 0x3fff;
    do {
      while (((uVar1 = uVar1 - 0x3fff, (DAT_023cb610 & 2) == 0 && (DAT_02099001 == '\x01')) &&
             (DAT_02099000 == '\0'))) {
        run_z80_cycle_budget(&DAT_0b000158,0x3fff);
        if (uVar1 == uVar2) goto LAB_02000634;
      }
    } while (uVar1 != uVar2);
  }
LAB_02000634:
  if (((uVar1 != 0) && ((DAT_023cb610 & 2) == 0)) &&
     ((DAT_02099001 == '\x01' && (DAT_02099000 == '\0')))) {
    run_z80_cycle_budget(&DAT_0b000158,uVar1);
  }
  DAT_02098f98 = DAT_02098f90;
  DAT_02098f9c = DAT_02098f94;
  DAT_0b0000a8 = 0;
  return;
}


// 0x020006b8  accrue_z80_cycles_for_scanline

void accrue_z80_cycles_for_scanline(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = 0xffffff1c < DAT_02098f90;
  DAT_02098f90 = DAT_02098f90 + 0xe3;
  DAT_02098f94 = DAT_02098f94 + (uint)bVar3;
  uVar1 = DAT_02098f90 - DAT_02098f98;
  bVar3 = uVar1 == 0x3ffe;
  if (uVar1 < 0x3fff) {
    bVar3 = DAT_0b0000a8 == 0;
  }
  if (!bVar3) {
    if (0x3fff < uVar1) {
      uVar2 = (uVar1 + ((uVar1 - 0x4000) / 0x3fff) * -0x3fff) - 0x3fff;
      do {
        while (((uVar1 = uVar1 - 0x3fff, (DAT_023cb610 & 2) == 0 && (DAT_02099001 == '\x01')) &&
               (DAT_02099000 == '\0'))) {
          run_z80_cycle_budget(&DAT_0b000158,0x3fff);
          if (uVar1 == uVar2) goto LAB_02000794;
        }
      } while (uVar1 != uVar2);
    }
LAB_02000794:
    if (((uVar1 != 0) && ((DAT_023cb610 & 2) == 0)) &&
       ((DAT_02099001 == '\x01' && (DAT_02099000 == '\0')))) {
      run_z80_cycle_budget(&DAT_0b000158,uVar1);
    }
    DAT_02098f98 = DAT_02098f90;
    DAT_02098f9c = DAT_02098f94;
    DAT_0b0000a8 = 0;
  }
  return;
}


// 0x0200df50  run_z80_cycle_budget

/* WARNING: Removing unreachable block (ram,0x01001fbc) */
/* WARNING: Removing unreachable block (ram,0x0100179c) */
/* WARNING: Removing unreachable block (ram,0x01001fc4) */
/* WARNING: Removing unreachable block (ram,0x010017a4) */

undefined8 run_z80_cycle_budget(int param_1,int param_2)

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
  int iVar12;
  int iVar13;
  int iVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  ushort *puVar28;
  byte *pbVar29;
  ushort *puVar30;
  ushort *puVar31;
  undefined1 in_OV;
  bool bVar32;
  bool bVar33;
  undefined1 uVar34;
  bool bVar35;
  undefined8 uVar36;
  
  *(undefined1 **)(param_1 + 0x460) = &stack0xffffffd8;
  pbVar16 = *(byte **)(param_1 + 0x400);
  uVar18 = *(uint *)(param_1 + 0x404);
  uVar22 = *(uint *)(param_1 + 0x40c);
  uVar23 = *(uint *)(param_1 + 0x410);
  uVar24 = *(uint *)(param_1 + 0x414);
  uVar25 = *(uint *)(param_1 + 0x418);
  uVar26 = *(uint *)(param_1 + 0x41c);
  pbVar29 = *(byte **)(param_1 + 0x420);
  puVar31 = *(ushort **)(param_1 + 0x424);
  *(int *)(param_1 + 0x474) = param_2;
  iVar13 = *(int *)(param_1 + 0x488);
  if ((*(uint *)(param_1 + 0x480) & 0x100) != 0) {
    bVar32 = iVar13 == 0;
    iVar14 = iVar13;
    if (0 < iVar13) {
      iVar14 = param_2 - iVar13;
      bVar32 = param_2 == iVar13;
    }
    in_OV = 0 < iVar13 && SBORROW4(param_2,iVar13);
    if (!bVar32 && iVar14 < 0 == (bool)in_OV) {
      param_2 = iVar13;
    }
  }
  if ((*(uint *)(param_1 + 0x480) & 0x200) != 0) {
    iVar14 = *(int *)(param_1 + 0x490);
    bVar32 = iVar14 == 0;
    iVar13 = iVar14;
    if (0 < iVar14) {
      iVar13 = param_2 - iVar14;
      bVar32 = param_2 == iVar14;
    }
    in_OV = 0 < iVar14 && SBORROW4(param_2,iVar14);
    if (!bVar32 && iVar13 < 0 == (bool)in_OV) {
      param_2 = iVar14;
    }
  }
  uVar20 = *(int *)(param_1 + 0x408) + param_2 * 0x10000;
  *(int *)(param_1 + 0x478) = param_2;
  ppuVar15 = &switchD_0200e01c::switchdataD_020154b0;
  do {
    uVar21 = uVar20;
    if ((*(int *)(param_1 + 0x4a4) != 0) && (uVar4 = *(uint *)(param_1 + 0x444), (uVar4 & 8) != 0))
    {
      *(undefined4 *)(param_1 + 0x4a4) = 0;
      if (*pbVar29 == 0x76) {
        pbVar29 = pbVar29 + 1;
      }
      *(uint *)(param_1 + 0x444) = uVar4 & 0xfffffff3;
      in_OV = SBORROW4(uVar4 & 3,2);
      if ((uVar4 & 3) == 2) {
        *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)pbVar29 - (int)pbVar16) >> 8);
        puVar31 = puVar31 + -1;
        *(byte *)puVar31 = (byte)((int)pbVar29 - (int)pbVar16);
        uVar21 = uVar20 - 0x130000;
      }
      else {
        *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)pbVar29 - (int)pbVar16) >> 8);
        puVar31 = puVar31 + -1;
        *(byte *)puVar31 = (byte)((int)pbVar29 - (int)pbVar16);
        uVar21 = uVar20 - 0xd0000;
        pbVar29 = pbVar16 + 0x38;
      }
    }
    puVar30 = (ushort *)(pbVar29 + 1);
    bVar3 = (byte)(uVar26 >> 0x10);
    bVar10 = (byte)(uVar26 >> 0x18);
    bVar5 = (byte)(uVar18 >> 0x18);
    bVar1 = (byte)uVar21;
    bVar6 = (byte)(uVar22 >> 0x18);
    bVar7 = (byte)(uVar23 >> 0x18);
    bVar8 = (byte)(uVar24 >> 0x18);
    bVar9 = (byte)(uVar25 >> 0x18);
    switch((uint)ppuVar15[*pbVar29] & 0xfffffffe) {
    case 0x1000020:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000030:
      uVar23 = (uint)*puVar30 << 0x18;
      uVar22 = (*puVar30 & 0xff00) << 0x10;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000060:
      uVar20 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1;
      }
      pbVar16[uVar20] = bVar5;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000090:
      bVar32 = 0xfeffffff < uVar23;
      uVar23 = uVar23 + 0x1000000;
      if (bVar32) {
        uVar22 = uVar22 + 0x1000000;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10000b0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(uVar22,0x1000000);
      uVar22 = uVar22 + 0x1000000;
      if ((int)uVar22 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (uVar22 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10000e0:
      bVar32 = SBORROW4(uVar22,0x1000000);
      uVar22 = uVar22 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar22 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar22 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000110:
      uVar22 = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000130:
      uVar18 = uVar18 << 1;
      if ((bool)(bVar5 >> 7)) {
        uVar18 = uVar18 | 0x1000000;
      }
      uVar21 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000150:
      uVar4 = *(uint *)(param_1 + 0x448);
      uVar20 = *(uint *)(param_1 + 0x44c);
      *(uint *)(param_1 + 0x448) = uVar18;
      *(uint *)(param_1 + 0x44c) = uVar21;
      uVar21 = uVar21 & 0xffffff28 | uVar20 & 0xff;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000180:
      uVar20 = uVar22 | uVar23 >> 8;
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(uVar26,uVar20);
      uVar26 = uVar26 + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001a0:
      uVar18 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar18) {
        uVar18 = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010001c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)pbVar16[uVar18] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001d0:
      bVar32 = uVar23 < 0x1000000;
      uVar23 = uVar23 - 0x1000000;
      if (bVar32) {
        uVar22 = uVar22 - 0x1000000;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010001e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001f0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(uVar23,0x1000000);
      uVar23 = uVar23 + 0x1000000;
      if ((int)uVar23 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (uVar23 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000220:
      bVar32 = SBORROW4(uVar23,0x1000000);
      uVar23 = uVar23 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar23 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar23 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000250:
      uVar23 = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000270:
      uVar18 = uVar18 >> 0x19;
      if ((bool)(bVar5 & 1)) {
        uVar18 = uVar18 | 0x80;
      }
      uVar21 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10002a0:
      uVar22 = uVar22 - 0x1000000;
      if (uVar22 == 0) {
        iVar13 = 0;
        pbVar27 = pbVar29 + 2;
      }
      else {
        iVar13 = (int)(char)(byte)*puVar30;
        uVar21 = uVar21 - 0x50000;
        pbVar27 = pbVar29 + iVar13 + 2;
      }
      if (iVar13 == -2) {
        bVar3 = 0x27;
      }
      else {
        bVar3 = 0xd3;
      }
      *pbVar29 = bVar3;
      puVar28 = (ushort *)(pbVar27 + 1);
      uVar20 = uVar21 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x010002d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x7ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar27])();
        return uVar36;
      }
      break;
    case 0x10002e0:
      uVar25 = (uint)*puVar30 << 0x18;
      uVar24 = (*puVar30 & 0xff00) << 0x10;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000310:
      uVar20 = (uVar24 | uVar25 >> 8) >> 0x10;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1_00;
      }
      pbVar16[uVar20] = bVar5;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000340:
      bVar32 = 0xfeffffff < uVar25;
      uVar25 = uVar25 + 0x1000000;
      if (bVar32) {
        uVar24 = uVar24 + 0x1000000;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000360:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(uVar24,0x1000000);
      uVar24 = uVar24 + 0x1000000;
      if ((int)uVar24 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (uVar24 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000390:
      bVar32 = SBORROW4(uVar24,0x1000000);
      uVar24 = uVar24 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar24 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar24 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010003b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10003c0:
      uVar24 = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x10003e0:
      uVar4 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar4 = uVar4 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 << 1 | (uVar21 & 1) << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000410:
      puVar28 = (ushort *)(pbVar29 + (char)(byte)*puVar30 + 2 + 1);
      uVar20 = uVar21 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x01000420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xbffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[(char)(byte)*puVar30 + 2]])();
        return uVar36;
      }
      break;
    case 0x1000430:
      uVar20 = uVar24 | uVar25 >> 8;
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(uVar26,uVar20);
      uVar26 = uVar26 + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000450:
      uVar18 = (uVar24 | uVar25 >> 8) >> 0x10;
      if (0x1fff < uVar18) {
        uVar18 = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)pbVar16[uVar18] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000480:
      bVar32 = uVar25 < 0x1000000;
      uVar25 = uVar25 - 0x1000000;
      if (bVar32) {
        uVar24 = uVar24 - 0x1000000;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10004a0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(uVar25,0x1000000);
      uVar25 = uVar25 + 0x1000000;
      if ((int)uVar25 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (uVar25 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10004d0:
      bVar32 = SBORROW4(uVar25,0x1000000);
      uVar25 = uVar25 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar25 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar25 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000500:
      uVar25 = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000520:
      uVar4 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar4 = uVar4 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar21 << 0x1f | (uVar18 >> 0x19) << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000550:
      if ((uVar21 & 0x40) == 0) {
        uVar21 = uVar21 - 0x50000;
        pbVar29 = pbVar29 + (char)(byte)*puVar30 + 2;
      }
      else {
        pbVar29 = pbVar29 + 2;
      }
      puVar28 = (ushort *)(pbVar29 + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x1000580:
      uVar26 = (uint)*puVar30 << 0x10;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x10005a0:
      uVar2 = *puVar30;
      pbVar16[uVar2] = bVar3;
      pbVar16[uVar2 + 1] = bVar10;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x010005c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xfffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x10005d0:
      uVar26 = uVar26 + 0x10000;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010005dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10005f0:
      uVar20 = uVar26 & 0xff000000;
      uVar21 = uVar21 & 0xffffff29;
      if ((int)(uVar20 + 0x1000000) < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4(uVar20,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (uVar20 == 0xff000000) {
        uVar21 = uVar21 | 0x40;
      }
      uVar26 = uVar26 + 0x1000000;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000620:
      uVar20 = uVar26 & 0xff000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)(uVar20 - 0x1000000) < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar20 == 0x1000000) {
        uVar4 = uVar4 | 0x40;
      }
      if (SBORROW4(uVar20,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      uVar26 = uVar26 - 0x1000000;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000650:
      uVar26 = uVar26 & 0xff0000 | (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000670:
      uVar22 = uVar22 - 0x1000000;
      iVar13 = ((uVar21 - (uVar22 >> 8)) - (uVar22 >> 6)) - (uVar22 >> 5);
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar22 = 0;
      uVar20 = iVar13 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x01000690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x7ffff < iVar13) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x10006a0:
      if ((uVar21 & 0x40) == 0) {
        pbVar29 = pbVar29 + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pbVar29 = pbVar29 + (char)(byte)*puVar30 + 2;
      }
      puVar28 = (ushort *)(pbVar29 + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010006bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x10006d0:
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(uVar26,uVar26);
      uVar26 = uVar26 * 2;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010006e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10006f0:
      uVar26 = (uint)*puVar30;
      if (0x1fff < uVar26) {
        uVar26 = bridge_to_z80_mapped_word_read();
      }
      uVar26 = (uint)CONCAT11(pbVar16[uVar26 + 1],pbVar16[uVar26]) << 0x10;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x01000720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xfffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000730:
      uVar26 = uVar26 - 0x10000;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000750:
      uVar21 = uVar21 & 0xffffff29;
      uVar20 = uVar26 * 0x100 + 0x1000000;
      if ((int)uVar20 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4(uVar26 * 0x100,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (uVar20 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      uVar26 = uVar26 & 0xff000000 | uVar20 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000780:
      uVar20 = uVar26 * 0x100 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar20 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar20 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (SBORROW4(uVar26 * 0x100,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      uVar26 = uVar26 & 0xff000000 | uVar20 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10007c0:
      uVar26 = uVar26 & 0xff000000 | (uint)(byte)*puVar30 << 0x10;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x10007e0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = (uVar21 | 0x12) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 ^ 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)(uVar21 | 0x12)) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000800:
      if ((uVar21 & 1) == 0) {
        uVar21 = uVar21 - 0x50000;
        pbVar29 = pbVar29 + (char)(byte)*puVar30 + 2;
      }
      else {
        pbVar29 = pbVar29 + 2;
      }
      puVar28 = (ushort *)(pbVar29 + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x1000830:
      puVar31 = (ushort *)(pbVar16 + *puVar30);
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000850:
      uVar20 = (uint)*puVar30;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1_01;
      }
      pbVar16[uVar20] = bVar5;
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x01000874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xcffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000880:
      puVar31 = (ushort *)((int)puVar31 + 1);
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10008a0:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar21 = uVar21 & 0xffffff29;
      iVar13 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000 + 0x1000000;
      if (iVar13 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4((uint)pbVar16[uVar26 >> 0x10] * 0x1000000,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (iVar13 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      bVar3 = (byte)((uint)iVar13 >> 0x18);
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_02;
      }
      pbVar16[uVar26 >> 0x10] = bVar3;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010008e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10008f0:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      iVar13 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000 + -0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if (iVar13 == 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x42;
      }
      if (iVar13 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (SBORROW4((uint)pbVar16[uVar26 >> 0x10] * 0x1000000,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      bVar3 = (byte)((uint)iVar13 >> 0x18);
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_03;
      }
      pbVar16[uVar26 >> 0x10] = bVar3;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar4 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000940:
      bVar3 = (byte)*puVar30;
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_04;
      }
      pbVar16[uVar26 >> 0x10] = bVar3;
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000960:
      uVar21 = uVar21 & 0xffffffed | 1;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000980:
      if ((uVar21 & 1) == 0) {
        pbVar29 = pbVar29 + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pbVar29 = pbVar29 + (char)(byte)*puVar30 + 2;
      }
      puVar28 = (ushort *)(pbVar29 + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x10009b0:
      uVar21 = uVar21 & 0xffffffec;
      uVar20 = ((int)puVar31 - (int)pbVar16) * 0x10000;
      bVar32 = CARRY4(uVar26,uVar20);
      uVar26 = uVar26 + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010009c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10009d0:
      uVar18 = (uint)*puVar30;
      if (0x1fff < uVar18) {
        uVar18 = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pbVar29 + 4);
      uVar20 = uVar21 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x010009f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)pbVar16[uVar18] << 0x18;
      if (uVar20 != 0 && 0xcffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
        return uVar36;
      }
      break;
    case 0x1000a00:
      puVar31 = (ushort *)((int)puVar31 + -1);
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a20:
      uVar21 = uVar21 & 0xffffff29;
      uVar4 = uVar18 + 0x1000000;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4(uVar18,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a50:
      uVar4 = uVar18 - 0x1000000;
      uVar17 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(uVar18,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a80:
      puVar28 = (ushort *)(pbVar29 + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)(byte)*puVar30 << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1000aa0:
      if ((uVar21 & 1) == 0) {
        uVar21 = uVar21 & 0xffffffed | 1;
      }
      else {
        uVar21 = uVar21 & 0xfffffffc | 0x10;
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ad0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ae0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar23;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b00:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar24;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b20:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar25;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b40:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar26 & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b60:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar26 << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b80:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ba0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000bc0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar22;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000be0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000bf0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar24;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c10:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar25;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c30:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar26 & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c50:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar26 << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c70:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c90:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cb0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar22;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cd0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar23;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cf0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d00:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar25;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d20:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar26 & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d40:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar26 << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d60:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d80:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000da0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar22;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000dc0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar23;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000de0:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar24;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e00:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e10:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar26 & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e30:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar26 << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e50:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e70:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = uVar18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e90:
      uVar26 = uVar26 & 0xff0000 | uVar22;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000eb0:
      uVar26 = uVar26 & 0xff0000 | uVar23;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ed0:
      uVar26 = uVar26 & 0xff0000 | uVar24;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ef0:
      uVar26 = uVar26 & 0xff0000 | uVar25;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f10:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f20:
      uVar26 = uVar26 & 0xff0000 | (uVar26 & 0xff0000) << 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f40:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar26 = uVar26 & 0xff0000 | (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f70:
      uVar26 = uVar26 & 0xff0000 | uVar18;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f90:
      uVar26 = uVar26 & 0xff000000 | uVar22 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000fb0:
      uVar26 = uVar26 & 0xff000000 | uVar23 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000fd0:
      uVar26 = uVar26 & 0xff000000 | uVar24 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ff0:
      uVar26 = uVar26 & 0xff000000 | uVar25 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001010:
      uVar26 = uVar26 & 0xff000000 | (uVar26 & 0xff000000) >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001030:
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001040:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar26 = uVar26 & 0xff000000 | (uint)pbVar16[uVar26 >> 0x10] << 0x10;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001070:
      uVar26 = uVar26 & 0xff000000 | uVar18 >> 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001090:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar6 = extraout_r1_05;
      }
      pbVar16[uVar26 >> 0x10] = bVar6;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010b0:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar7 = extraout_r1_06;
      }
      pbVar16[uVar26 >> 0x10] = bVar7;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010d0:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar8 = extraout_r1_07;
      }
      pbVar16[uVar26 >> 0x10] = bVar8;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010f0:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar9 = extraout_r1_08;
      }
      pbVar16[uVar26 >> 0x10] = bVar9;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001110:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar10 = extraout_r1_09;
      }
      pbVar16[uVar26 >> 0x10] = bVar10;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001130:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_10;
      }
      pbVar16[uVar26 >> 0x10] = bVar3;
      puVar28 = (ushort *)(pbVar29 + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001160:
      uVar20 = (uVar21 & 0xff) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = puVar30;
      if (uVar20 != 0 && 0x3ffff < (uVar21 & 0xff)) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x1001180:
      if (0x1fffffff < uVar26) {
        route_z80_mapped_byte_write_from_r10();
        bVar5 = extraout_r1_11;
      }
      pbVar16[uVar26 >> 0x10] = bVar5;
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011a0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar22;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011c0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar23;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011e0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar24;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001200:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar25;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001220:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar26 & 0xff000000;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001240:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar26 << 8;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001260:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001280:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001290:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar22;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar22)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar22)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10012c0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar23;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar23)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar23)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10012f0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar24;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar24)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar24)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001320:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar25;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar25)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar25)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001350:
      uVar20 = uVar26 & 0xff000000;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001380:
      uVar20 = uVar26 * 0x100;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010013a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10013b0:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar21 = uVar21 & 0xffffff28;
      uVar20 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000;
      uVar4 = uVar18 + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10013f0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 * 2;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar18)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar18)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001420:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar18 = uVar20 + uVar22;
      if ((int)uVar18 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar18 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar22)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar22)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001460:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar18 = uVar20 + uVar23;
      if ((int)uVar18 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar18 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar23)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar23)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10014a0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar18 = uVar20 + uVar24;
      if ((int)uVar18 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar18 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar24)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar24)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10014e0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar18 = uVar20 + uVar25;
      if ((int)uVar18 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar18 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar25)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar25)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001520:
      uVar4 = uVar26 & 0xff000000;
      uVar17 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar20 + uVar4;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar20,uVar4)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar20,uVar4)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001560:
      uVar20 = uVar26 * 0x100;
      uVar17 = uVar21 & 0xffffff28;
      uVar4 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar4 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 + uVar20;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar4,uVar20)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar4,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10015a0:
      uVar34 = SBORROW4(uVar26,0x20000000);
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        uVar34 = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)uVar34) {
        uVar4 = uVar4 | 4;
      }
      uVar17 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000;
      uVar18 = uVar20 + uVar17;
      if ((int)uVar18 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar18 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar17)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar17)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10015f0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar20 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar17 = uVar20 + uVar18;
      if ((int)uVar17 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar17 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,uVar18)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,uVar18)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar17;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001630:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 - uVar22;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar22) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar22)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001660:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 - uVar23;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar23) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar23)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001690:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 - uVar24;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar24) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar24)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10016c0:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 - uVar25;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar25) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar25)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10016f0:
      uVar20 = uVar26 & 0xff000000;
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 - uVar20;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001720:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 + uVar26 * -0x100;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar26 * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar26 * 0x100)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001750:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000;
      uVar4 = uVar18 + (uint)pbVar16[uVar26 >> 0x10] * -0x1000000;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001790:
      uVar4 = uVar21 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar18,uVar18)) {
        uVar4 = uVar21 & 0xffffff28 | 0x46;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = 0;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10017c0:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 - uVar22;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar22) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar22)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001800:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 - uVar23;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar23) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar23)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001840:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 - uVar24;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar24) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar24)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001880:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 - uVar25;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar25) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar25)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10018c0:
      uVar4 = uVar26 & 0xff000000;
      uVar19 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar17 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar19 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar17 - uVar4;
      if ((int)uVar18 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar18 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (uVar17 < uVar4) {
        uVar19 = uVar19 | 1;
      }
      if (SBORROW4(uVar17,uVar4)) {
        uVar19 = uVar19 ^ 4;
      }
      uVar20 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar19) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001900:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 + uVar26 * -0x100;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar26 * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar26 * 0x100)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001940:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000;
      uVar18 = uVar4 + (uint)pbVar16[uVar26 >> 0x10] * -0x1000000;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001990:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar21 = uVar4 - uVar18;
      if ((int)uVar21 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar21 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar21;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10019d0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 & uVar22) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 & uVar22;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a00:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 & uVar23) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 & uVar23;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a30:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 & uVar24) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 & uVar24;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a60:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 & uVar25) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 & uVar25;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a90:
      uVar18 = uVar18 & uVar26 & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ac0:
      uVar18 = uVar18 & uVar26 << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001af0:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar18 = uVar18 & (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b20:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b50:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 ^ uVar22) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 ^ uVar22;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b80:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 ^ uVar23) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 ^ uVar23;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001bb0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 ^ uVar24) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 ^ uVar24;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001be0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 ^ uVar25) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 ^ uVar25;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c10:
      uVar18 = uVar18 ^ uVar26 & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c40:
      uVar18 = uVar18 ^ uVar26 << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c70:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar18 = uVar18 ^ (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ca0:
      uVar21 = uVar21 & 0xffffff28 | (uint)*DAT_01001e44;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = 0;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001cd0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 | uVar22) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 | uVar22;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d00:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 | uVar23) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 | uVar23;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d30:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 | uVar24) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 | uVar24;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d60:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(uVar18 | uVar25) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar18 | uVar25;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d90:
      uVar18 = uVar18 | uVar26 & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001dc0:
      uVar18 = uVar18 | uVar26 << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001df0:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar18 = uVar18 | (uint)pbVar16[uVar26 >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e20:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[uVar18 >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e50:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 - uVar22) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar22) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar22) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar22)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e80:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 - uVar23) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar23) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar23) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar23)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001eb0:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 - uVar24) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar24) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar24) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar24)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ee0:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 - uVar25) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar25) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar25) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar25)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f10:
      uVar20 = uVar26 & 0xff000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 - uVar20) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f40:
      uVar20 = uVar26 * 0x100;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 + uVar26 * -0x100) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f70:
      if (0x1fffffff < uVar26) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar20 = (uint)pbVar16[uVar26 >> 0x10] * 0x1000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 + (uint)pbVar16[uVar26 >> 0x10] * -0x1000000) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001fb0:
      uVar4 = uVar21 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar18,uVar18)) {
        uVar4 = uVar21 & 0xffffff28 | 0x46;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001fe0:
      if ((uVar21 & 0x40) == 0) {
        pbVar29 = (byte *)((int)puVar31 + 1);
        uVar2 = *puVar31;
        puVar31 = puVar31 + 1;
        uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
        if (uVar20 != 0 && 0xaffff < (int)uVar21) {
          uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
          return uVar36;
        }
      }
      else {
LAB_01002c20:
        uVar20 = uVar21 - 0x50000;
                    /* WARNING: Could not recover jumptable at 0x01002c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pbVar29 + 2);
        if (uVar20 != 0 && 0x4ffff < (int)uVar21) {
          uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
          return uVar36;
        }
      }
      break;
    case 0x1002010:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (*puVar31 & 0xff00) << 0x10;
      uVar23 = (uint)*puVar31 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002040:
      if ((uVar21 & 0x40) == 0) {
        uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
        if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
          uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
          return uVar36;
        }
      }
      else {
LAB_01002c00:
        uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pbVar29 + 4);
        if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
          uVar36 = (*(code *)ppuVar15[pbVar29[3]])();
          return uVar36;
        }
      }
      break;
    case 0x1002070:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002090:
      if ((uVar21 & 0x40) != 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010020c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10020d0:
      *(byte *)((int)puVar31 + -1) = bVar6;
      *(byte *)(puVar31 + -1) = (byte)(uVar22 >> 0x10) | bVar7;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002100:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = uVar18 + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(uVar18,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002130:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar16])();
        return uVar36;
      }
      break;
    case 0x1002160:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002190:
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10021b0:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10021e0:
                    /* WARNING: Could not recover jumptable at 0x010021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)ppuVar15[(byte)*puVar30 + 0x100])();
      return uVar36;
    case 0x10021f0:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002230:
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x0100225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002270:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar17 = uVar21 & 0xffffff28;
      uVar4 = uVar18;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(uVar18,0x1000000);
        uVar4 = uVar18 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar4 + uVar20;
      if ((int)uVar18 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar18 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar4,uVar20)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar4,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010022a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])((uint)pbVar29[2],uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10022b0:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010022d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 9);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[8]])();
        return uVar36;
      }
      break;
    case 0x10022e0:
      if ((uVar21 & 1) != 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002310:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (*puVar31 & 0xff00) << 0x10;
      uVar25 = (uint)*puVar31 << 0x18;
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002340:
      if ((uVar21 & 1) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002370:
      if (uVar22 - 0x1000000 == 0) {
        pbVar29 = pbVar29 + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pbVar29 = pbVar29 + (char)(byte)*puVar30 + 2;
      }
      uVar20 = uVar21 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0100238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar22 - 0x1000000;
      puVar28 = (ushort *)(pbVar29 + 1);
      if (uVar20 != 0 && 0x7ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[*pbVar29])();
        return uVar36;
      }
      break;
    case 0x10023a0:
      if ((uVar21 & 1) != 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010023d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10023e0:
      *(byte *)((int)puVar31 + -1) = bVar8;
      *(byte *)(puVar31 + -1) = (byte)(uVar24 >> 0x10) | bVar9;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002410:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = uVar18 + (uint)(byte)*puVar30 * -0x1000000;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002450:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x11);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x10]])();
        return uVar36;
      }
      break;
    case 0x1002480:
      if ((uVar21 & 1) == 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10024b0:
      uVar4 = *(uint *)(param_1 + 0x450);
      *(uint *)(param_1 + 0x450) = uVar22 | uVar23 >> 8;
      uVar17 = *(uint *)(param_1 + 0x454);
      *(uint *)(param_1 + 0x454) = uVar24 | uVar25 >> 8;
      uVar19 = *(uint *)(param_1 + 0x458);
      *(uint *)(param_1 + 0x458) = uVar26;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010024ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar4 & 0xff000000;
      uVar23 = uVar4 << 8;
      uVar24 = uVar17 & 0xff000000;
      uVar25 = uVar17 << 8;
      uVar26 = uVar19;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002500:
      if ((uVar21 & 1) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002530:
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = 0xff000000;
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002550:
      if ((uVar21 & 1) == 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002590:
                    /* WARNING: Could not recover jumptable at 0x010025a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)ppuVar15[(byte)*puVar30 + 0x300])(*(undefined4 *)(param_1 + 0x42c));
      return uVar36;
    case 0x10025b0:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar19 = uVar21 & 0xffffff28 | 2;
      uVar4 = (uVar21 & 1) * 0x1000000;
      uVar17 = uVar18 + (uVar21 & 1) * -0x1000000;
      if (uVar18 < uVar4) {
        uVar19 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar18,uVar4)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar17 + (uint)(byte)*puVar30 * -0x1000000;
      if ((int)uVar18 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar18 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (uVar17 < uVar20) {
        uVar19 = uVar19 | 1;
      }
      if (SBORROW4(uVar17,uVar20)) {
        uVar19 = uVar19 ^ 4;
      }
      uVar20 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010025ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar19) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002600:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x19);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x18]])();
        return uVar36;
      }
      break;
    case 0x1002630:
      if ((uVar21 & 4) != 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002660:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar26 = (uint)*puVar31 << 0x10;
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002680:
      if ((uVar21 & 4) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010026a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10026b0:
      uVar2 = *puVar31;
      *(byte *)puVar31 = bVar3;
      bVar3 = *(byte *)((int)puVar31 + 1);
      *(byte *)((int)puVar31 + 1) = bVar10;
      uVar20 = uVar21 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x010026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar26 = (uint)CONCAT11(bVar3,(byte)uVar2) << 0x10;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x12ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10026e0:
      if ((uVar21 & 4) != 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002720:
      *(byte *)((int)puVar31 + -1) = bVar10;
      *(byte *)(puVar31 + -1) = bVar3;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002740:
      uVar18 = uVar18 & (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar18 >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002770:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x21);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x20]])();
        return uVar36;
      }
      break;
    case 0x10027a0:
      if ((uVar21 & 4) == 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010027c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10027d0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uVar26 >> 0x10) + 1);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[uVar26 >> 0x10]])();
        return uVar36;
      }
      break;
    case 0x10027f0:
      if ((uVar21 & 4) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002820:
      uVar4 = uVar24 | uVar25 >> 8;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar26 & 0xff000000;
      uVar25 = uVar26 << 8;
      uVar26 = uVar4;
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002850:
      if ((uVar21 & 4) == 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002890:
                    /* WARNING: Could not recover jumptable at 0x01002898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)ppuVar15[(byte)*puVar30 + 0x200])();
      return uVar36;
    case 0x10028a0:
      uVar18 = uVar18 ^ (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar18 >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010028c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x10028d0:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010028ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x29);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x28]])();
        return uVar36;
      }
      break;
    case 0x1002900:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002930:
      uVar21 = uVar21 & 0xffffff28 | *puVar31 & 0xff;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (uint)(*puVar31 >> 8) << 0x18;
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002960:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002990:
      *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x444) & 0xfffffff3;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010029a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10029b0:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010029e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10029f0:
      *(byte *)((int)puVar31 + -1) = bVar5;
      *(byte *)(puVar31 + -1) = bVar1 | (byte)(uVar18 >> 0x10);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002a20:
      uVar18 = uVar18 | (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar18 >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002a50:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x31);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x30]])();
        return uVar36;
      }
      break;
    case 0x1002a80:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c20;
      pbVar29 = (byte *)((int)puVar31 + 1);
      uVar2 = *puVar31;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + (uint)*pbVar29 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar31 = puVar31 + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[(uint)*pbVar29 * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002ab0:
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01002abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 2);
      puVar31 = (ushort *)(pbVar16 + (uVar26 >> 0x10));
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002ad0:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002b00:
      *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x444) | 0xc;
      *(int *)(param_1 + 0x428) = (int)uVar21 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x01002b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)ppuVar15[(byte)*puVar30])();
      return uVar36;
    case 0x1002b30:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c00;
      pbVar29 = (byte *)((int)puVar30 + (2 - (int)pbVar16));
      *(byte *)((int)puVar31 + -1) = (byte)((uint)pbVar29 >> 8);
      *(byte *)(puVar31 + -1) = (byte)pbVar29;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + *puVar30 + 1);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002b70:
                    /* WARNING: Could not recover jumptable at 0x01002b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)ppuVar15[(byte)*puVar30 + 0x300])(*(undefined4 *)(param_1 + 0x430));
      return uVar36;
    case 0x1002b90:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(uVar18 + (uint)(byte)*puVar30 * -0x1000000) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar18 == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar29 + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)ppuVar15[pbVar29[2]])();
        return uVar36;
      }
      break;
    case 0x1002bd0:
      *(byte *)((int)puVar31 + -1) = (byte)((uint)((int)puVar30 - (int)pbVar16) >> 8);
      *(byte *)(puVar31 + -1) = (byte)((int)puVar30 - (int)pbVar16);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pbVar16 + 0x39);
      puVar31 = puVar31 + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)ppuVar15[pbVar16[0x38]])();
        return uVar36;
      }
    }
    pbVar29 = (byte *)((int)puVar28 + -1);
    uVar21 = *(uint *)(param_1 + 0x428);
    in_OV = false;
    if (0 < (int)uVar21) {
      *(undefined4 *)(param_1 + 0x428) = 0;
      in_OV = SCARRY4(uVar20,uVar21 * 0x10000);
      uVar20 = uVar20 + uVar21 * 0x10000;
      uVar21 = uVar20;
    }
    if (uVar21 == 0 || (int)uVar21 < 0 != (bool)in_OV) {
      uVar21 = *(uint *)(param_1 + 0x480);
      iVar13 = *(int *)(param_1 + 0x478);
      if ((uVar21 & 0x300) == 0) {
        iVar14 = *(int *)(param_1 + 0x474) - iVar13;
        if (iVar14 != 0 && iVar13 <= *(int *)(param_1 + 0x474)) {
          if (iVar14 < iVar13) {
            *(int *)(param_1 + 0x478) = iVar14;
          }
          *(int *)(param_1 + 0x474) = iVar14;
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar36 = (*(code *)ppuVar15[*pbVar29])();
          return uVar36;
        }
      }
      else {
        if ((uVar21 & 0x100) != 0) {
          iVar11 = *(int *)(param_1 + 0x488);
          iVar14 = *(int *)(param_1 + 0x484);
          if (*(int *)(param_1 + 0x484) < 1) {
            iVar14 = iVar13;
          }
          bVar35 = SBORROW4(iVar11,iVar13);
          iVar12 = iVar11 - iVar13;
          bVar32 = iVar12 < 0;
          bVar33 = iVar12 == 0;
          if (bVar33 || iVar11 < iVar13) {
            uVar21 = uVar21 | 1;
          }
          do {
            if (bVar33 || bVar32 != bVar35) {
              bVar35 = SCARRY4(iVar12,iVar14);
              iVar12 = iVar12 + iVar14;
              bVar32 = iVar12 < 0;
              bVar33 = iVar12 == 0;
            }
          } while (bVar32 != bVar35);
          *(int *)(param_1 + 0x488) = iVar12;
        }
        if ((uVar21 & 0x200) != 0) {
          iVar11 = *(int *)(param_1 + 0x490);
          iVar14 = *(int *)(param_1 + 0x48c);
          if (*(int *)(param_1 + 0x48c) < 1) {
            iVar14 = iVar13;
          }
          bVar35 = SBORROW4(iVar11,iVar13);
          iVar12 = iVar11 - iVar13;
          bVar32 = iVar12 < 0;
          bVar33 = iVar12 == 0;
          if (bVar33 || iVar11 < iVar13) {
            uVar21 = uVar21 | 2;
          }
          do {
            if (bVar33 || bVar32 != bVar35) {
              bVar35 = SCARRY4(iVar12,iVar14);
              iVar12 = iVar12 + iVar14;
              bVar32 = iVar12 < 0;
              bVar33 = iVar12 == 0;
            }
          } while (bVar32 != bVar35);
          *(int *)(param_1 + 0x490) = iVar12;
        }
        *(uint *)(param_1 + 0x480) = uVar21;
        iVar14 = *(int *)(param_1 + 0x474) - iVar13;
        if (iVar14 != 0 && iVar13 <= *(int *)(param_1 + 0x474)) {
          *(int *)(param_1 + 0x474) = iVar14;
          if ((uVar21 & 0x100) != 0) {
            iVar11 = *(int *)(param_1 + 0x488);
            bVar32 = iVar11 == 0;
            iVar13 = iVar11;
            if (0 < iVar11) {
              iVar13 = iVar14 - iVar11;
              bVar32 = iVar14 == iVar11;
            }
            if (!bVar32 && iVar13 < 0 == (0 < iVar11 && SBORROW4(iVar14,iVar11))) {
              iVar14 = iVar11;
            }
          }
          if ((uVar21 & 0x200) != 0) {
            iVar11 = *(int *)(param_1 + 0x490);
            bVar32 = iVar11 == 0;
            iVar13 = iVar11;
            if (0 < iVar11) {
              iVar13 = iVar14 - iVar11;
              bVar32 = iVar14 == iVar11;
            }
            if (!bVar32 && iVar13 < 0 == (0 < iVar11 && SBORROW4(iVar14,iVar11))) {
              iVar14 = iVar11;
            }
          }
          *(int *)(param_1 + 0x478) = iVar14;
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar36 = (**(code **)(*(int *)(param_1 + 0x494) + (uint)*pbVar29 * 4))();
          return uVar36;
        }
      }
      *(byte **)(param_1 + 0x400) = pbVar16;
      *(uint *)(param_1 + 0x404) = uVar18;
      *(uint *)(param_1 + 0x408) = uVar20;
      *(uint *)(param_1 + 0x40c) = uVar22;
      *(uint *)(param_1 + 0x410) = uVar23;
      *(uint *)(param_1 + 0x414) = uVar24;
      *(uint *)(param_1 + 0x418) = uVar25;
      *(uint *)(param_1 + 0x41c) = uVar26;
      *(byte **)(param_1 + 0x420) = pbVar29;
      *(ushort **)(param_1 + 0x424) = puVar31;
      return CONCAT44(param_1 + 0x428,(int)uVar20 >> 0x10);
    }
  } while( true );
}


// 0x02011c48  dispatch_indexed_cb_with_displacement

void dispatch_indexed_cb_with_displacement(int param_1,undefined4 param_2,int param_3)

{
  char *unaff_r11;
  
                    /* WARNING: Could not recover jumptable at 0x02011c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x1000 + (uint)(byte)unaff_r11[1] * 4))
            ((uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10);
  return;
}


// 0x02011d28  resume_base_decode_after_unused_index_prefix

undefined8 resume_base_decode_after_unused_index_prefix(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x02011d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)unaff_r11[-1] * 4))();
    return uVar8;
  }
  pbVar3 = unaff_r11 + -1;
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
  }
  if (iVar4 == 0 || iVar4 < 0 != bVar5) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar4 = in_stack_00000074 - in_stack_00000078;
      if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar4 < in_stack_00000078) {
          in_stack_00000078 = iVar4;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar4;
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar4 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar1 < 0;
        bVar6 = iVar1 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar1,iVar4);
            iVar1 = iVar1 + iVar4;
            bVar5 = iVar1 < 0;
            bVar6 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar1 < 0;
        bVar6 = iVar1 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar1,iVar4);
            iVar1 = iVar1 + iVar4;
            bVar5 = iVar1 < 0;
            bVar6 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar5 != bVar7);
      }
      iVar4 = in_stack_00000074 - in_stack_00000078;
      if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar4;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar5 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar4 - in_stack_00000088;
            bVar5 = iVar4 == in_stack_00000088;
          }
          if (!bVar5 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar5 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar5 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar5 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar4;
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = unaff_r11;
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


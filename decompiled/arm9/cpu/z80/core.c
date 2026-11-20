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
  uint cycles_due;
  uint chunk_loop_remainder;
  
  cycles_due = z80_scheduled_cycles_lo - z80_accounted_cycles_lo;
  if (0x3fff < cycles_due) {
    chunk_loop_remainder = (cycles_due + ((cycles_due - 0x4000) / 0x3fff) * -0x3fff) - 0x3fff;
    do {
      while (((cycles_due = cycles_due - 0x3fff, (emulator_option_flags & 2) == 0 && (z80_reset_released == '\x01')) &&
             (z80_bus_request_asserted == '\0'))) {
        run_z80_cycle_budget(&z80_context,0x3fff);
        if (cycles_due == chunk_loop_remainder) goto LAB_02000634;
      }
    } while (cycles_due != chunk_loop_remainder);
  }
LAB_02000634:
  if (((cycles_due != 0) && ((emulator_option_flags & 2) == 0)) &&
     ((z80_reset_released == '\x01' && (z80_bus_request_asserted == '\0')))) {
    run_z80_cycle_budget(&z80_context,cycles_due);
  }
  z80_accounted_cycles_lo = z80_scheduled_cycles_lo;
  z80_accounted_cycles_hi = z80_scheduled_cycles_hi;
  DAT_0b0000a8 = 0;
  return;
}


// 0x020006b8  accrue_z80_cycles_for_scanline

void accrue_z80_cycles_for_scanline(void)

{
  uint cycles_due;
  uint chunk_loop_remainder;
  bool bVar3;
  
  bVar3 = 0xffffff1c < z80_scheduled_cycles_lo;
  z80_scheduled_cycles_lo = z80_scheduled_cycles_lo + 0xe3;
  z80_scheduled_cycles_hi = z80_scheduled_cycles_hi + (uint)bVar3;
  cycles_due = z80_scheduled_cycles_lo - z80_accounted_cycles_lo;
  bVar3 = cycles_due == 0x3ffe;
  if (cycles_due < 0x3fff) {
    bVar3 = DAT_0b0000a8 == 0;
  }
  if (!bVar3) {
    if (0x3fff < cycles_due) {
      chunk_loop_remainder = (cycles_due + ((cycles_due - 0x4000) / 0x3fff) * -0x3fff) - 0x3fff;
      do {
        while (((cycles_due = cycles_due - 0x3fff, (emulator_option_flags & 2) == 0 && (z80_reset_released == '\x01')) &&
               (z80_bus_request_asserted == '\0'))) {
          run_z80_cycle_budget(&z80_context,0x3fff);
          if (cycles_due == chunk_loop_remainder) goto LAB_02000794;
        }
      } while (cycles_due != chunk_loop_remainder);
    }
LAB_02000794:
    if (((cycles_due != 0) && ((emulator_option_flags & 2) == 0)) &&
       ((z80_reset_released == '\x01' && (z80_bus_request_asserted == '\0')))) {
      run_z80_cycle_budget(&z80_context,cycles_due);
    }
    z80_accounted_cycles_lo = z80_scheduled_cycles_lo;
    z80_accounted_cycles_hi = z80_scheduled_cycles_hi;
    DAT_0b0000a8 = 0;
  }
  return;
}


// 0x0200df50  run_z80_cycle_budget

/* WARNING: Removing unreachable block (ram,0x01001fbc) */
/* WARNING: Removing unreachable block (ram,0x0100179c) */
/* WARNING: Removing unreachable block (ram,0x01001fc4) */
/* WARNING: Removing unreachable block (ram,0x010017a4) */

undefined8 run_z80_cycle_budget(int z80_state,int cycle_budget)

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
  undefined **opcode_table;
  byte *work_ram_base;
  uint uVar17;
  uint accumulator_value;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint b_register_value;
  uint c_register_value;
  uint d_register_value;
  uint e_register_value;
  uint hl_register_value;
  byte *pbVar27;
  ushort *puVar28;
  byte *pc_host_pointer;
  ushort *puVar30;
  ushort *sp_host_pointer;
  undefined1 in_OV;
  bool bVar32;
  bool bVar33;
  undefined1 uVar34;
  bool bVar35;
  undefined8 uVar36;
  
  *(undefined1 **)(z80_state + 0x460) = &stack0xffffffd8;
  work_ram_base = *(byte **)(z80_state + 0x400);
  accumulator_value = *(uint *)(z80_state + 0x404);
  b_register_value = *(uint *)(z80_state + 0x40c);
  c_register_value = *(uint *)(z80_state + 0x410);
  d_register_value = *(uint *)(z80_state + 0x414);
  e_register_value = *(uint *)(z80_state + 0x418);
  hl_register_value = *(uint *)(z80_state + 0x41c);
  pc_host_pointer = *(byte **)(z80_state + 0x420);
  sp_host_pointer = *(ushort **)(z80_state + 0x424);
  *(int *)(z80_state + 0x474) = cycle_budget;
  iVar13 = *(int *)(z80_state + 0x488);
  if ((*(uint *)(z80_state + 0x480) & 0x100) != 0) {
    bVar32 = iVar13 == 0;
    iVar14 = iVar13;
    if (0 < iVar13) {
      iVar14 = cycle_budget - iVar13;
      bVar32 = cycle_budget == iVar13;
    }
    in_OV = 0 < iVar13 && SBORROW4(cycle_budget,iVar13);
    if (!bVar32 && iVar14 < 0 == (bool)in_OV) {
      cycle_budget = iVar13;
    }
  }
  if ((*(uint *)(z80_state + 0x480) & 0x200) != 0) {
    iVar14 = *(int *)(z80_state + 0x490);
    bVar32 = iVar14 == 0;
    iVar13 = iVar14;
    if (0 < iVar14) {
      iVar13 = cycle_budget - iVar14;
      bVar32 = cycle_budget == iVar14;
    }
    in_OV = 0 < iVar14 && SBORROW4(cycle_budget,iVar14);
    if (!bVar32 && iVar13 < 0 == (bool)in_OV) {
      cycle_budget = iVar14;
    }
  }
  uVar20 = *(int *)(z80_state + 0x408) + cycle_budget * 0x10000;
  *(int *)(z80_state + 0x478) = cycle_budget;
  opcode_table = &z80_arm_base_opcode_table;
  do {
    uVar21 = uVar20;
    if ((*(int *)(z80_state + 0x4a4) != 0) && (uVar4 = *(uint *)(z80_state + 0x444), (uVar4 & 8) != 0))
    {
      *(undefined4 *)(z80_state + 0x4a4) = 0;
      if (*pc_host_pointer == 0x76) {
        pc_host_pointer = pc_host_pointer + 1;
      }
      *(uint *)(z80_state + 0x444) = uVar4 & 0xfffffff3;
      in_OV = SBORROW4(uVar4 & 3,2);
      if ((uVar4 & 3) == 2) {
        *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)pc_host_pointer - (int)work_ram_base) >> 8);
        sp_host_pointer = sp_host_pointer + -1;
        *(byte *)sp_host_pointer = (byte)((int)pc_host_pointer - (int)work_ram_base);
        uVar21 = uVar20 - 0x130000;
      }
      else {
        *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)pc_host_pointer - (int)work_ram_base) >> 8);
        sp_host_pointer = sp_host_pointer + -1;
        *(byte *)sp_host_pointer = (byte)((int)pc_host_pointer - (int)work_ram_base);
        uVar21 = uVar20 - 0xd0000;
        pc_host_pointer = work_ram_base + 0x38;
      }
    }
    puVar30 = (ushort *)(pc_host_pointer + 1);
    bVar3 = (byte)(hl_register_value >> 0x10);
    bVar10 = (byte)(hl_register_value >> 0x18);
    bVar5 = (byte)(accumulator_value >> 0x18);
    bVar1 = (byte)uVar21;
    bVar6 = (byte)(b_register_value >> 0x18);
    bVar7 = (byte)(c_register_value >> 0x18);
    bVar8 = (byte)(d_register_value >> 0x18);
    bVar9 = (byte)(e_register_value >> 0x18);
    switch((uint)opcode_table[*pc_host_pointer] & 0xfffffffe) {
    case 0x1000020:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000030:
      c_register_value = (uint)*puVar30 << 0x18;
      b_register_value = (*puVar30 & 0xff00) << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000060:
      uVar20 = (b_register_value | c_register_value >> 8) >> 0x10;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1;
      }
      work_ram_base[uVar20] = bVar5;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000090:
      bVar32 = 0xfeffffff < c_register_value;
      c_register_value = c_register_value + 0x1000000;
      if (bVar32) {
        b_register_value = b_register_value + 0x1000000;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10000b0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(b_register_value,0x1000000);
      b_register_value = b_register_value + 0x1000000;
      if ((int)b_register_value < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (b_register_value == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10000e0:
      bVar32 = SBORROW4(b_register_value,0x1000000);
      b_register_value = b_register_value - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)b_register_value < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (b_register_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000110:
      b_register_value = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1000130:
      accumulator_value = accumulator_value << 1;
      if ((bool)(bVar5 >> 7)) {
        accumulator_value = accumulator_value | 0x1000000;
      }
      uVar21 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000150:
      uVar4 = *(uint *)(z80_state + 0x448);
      uVar20 = *(uint *)(z80_state + 0x44c);
      *(uint *)(z80_state + 0x448) = accumulator_value;
      *(uint *)(z80_state + 0x44c) = uVar21;
      uVar21 = uVar21 & 0xffffff28 | uVar20 & 0xff;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000180:
      uVar20 = b_register_value | c_register_value >> 8;
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(hl_register_value,uVar20);
      hl_register_value = hl_register_value + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001a0:
      accumulator_value = (b_register_value | c_register_value >> 8) >> 0x10;
      if (0x1fff < accumulator_value) {
        accumulator_value = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010001c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)work_ram_base[accumulator_value] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001d0:
      bVar32 = c_register_value < 0x1000000;
      c_register_value = c_register_value - 0x1000000;
      if (bVar32) {
        b_register_value = b_register_value - 0x1000000;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010001e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10001f0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(c_register_value,0x1000000);
      c_register_value = c_register_value + 0x1000000;
      if ((int)c_register_value < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (c_register_value == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000220:
      bVar32 = SBORROW4(c_register_value,0x1000000);
      c_register_value = c_register_value - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)c_register_value < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (c_register_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000250:
      c_register_value = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1000270:
      accumulator_value = accumulator_value >> 0x19;
      if ((bool)(bVar5 & 1)) {
        accumulator_value = accumulator_value | 0x80;
      }
      uVar21 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10002a0:
      b_register_value = b_register_value - 0x1000000;
      if (b_register_value == 0) {
        iVar13 = 0;
        pbVar27 = pc_host_pointer + 2;
      }
      else {
        iVar13 = (int)(char)(byte)*puVar30;
        uVar21 = uVar21 - 0x50000;
        pbVar27 = pc_host_pointer + iVar13 + 2;
      }
      if (iVar13 == -2) {
        bVar3 = 0x27;
      }
      else {
        bVar3 = 0xd3;
      }
      *pc_host_pointer = bVar3;
      puVar28 = (ushort *)(pbVar27 + 1);
      uVar20 = uVar21 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x010002d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x7ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pbVar27])();
        return uVar36;
      }
      break;
    case 0x10002e0:
      e_register_value = (uint)*puVar30 << 0x18;
      d_register_value = (*puVar30 & 0xff00) << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000310:
      uVar20 = (d_register_value | e_register_value >> 8) >> 0x10;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1_00;
      }
      work_ram_base[uVar20] = bVar5;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000340:
      bVar32 = 0xfeffffff < e_register_value;
      e_register_value = e_register_value + 0x1000000;
      if (bVar32) {
        d_register_value = d_register_value + 0x1000000;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000360:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(d_register_value,0x1000000);
      d_register_value = d_register_value + 0x1000000;
      if ((int)d_register_value < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (d_register_value == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000390:
      bVar32 = SBORROW4(d_register_value,0x1000000);
      d_register_value = d_register_value - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)d_register_value < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (d_register_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010003b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10003c0:
      d_register_value = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x10003e0:
      uVar4 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar4 = uVar4 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value << 1 | (uVar21 & 1) << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000410:
      puVar28 = (ushort *)(pc_host_pointer + (char)(byte)*puVar30 + 2 + 1);
      uVar20 = uVar21 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x01000420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xbffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[(char)(byte)*puVar30 + 2]])();
        return uVar36;
      }
      break;
    case 0x1000430:
      uVar20 = d_register_value | e_register_value >> 8;
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(hl_register_value,uVar20);
      hl_register_value = hl_register_value + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000450:
      accumulator_value = (d_register_value | e_register_value >> 8) >> 0x10;
      if (0x1fff < accumulator_value) {
        accumulator_value = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)work_ram_base[accumulator_value] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000480:
      bVar32 = e_register_value < 0x1000000;
      e_register_value = e_register_value - 0x1000000;
      if (bVar32) {
        d_register_value = d_register_value - 0x1000000;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10004a0:
      uVar21 = uVar21 & 0xffffff29;
      bVar32 = SCARRY4(e_register_value,0x1000000);
      e_register_value = e_register_value + 0x1000000;
      if ((int)e_register_value < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (bVar32) {
        uVar21 = uVar21 | 4;
      }
      if (e_register_value == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10004d0:
      bVar32 = SBORROW4(e_register_value,0x1000000);
      e_register_value = e_register_value - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)e_register_value < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (e_register_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (bVar32) {
        uVar4 = uVar4 | 4;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000500:
      e_register_value = (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1000520:
      uVar4 = uVar21 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar4 = uVar4 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar21 << 0x1f | (accumulator_value >> 0x19) << 0x18;
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000550:
      if ((uVar21 & 0x40) == 0) {
        uVar21 = uVar21 - 0x50000;
        pc_host_pointer = pc_host_pointer + (char)(byte)*puVar30 + 2;
      }
      else {
        pc_host_pointer = pc_host_pointer + 2;
      }
      puVar28 = (ushort *)(pc_host_pointer + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x1000580:
      hl_register_value = (uint)*puVar30 << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x10005a0:
      uVar2 = *puVar30;
      work_ram_base[uVar2] = bVar3;
      work_ram_base[uVar2 + 1] = bVar10;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x010005c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xfffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x10005d0:
      hl_register_value = hl_register_value + 0x10000;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010005dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10005f0:
      uVar20 = hl_register_value & 0xff000000;
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
      hl_register_value = hl_register_value + 0x1000000;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000620:
      uVar20 = hl_register_value & 0xff000000;
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
      hl_register_value = hl_register_value - 0x1000000;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000650:
      hl_register_value = hl_register_value & 0xff0000 | (uint)(byte)*puVar30 << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1000670:
      b_register_value = b_register_value - 0x1000000;
      iVar13 = ((uVar21 - (b_register_value >> 8)) - (b_register_value >> 6)) - (b_register_value >> 5);
      puVar28 = (ushort *)(pc_host_pointer + 3);
      b_register_value = 0;
      uVar20 = iVar13 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x01000690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x7ffff < iVar13) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x10006a0:
      if ((uVar21 & 0x40) == 0) {
        pc_host_pointer = pc_host_pointer + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pc_host_pointer = pc_host_pointer + (char)(byte)*puVar30 + 2;
      }
      puVar28 = (ushort *)(pc_host_pointer + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010006bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x10006d0:
      uVar21 = uVar21 & 0xffffffec;
      bVar32 = CARRY4(hl_register_value,hl_register_value);
      hl_register_value = hl_register_value * 2;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010006e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10006f0:
      hl_register_value = (uint)*puVar30;
      if (0x1fff < hl_register_value) {
        hl_register_value = bridge_to_z80_mapped_word_read();
      }
      hl_register_value = (uint)CONCAT11(work_ram_base[hl_register_value + 1],work_ram_base[hl_register_value]) << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x01000720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xfffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000730:
      hl_register_value = hl_register_value - 0x10000;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000750:
      uVar21 = uVar21 & 0xffffff29;
      uVar20 = hl_register_value * 0x100 + 0x1000000;
      if ((int)uVar20 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4(hl_register_value * 0x100,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (uVar20 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      hl_register_value = hl_register_value & 0xff000000 | uVar20 >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000780:
      uVar20 = hl_register_value * 0x100 - 0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar20 < 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar20 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (SBORROW4(hl_register_value * 0x100,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      hl_register_value = hl_register_value & 0xff000000 | uVar20 >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10007c0:
      hl_register_value = hl_register_value & 0xff000000 | (uint)(byte)*puVar30 << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x10007e0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = (uVar21 | 0x12) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value ^ 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)(uVar21 | 0x12)) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000800:
      if ((uVar21 & 1) == 0) {
        uVar21 = uVar21 - 0x50000;
        pc_host_pointer = pc_host_pointer + (char)(byte)*puVar30 + 2;
      }
      else {
        pc_host_pointer = pc_host_pointer + 2;
      }
      puVar28 = (ushort *)(pc_host_pointer + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x1000830:
      sp_host_pointer = (ushort *)(work_ram_base + *puVar30);
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000850:
      uVar20 = (uint)*puVar30;
      if (0x1fff < uVar20) {
        uVar20 = route_z80_mapped_byte_write();
        bVar5 = extraout_r1_01;
      }
      work_ram_base[uVar20] = bVar5;
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x01000874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xcffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000880:
      sp_host_pointer = (ushort *)((int)sp_host_pointer + 1);
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10008a0:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar21 = uVar21 & 0xffffff29;
      iVar13 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000 + 0x1000000;
      if (iVar13 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4((uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (iVar13 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      bVar3 = (byte)((uint)iVar13 >> 0x18);
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_02;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar3;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010008e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10008f0:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      iVar13 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000 + -0x1000000;
      uVar4 = uVar21 & 0xffffff29 | 2;
      if (iVar13 == 0) {
        uVar4 = uVar21 & 0xffffff29 | 0x42;
      }
      if (iVar13 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (SBORROW4((uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      bVar3 = (byte)((uint)iVar13 >> 0x18);
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_03;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar3;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar4 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000940:
      bVar3 = (byte)*puVar30;
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_04;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar3;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1000960:
      uVar21 = uVar21 & 0xffffffed | 1;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000980:
      if ((uVar21 & 1) == 0) {
        pc_host_pointer = pc_host_pointer + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pc_host_pointer = pc_host_pointer + (char)(byte)*puVar30 + 2;
      }
      puVar28 = (ushort *)(pc_host_pointer + 1);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x10009b0:
      uVar21 = uVar21 & 0xffffffec;
      uVar20 = ((int)sp_host_pointer - (int)work_ram_base) * 0x10000;
      bVar32 = CARRY4(hl_register_value,uVar20);
      hl_register_value = hl_register_value + uVar20;
      if (bVar32) {
        uVar21 = uVar21 | 1;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010009c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10009d0:
      accumulator_value = (uint)*puVar30;
      if (0x1fff < accumulator_value) {
        accumulator_value = dispatch_z80_mapped_read_by_address_page();
      }
      puVar28 = (ushort *)(pc_host_pointer + 4);
      uVar20 = uVar21 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x010009f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)work_ram_base[accumulator_value] << 0x18;
      if (uVar20 != 0 && 0xcffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
        return uVar36;
      }
      break;
    case 0x1000a00:
      sp_host_pointer = (ushort *)((int)sp_host_pointer + -1);
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a20:
      uVar21 = uVar21 & 0xffffff29;
      uVar4 = accumulator_value + 0x1000000;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (SCARRY4(accumulator_value,0x1000000)) {
        uVar21 = uVar21 | 4;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a50:
      uVar4 = accumulator_value - 0x1000000;
      uVar17 = uVar21 & 0xffffff29 | 2;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(accumulator_value,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000a80:
      puVar28 = (ushort *)(pc_host_pointer + 3);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)(byte)*puVar30 << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ad0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ae0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = c_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b00:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = d_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b20:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = e_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b40:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = hl_register_value & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b60:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = hl_register_value << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000b80:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ba0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = accumulator_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000bc0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = b_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000be0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000bf0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = d_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c10:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = e_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c30:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = hl_register_value & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c50:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = hl_register_value << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c70:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000c90:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      c_register_value = accumulator_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cb0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = b_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cd0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = c_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000cf0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d00:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = e_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d20:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = hl_register_value & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d40:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = hl_register_value << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d60:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000d80:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = accumulator_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000da0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = b_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000dc0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = c_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000de0:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = d_register_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e00:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e10:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = hl_register_value & 0xff000000;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e30:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = hl_register_value << 8;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e50:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e70:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      e_register_value = accumulator_value;
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000e90:
      hl_register_value = hl_register_value & 0xff0000 | b_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000eb0:
      hl_register_value = hl_register_value & 0xff0000 | c_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ed0:
      hl_register_value = hl_register_value & 0xff0000 | d_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ef0:
      hl_register_value = hl_register_value & 0xff0000 | e_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f10:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f20:
      hl_register_value = hl_register_value & 0xff0000 | (hl_register_value & 0xff0000) << 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f40:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      hl_register_value = hl_register_value & 0xff0000 | (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f70:
      hl_register_value = hl_register_value & 0xff0000 | accumulator_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000f90:
      hl_register_value = hl_register_value & 0xff000000 | b_register_value >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000fb0:
      hl_register_value = hl_register_value & 0xff000000 | c_register_value >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000fd0:
      hl_register_value = hl_register_value & 0xff000000 | d_register_value >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1000ff0:
      hl_register_value = hl_register_value & 0xff000000 | e_register_value >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001010:
      hl_register_value = hl_register_value & 0xff000000 | (hl_register_value & 0xff000000) >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001030:
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001040:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      hl_register_value = hl_register_value & 0xff000000 | (uint)work_ram_base[hl_register_value >> 0x10] << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001070:
      hl_register_value = hl_register_value & 0xff000000 | accumulator_value >> 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001090:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar6 = extraout_r1_05;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar6;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010b0:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar7 = extraout_r1_06;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar7;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010d0:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar8 = extraout_r1_07;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10010f0:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar9 = extraout_r1_08;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar9;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001110:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar10 = extraout_r1_09;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar10;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001130:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar3 = extraout_r1_10;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar3;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001160:
      uVar20 = (uVar21 & 0xff) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = puVar30;
      if (uVar20 != 0 && 0x3ffff < (uVar21 & 0xff)) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x1001180:
      if (0x1fffffff < hl_register_value) {
        route_z80_mapped_byte_write_from_r10();
        bVar5 = extraout_r1_11;
      }
      work_ram_base[hl_register_value >> 0x10] = bVar5;
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011a0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = b_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011c0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = c_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10011e0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = d_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001200:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = e_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001220:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = hl_register_value & 0xff000000;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001240:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = hl_register_value << 8;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001260:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001280:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001290:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + b_register_value;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,b_register_value)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,b_register_value)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10012c0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + c_register_value;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,c_register_value)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,c_register_value)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10012f0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + d_register_value;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,d_register_value)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,d_register_value)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001320:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + e_register_value;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,e_register_value)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,e_register_value)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001350:
      uVar20 = hl_register_value & 0xff000000;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001380:
      uVar20 = hl_register_value * 0x100;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010013a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10013b0:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar21 = uVar21 & 0xffffff28;
      uVar20 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000;
      uVar4 = accumulator_value + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10013f0:
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value * 2;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,accumulator_value)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,accumulator_value)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001420:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      accumulator_value = uVar20 + b_register_value;
      if ((int)accumulator_value < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,b_register_value)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,b_register_value)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001460:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      accumulator_value = uVar20 + c_register_value;
      if ((int)accumulator_value < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,c_register_value)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,c_register_value)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10014a0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      accumulator_value = uVar20 + d_register_value;
      if ((int)accumulator_value < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,d_register_value)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,d_register_value)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10014e0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      accumulator_value = uVar20 + e_register_value;
      if ((int)accumulator_value < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,e_register_value)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,e_register_value)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001520:
      uVar4 = hl_register_value & 0xff000000;
      uVar17 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar20 + uVar4;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001560:
      uVar20 = hl_register_value * 0x100;
      uVar17 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar4 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 + uVar20;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10015a0:
      uVar34 = SBORROW4(hl_register_value,0x20000000);
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        uVar34 = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)uVar34) {
        uVar4 = uVar4 | 4;
      }
      uVar17 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000;
      accumulator_value = uVar20 + uVar17;
      if ((int)accumulator_value < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10015f0:
      uVar4 = uVar21 & 0xffffff28;
      uVar20 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar20 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar4 = uVar4 | 1;
      }
      if ((bool)in_OV) {
        uVar4 = uVar4 | 4;
      }
      uVar17 = uVar20 + accumulator_value;
      if ((int)uVar17 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (uVar17 == 0) {
        uVar4 = uVar4 | 0x40;
      }
      if (CARRY4(uVar20,accumulator_value)) {
        uVar4 = uVar4 | 1;
      }
      if (SCARRY4(uVar20,accumulator_value)) {
        uVar4 = uVar4 ^ 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar17;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])((uint)(byte)*puVar30,uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x1001630:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value - b_register_value;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < b_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,b_register_value)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001660:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value - c_register_value;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < c_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,c_register_value)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001690:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value - d_register_value;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < d_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,d_register_value)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10016c0:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value - e_register_value;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < e_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,e_register_value)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10016f0:
      uVar20 = hl_register_value & 0xff000000;
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value - uVar20;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001720:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value + hl_register_value * -0x100;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < hl_register_value * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,hl_register_value * 0x100)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001750:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000;
      uVar4 = accumulator_value + (uint)work_ram_base[hl_register_value >> 0x10] * -0x1000000;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001790:
      uVar4 = uVar21 & 0xffffff28 | 0x42;
      if (SBORROW4(accumulator_value,accumulator_value)) {
        uVar4 = uVar21 & 0xffffff28 | 0x46;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = 0;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10017c0:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 - b_register_value;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < b_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,b_register_value)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001800:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 - c_register_value;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < c_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,c_register_value)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001840:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 - d_register_value;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < d_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,d_register_value)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001880:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 - e_register_value;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < e_register_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,e_register_value)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10018c0:
      uVar4 = hl_register_value & 0xff000000;
      uVar19 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar17 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar19 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar19 = uVar19 | 4;
      }
      accumulator_value = uVar17 - uVar4;
      if ((int)accumulator_value < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar19) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001900:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 + hl_register_value * -0x100;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < hl_register_value * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,hl_register_value * 0x100)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001940:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000;
      accumulator_value = uVar4 + (uint)work_ram_base[hl_register_value >> 0x10] * -0x1000000;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001990:
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar20 = (uVar21 & 1) * 0x1000000;
      uVar4 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar20) {
        uVar17 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar21 = uVar4 - accumulator_value;
      if ((int)uVar21 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar21 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < accumulator_value) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,accumulator_value)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar20 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar21;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10019d0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value & b_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value & b_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a00:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value & c_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value & c_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a30:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value & d_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value & d_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a60:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value & e_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value & e_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001a90:
      accumulator_value = accumulator_value & hl_register_value & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ac0:
      accumulator_value = accumulator_value & hl_register_value << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001af0:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      accumulator_value = accumulator_value & (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b20:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b50:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value ^ b_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value ^ b_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001b80:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value ^ c_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value ^ c_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001bb0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value ^ d_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value ^ d_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001be0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value ^ e_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value ^ e_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c10:
      accumulator_value = accumulator_value ^ hl_register_value & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c40:
      accumulator_value = accumulator_value ^ hl_register_value << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001c70:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      accumulator_value = accumulator_value ^ (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ca0:
      uVar21 = uVar21 & 0xffffff28 | (uint)*DAT_01001e44;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = 0;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001cd0:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value | b_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value | b_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d00:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value | c_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value | c_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d30:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value | d_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value | d_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d60:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[(accumulator_value | e_register_value) >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = accumulator_value | e_register_value;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001d90:
      accumulator_value = accumulator_value | hl_register_value & 0xff000000;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001dc0:
      accumulator_value = accumulator_value | hl_register_value << 8;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001df0:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      accumulator_value = accumulator_value | (uint)work_ram_base[hl_register_value >> 0x10] << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e20:
      uVar21 = uVar21 & 0xffffff28 | (uint)DAT_01001e44[accumulator_value >> 0x18];
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e50:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value - b_register_value) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == b_register_value) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < b_register_value) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,b_register_value)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001e80:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value - c_register_value) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == c_register_value) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < c_register_value) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,c_register_value)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001eb0:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value - d_register_value) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == d_register_value) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < d_register_value) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,d_register_value)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001ee0:
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value - e_register_value) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == e_register_value) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < e_register_value) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,e_register_value)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f10:
      uVar20 = hl_register_value & 0xff000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value - uVar20) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f40:
      uVar20 = hl_register_value * 0x100;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value + hl_register_value * -0x100) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001f70:
      if (0x1fffffff < hl_register_value) {
        dispatch_z80_mapped_read_from_r10();
      }
      uVar20 = (uint)work_ram_base[hl_register_value >> 0x10] * 0x1000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value + (uint)work_ram_base[hl_register_value >> 0x10] * -0x1000000) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001fb0:
      uVar4 = uVar21 & 0xffffff28 | 0x42;
      if (SBORROW4(accumulator_value,accumulator_value)) {
        uVar4 = uVar21 & 0xffffff28 | 0x46;
      }
      uVar20 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1001fe0:
      if ((uVar21 & 0x40) == 0) {
        pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
        uVar2 = *sp_host_pointer;
        sp_host_pointer = sp_host_pointer + 1;
        uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
        if (uVar20 != 0 && 0xaffff < (int)uVar21) {
          uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
          return uVar36;
        }
      }
      else {
LAB_01002c20:
        uVar20 = uVar21 - 0x50000;
                    /* WARNING: Could not recover jumptable at 0x01002c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pc_host_pointer + 2);
        if (uVar20 != 0 && 0x4ffff < (int)uVar21) {
          uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
          return uVar36;
        }
      }
      break;
    case 0x1002010:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = (*sp_host_pointer & 0xff00) << 0x10;
      c_register_value = (uint)*sp_host_pointer << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002040:
      if ((uVar21 & 0x40) == 0) {
        uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
        if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
          uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
          return uVar36;
        }
      }
      else {
LAB_01002c00:
        uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar28 = (ushort *)(pc_host_pointer + 4);
        if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
          uVar36 = (*(code *)opcode_table[pc_host_pointer[3]])();
          return uVar36;
        }
      }
      break;
    case 0x1002070:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002090:
      if ((uVar21 & 0x40) != 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010020c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10020d0:
      *(byte *)((int)sp_host_pointer + -1) = bVar6;
      *(byte *)(sp_host_pointer + -1) = (byte)(b_register_value >> 0x10) | bVar7;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002100:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar21 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value + uVar20;
      if ((int)uVar4 < 0) {
        uVar21 = uVar21 | 0x80;
      }
      if (uVar4 == 0) {
        uVar21 = uVar21 | 0x40;
      }
      if (CARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 1;
      }
      if (SCARRY4(accumulator_value,uVar20)) {
        uVar21 = uVar21 | 4;
      }
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002130:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*work_ram_base])();
        return uVar36;
      }
      break;
    case 0x1002160:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002190:
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10021b0:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10021e0:
                    /* WARNING: Could not recover jumptable at 0x010021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)opcode_table[(byte)*puVar30 + 0x100])();
      return uVar36;
    case 0x10021f0:
      if ((uVar21 & 0x40) == 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002230:
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x0100225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002270:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar17 = uVar21 & 0xffffff28;
      uVar4 = accumulator_value;
      if ((bool)(bVar1 & 1)) {
        in_OV = SCARRY4(accumulator_value,0x1000000);
        uVar4 = accumulator_value + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < accumulator_value) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)in_OV) {
        uVar17 = uVar17 | 4;
      }
      accumulator_value = uVar4 + uVar20;
      if ((int)accumulator_value < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])((uint)pc_host_pointer[2],uVar21 >> 1);
        return uVar36;
      }
      break;
    case 0x10022b0:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010022d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 9);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[8]])();
        return uVar36;
      }
      break;
    case 0x10022e0:
      if ((uVar21 & 1) != 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002310:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = (*sp_host_pointer & 0xff00) << 0x10;
      e_register_value = (uint)*sp_host_pointer << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002340:
      if ((uVar21 & 1) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002370:
      if (b_register_value - 0x1000000 == 0) {
        pc_host_pointer = pc_host_pointer + 2;
      }
      else {
        uVar21 = uVar21 - 0x50000;
        pc_host_pointer = pc_host_pointer + (char)(byte)*puVar30 + 2;
      }
      uVar20 = uVar21 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0100238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = b_register_value - 0x1000000;
      puVar28 = (ushort *)(pc_host_pointer + 1);
      if (uVar20 != 0 && 0x7ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
        return uVar36;
      }
      break;
    case 0x10023a0:
      if ((uVar21 & 1) != 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010023d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10023e0:
      *(byte *)((int)sp_host_pointer + -1) = bVar8;
      *(byte *)(sp_host_pointer + -1) = (byte)(d_register_value >> 0x10) | bVar9;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002410:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar17 = uVar21 & 0xffffff28 | 2;
      uVar4 = accumulator_value + (uint)(byte)*puVar30 * -0x1000000;
      if ((int)uVar4 < 0) {
        uVar17 = uVar21 & 0xffffff28 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar17 = uVar17 | 4;
      }
      uVar20 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar17) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002450:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x11);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x10]])();
        return uVar36;
      }
      break;
    case 0x1002480:
      if ((uVar21 & 1) == 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10024b0:
      uVar4 = *(uint *)(z80_state + 0x450);
      *(uint *)(z80_state + 0x450) = b_register_value | c_register_value >> 8;
      uVar17 = *(uint *)(z80_state + 0x454);
      *(uint *)(z80_state + 0x454) = d_register_value | e_register_value >> 8;
      uVar19 = *(uint *)(z80_state + 0x458);
      *(uint *)(z80_state + 0x458) = hl_register_value;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010024ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      b_register_value = uVar4 & 0xff000000;
      c_register_value = uVar4 << 8;
      d_register_value = uVar17 & 0xff000000;
      e_register_value = uVar17 << 8;
      hl_register_value = uVar19;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002500:
      if ((uVar21 & 1) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002530:
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = 0xff000000;
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002550:
      if ((uVar21 & 1) == 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002590:
                    /* WARNING: Could not recover jumptable at 0x010025a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)opcode_table[(byte)*puVar30 + 0x300])(*(undefined4 *)(z80_state + 0x42c));
      return uVar36;
    case 0x10025b0:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar19 = uVar21 & 0xffffff28 | 2;
      uVar4 = (uVar21 & 1) * 0x1000000;
      uVar17 = accumulator_value + (uVar21 & 1) * -0x1000000;
      if (accumulator_value < uVar4) {
        uVar19 = uVar21 & 0xffffff28 | 3;
      }
      if (SBORROW4(accumulator_value,uVar4)) {
        uVar19 = uVar19 | 4;
      }
      accumulator_value = uVar17 + (uint)(byte)*puVar30 * -0x1000000;
      if ((int)accumulator_value < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (accumulator_value == 0) {
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
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar19) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002600:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x19);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x18]])();
        return uVar36;
      }
      break;
    case 0x1002630:
      if ((uVar21 & 4) != 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002660:
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      hl_register_value = (uint)*sp_host_pointer << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002680:
      if ((uVar21 & 4) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010026a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10026b0:
      uVar2 = *sp_host_pointer;
      *(byte *)sp_host_pointer = bVar3;
      bVar3 = *(byte *)((int)sp_host_pointer + 1);
      *(byte *)((int)sp_host_pointer + 1) = bVar10;
      uVar20 = uVar21 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x010026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      hl_register_value = (uint)CONCAT11(bVar3,(byte)uVar2) << 0x10;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x12ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10026e0:
      if ((uVar21 & 4) != 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002720:
      *(byte *)((int)sp_host_pointer + -1) = bVar10;
      *(byte *)(sp_host_pointer + -1) = bVar3;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002740:
      accumulator_value = accumulator_value & (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (accumulator_value >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002770:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x21);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x20]])();
        return uVar36;
      }
      break;
    case 0x10027a0:
      if ((uVar21 & 4) == 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010027c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x10027d0:
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (hl_register_value >> 0x10) + 1);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[hl_register_value >> 0x10]])();
        return uVar36;
      }
      break;
    case 0x10027f0:
      if ((uVar21 & 4) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002820:
      uVar4 = d_register_value | e_register_value >> 8;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      d_register_value = hl_register_value & 0xff000000;
      e_register_value = hl_register_value << 8;
      hl_register_value = uVar4;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002850:
      if ((uVar21 & 4) == 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002890:
                    /* WARNING: Could not recover jumptable at 0x01002898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)opcode_table[(byte)*puVar30 + 0x200])();
      return uVar36;
    case 0x10028a0:
      accumulator_value = accumulator_value ^ (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (accumulator_value >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010028c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x10028d0:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010028ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x29);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x28]])();
        return uVar36;
      }
      break;
    case 0x1002900:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002930:
      uVar21 = uVar21 & 0xffffff28 | *sp_host_pointer & 0xff;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      accumulator_value = (uint)(*sp_host_pointer >> 8) << 0x18;
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002960:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002990:
      *(uint *)(z80_state + 0x444) = *(uint *)(z80_state + 0x444) & 0xfffffff3;
      uVar20 = uVar21 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010029a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      if (uVar20 != 0 && 0x3ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x10029b0:
      if ((uVar21 & 0x80) != 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010029e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x10029f0:
      *(byte *)((int)sp_host_pointer + -1) = bVar5;
      *(byte *)(sp_host_pointer + -1) = bVar1 | (byte)(accumulator_value >> 0x10);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002a20:
      accumulator_value = accumulator_value | (uint)(byte)*puVar30 << 0x18;
      uVar21 = uVar21 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (accumulator_value >> 0x18));
      uVar20 = uVar21 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002a50:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x31);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x30]])();
        return uVar36;
      }
      break;
    case 0x1002a80:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c20;
      pc_host_pointer = (byte *)((int)sp_host_pointer + 1);
      uVar2 = *sp_host_pointer;
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + (uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2 + 1);
      sp_host_pointer = sp_host_pointer + 1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[(uint)*pc_host_pointer * 0x100 + (uint)(byte)uVar2]])();
        return uVar36;
      }
      break;
    case 0x1002ab0:
      uVar20 = uVar21 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01002abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 2);
      sp_host_pointer = (ushort *)(work_ram_base + (hl_register_value >> 0x10));
      if (uVar20 != 0 && 0x5ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
        return uVar36;
      }
      break;
    case 0x1002ad0:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c00;
      uVar20 = uVar21 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      if (uVar20 != 0 && 0x9ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002b00:
      *(uint *)(z80_state + 0x444) = *(uint *)(z80_state + 0x444) | 0xc;
      *(int *)(z80_state + 0x428) = (int)uVar21 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x01002b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)opcode_table[(byte)*puVar30])();
      return uVar36;
    case 0x1002b30:
      if ((uVar21 & 0x80) == 0) goto LAB_01002c00;
      pc_host_pointer = (byte *)((int)puVar30 + (2 - (int)work_ram_base));
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)pc_host_pointer >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)pc_host_pointer;
      uVar20 = uVar21 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + *puVar30 + 1);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0x10ffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[*puVar30]])();
        return uVar36;
      }
      break;
    case 0x1002b70:
                    /* WARNING: Could not recover jumptable at 0x01002b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar36 = (*(code *)opcode_table[(byte)*puVar30 + 0x300])(*(undefined4 *)(z80_state + 0x430));
      return uVar36;
    case 0x1002b90:
      uVar20 = (uint)(byte)*puVar30 * 0x1000000;
      uVar4 = uVar21 & 0xffffff28 | 2;
      if ((int)(accumulator_value + (uint)(byte)*puVar30 * -0x1000000) < 0) {
        uVar4 = uVar21 & 0xffffff28 | 0x82;
      }
      if (accumulator_value == uVar20) {
        uVar4 = uVar4 | 0x40;
      }
      if (accumulator_value < uVar20) {
        uVar4 = uVar4 | 1;
      }
      if (SBORROW4(accumulator_value,uVar20)) {
        uVar4 = uVar4 | 4;
      }
      uVar20 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(pc_host_pointer + 3);
      if (uVar20 != 0 && 0x6ffff < (int)uVar4) {
        uVar36 = (*(code *)opcode_table[pc_host_pointer[2]])();
        return uVar36;
      }
      break;
    case 0x1002bd0:
      *(byte *)((int)sp_host_pointer + -1) = (byte)((uint)((int)puVar30 - (int)work_ram_base) >> 8);
      *(byte *)(sp_host_pointer + -1) = (byte)((int)puVar30 - (int)work_ram_base);
      uVar20 = uVar21 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ushort *)(work_ram_base + 0x39);
      sp_host_pointer = sp_host_pointer + -1;
      if (uVar20 != 0 && 0xaffff < (int)uVar21) {
        uVar36 = (*(code *)opcode_table[work_ram_base[0x38]])();
        return uVar36;
      }
    }
    pc_host_pointer = (byte *)((int)puVar28 + -1);
    uVar21 = *(uint *)(z80_state + 0x428);
    in_OV = false;
    if (0 < (int)uVar21) {
      *(undefined4 *)(z80_state + 0x428) = 0;
      in_OV = SCARRY4(uVar20,uVar21 * 0x10000);
      uVar20 = uVar20 + uVar21 * 0x10000;
      uVar21 = uVar20;
    }
    if (uVar21 == 0 || (int)uVar21 < 0 != (bool)in_OV) {
      uVar21 = *(uint *)(z80_state + 0x480);
      iVar13 = *(int *)(z80_state + 0x478);
      if ((uVar21 & 0x300) == 0) {
        iVar14 = *(int *)(z80_state + 0x474) - iVar13;
        if (iVar14 != 0 && iVar13 <= *(int *)(z80_state + 0x474)) {
          if (iVar14 < iVar13) {
            *(int *)(z80_state + 0x478) = iVar14;
          }
          *(int *)(z80_state + 0x474) = iVar14;
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar36 = (*(code *)opcode_table[*pc_host_pointer])();
          return uVar36;
        }
      }
      else {
        if ((uVar21 & 0x100) != 0) {
          iVar11 = *(int *)(z80_state + 0x488);
          iVar14 = *(int *)(z80_state + 0x484);
          if (*(int *)(z80_state + 0x484) < 1) {
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
          *(int *)(z80_state + 0x488) = iVar12;
        }
        if ((uVar21 & 0x200) != 0) {
          iVar11 = *(int *)(z80_state + 0x490);
          iVar14 = *(int *)(z80_state + 0x48c);
          if (*(int *)(z80_state + 0x48c) < 1) {
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
          *(int *)(z80_state + 0x490) = iVar12;
        }
        *(uint *)(z80_state + 0x480) = uVar21;
        iVar14 = *(int *)(z80_state + 0x474) - iVar13;
        if (iVar14 != 0 && iVar13 <= *(int *)(z80_state + 0x474)) {
          *(int *)(z80_state + 0x474) = iVar14;
          if ((uVar21 & 0x100) != 0) {
            iVar11 = *(int *)(z80_state + 0x488);
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
            iVar11 = *(int *)(z80_state + 0x490);
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
          *(int *)(z80_state + 0x478) = iVar14;
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar36 = (**(code **)(*(int *)(z80_state + 0x494) + (uint)*pc_host_pointer * 4))();
          return uVar36;
        }
      }
      *(byte **)(z80_state + 0x400) = work_ram_base;
      *(uint *)(z80_state + 0x404) = accumulator_value;
      *(uint *)(z80_state + 0x408) = uVar20;
      *(uint *)(z80_state + 0x40c) = b_register_value;
      *(uint *)(z80_state + 0x410) = c_register_value;
      *(uint *)(z80_state + 0x414) = d_register_value;
      *(uint *)(z80_state + 0x418) = e_register_value;
      *(uint *)(z80_state + 0x41c) = hl_register_value;
      *(byte **)(z80_state + 0x420) = pc_host_pointer;
      *(ushort **)(z80_state + 0x424) = sp_host_pointer;
      return CONCAT44(z80_state + 0x428,(int)uVar20 >> 0x10);
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


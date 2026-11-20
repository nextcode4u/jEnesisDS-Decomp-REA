/* ARM9 cycle budget — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000310  read_m68k_program_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_m68k_program_counter(void)

{
  return _DAT_0b0000f0 - _DAT_0b000100 | _DAT_0b000148;
}


// 0x020004e0  queue_m68k_interrupt_level

void queue_m68k_interrupt_level(int param_1)

{
  int iVar1;
  
  DAT_0b00014c = (undefined1)param_1;
  if (param_1 == 0) {
    DAT_0b00014c = 0;
  }
  DAT_0b00014d = param_1 != 0;
  iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
  DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
  DAT_0b000141 = (char)((uint)iVar1 >> 8);
  DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
  DAT_0b000140 = (char)iVar1;
  return;
}


// 0x020004f0  calculate_m68k_cycles_per_frame_line

void calculate_m68k_cycles_per_frame_line(void)

{
  undefined4 uVar1;
  
  if (DAT_0b000008 != 0) {
    uVar1 = get_m68k_cycle_counter_field(&DAT_0b0000ac);
    compiler_udivsi3(uVar1,DAT_0b000008 * DAT_0b000000);
    return;
  }
  return;
}


// 0x0200052c  read_m68k_cycle_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 read_m68k_cycle_counter(void)

{
  return _DAT_0b000140;
}


// 0x02000538  update_vdp_timing_and_run_m68k_scanline

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_vdp_timing_and_run_m68k_scanline(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  
  update_vdp_line_cycles_and_queue_m68k_interrupts();
  iVar2 = DAT_0b000110;
  iVar4 = DAT_0b0000f4;
  puVar3 = _DAT_0b0000f0;
  _DAT_0b000140 = _DAT_0b000140 + param_1;
  if (DAT_0b00014d != '\0') {
    uVar5 = (uint)DAT_0b00014c;
    uVar6 = DAT_0b0000fc >> 8 & 7;
    bVar9 = SBORROW4(uVar5,6);
    iVar1 = uVar5 - 6;
    bVar8 = uVar5 == 6;
    if (uVar5 < 7) {
      bVar9 = SBORROW4(uVar5,uVar6);
      iVar1 = uVar5 - uVar6;
      bVar8 = uVar5 == uVar6;
    }
    if (!bVar8 && iVar1 < 0 == bVar9) {
      uVar6 = DAT_0b0000fc | DAT_0b0000f8;
      if ((uVar6 & 0x2000) == 0) {
        DAT_0b0000f4 = DAT_0b0000e8;
        DAT_0b0000e8 = iVar4;
      }
      DAT_0b0000e8 = DAT_0b0000e8 - 6;
      DAT_0b0000fc = uVar5 << 8 | 0x2000;
      puVar7 = (undefined2 *)(DAT_0b000110 + (DAT_0b0000e8 & 0xffff));
      *puVar7 = (short)uVar6;
      _DAT_0b000148 = (int)puVar3 - _DAT_0b000100 | _DAT_0b000148;
      puVar7[1] = (short)(_DAT_0b000148 >> 0x10);
      puVar7[2] = (short)_DAT_0b000148;
      _DAT_0b000148 = *(int *)(DAT_0b00010c + (uVar5 + 0x18) * 4) << 0x10;
      if ((_DAT_0b000148 & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = DAT_0b00010c;
      }
      else {
        uVar5 = 0xffff0000;
      }
      _DAT_0b000148 = _DAT_0b000148 & uVar5;
      DAT_0b00014d = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      _DAT_0b000100 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*_DAT_0b0000f0 * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}


// 0x02000568  update_vdp_timing_and_run_m68k_configured

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_vdp_timing_and_run_m68k_configured(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  
  update_vdp_line_cycles_and_queue_m68k_interrupts();
  iVar2 = DAT_0b000110;
  iVar4 = DAT_0b0000f4;
  puVar3 = _DAT_0b0000f0;
  _DAT_0b000140 = _DAT_0b000140 + param_1;
  if (DAT_0b00014d != '\0') {
    uVar5 = (uint)DAT_0b00014c;
    uVar6 = DAT_0b0000fc >> 8 & 7;
    bVar9 = SBORROW4(uVar5,6);
    iVar1 = uVar5 - 6;
    bVar8 = uVar5 == 6;
    if (uVar5 < 7) {
      bVar9 = SBORROW4(uVar5,uVar6);
      iVar1 = uVar5 - uVar6;
      bVar8 = uVar5 == uVar6;
    }
    if (!bVar8 && iVar1 < 0 == bVar9) {
      uVar6 = DAT_0b0000fc | DAT_0b0000f8;
      if ((uVar6 & 0x2000) == 0) {
        DAT_0b0000f4 = DAT_0b0000e8;
        DAT_0b0000e8 = iVar4;
      }
      DAT_0b0000e8 = DAT_0b0000e8 - 6;
      DAT_0b0000fc = uVar5 << 8 | 0x2000;
      puVar7 = (undefined2 *)(DAT_0b000110 + (DAT_0b0000e8 & 0xffff));
      *puVar7 = (short)uVar6;
      _DAT_0b000148 = (int)puVar3 - _DAT_0b000100 | _DAT_0b000148;
      puVar7[1] = (short)(_DAT_0b000148 >> 0x10);
      puVar7[2] = (short)_DAT_0b000148;
      _DAT_0b000148 = *(int *)(DAT_0b00010c + (uVar5 + 0x18) * 4) << 0x10;
      if ((_DAT_0b000148 & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = DAT_0b00010c;
      }
      else {
        uVar5 = 0xffff0000;
      }
      _DAT_0b000148 = _DAT_0b000148 & uVar5;
      DAT_0b00014d = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      _DAT_0b000100 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*_DAT_0b0000f0 * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}


// 0x02005144  get_m68k_cycle_counter_field

undefined4 get_m68k_cycle_counter_field(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}


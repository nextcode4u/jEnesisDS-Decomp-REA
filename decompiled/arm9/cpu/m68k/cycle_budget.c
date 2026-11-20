/* ARM9 cycle budget — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000310  read_m68k_program_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_m68k_program_counter(void)

{
  return m68k_pc_host_pointer - m68k_pc_mapped_base | m68k_pc_guest_page_bits;
}


// 0x020004e0  queue_m68k_interrupt_level

void queue_m68k_interrupt_level(int irq_level)

{
  int adjusted_cycle_count;
  
  m68k_pending_irq_level = (undefined1)irq_level;
  if (irq_level == 0) {
    m68k_pending_irq_level = 0;
  }
  m68k_irq_pending = irq_level != 0;
  adjusted_cycle_count = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
  DAT_0b000143 = (char)((uint)adjusted_cycle_count >> 0x18);
  DAT_0b000141 = (char)((uint)adjusted_cycle_count >> 8);
  DAT_0b000142 = (char)((uint)adjusted_cycle_count >> 0x10);
  DAT_0b000140 = (char)adjusted_cycle_count;
  return;
}


// 0x020004f0  calculate_m68k_cycles_per_frame_line

void calculate_m68k_cycles_per_frame_line(void)

{
  undefined4 uVar1;
  
  if (DAT_0b000008 != 0) {
    uVar1 = get_m68k_cycle_counter_field(&m68k_context);
    compiler_udivsi3(uVar1,DAT_0b000008 * DAT_0b000000);
    return;
  }
  return;
}


// 0x0200052c  read_m68k_cycle_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 read_m68k_cycle_counter(void)

{
  return m68k_cycle_counter;
}


// 0x02000538  update_vdp_timing_and_run_m68k_scanline

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_vdp_timing_and_run_m68k_scanline(int cycles_to_run)

{
  int iVar1;
  int iVar2;
  ushort *pc_host_pointer;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *interrupt_stack_frame;
  bool bVar8;
  bool bVar9;
  
  update_vdp_line_cycles_and_queue_m68k_interrupts();
  iVar2 = m68k_work_ram_base;
  iVar4 = DAT_0b0000f4;
  pc_host_pointer = m68k_pc_host_pointer;
  m68k_cycle_counter = m68k_cycle_counter + cycles_to_run;
  if (m68k_irq_pending != '\0') {
    uVar5 = (uint)m68k_pending_irq_level;
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
      interrupt_stack_frame = (undefined2 *)(m68k_work_ram_base + (DAT_0b0000e8 & 0xffff));
      *interrupt_stack_frame = (short)uVar6;
      m68k_pc_guest_page_bits = (int)pc_host_pointer - m68k_pc_mapped_base | m68k_pc_guest_page_bits;
      interrupt_stack_frame[1] = (short)(m68k_pc_guest_page_bits >> 0x10);
      interrupt_stack_frame[2] = (short)m68k_pc_guest_page_bits;
      m68k_pc_guest_page_bits = *(int *)(m68k_cartridge_base + (uVar5 + 0x18) * 4) << 0x10;
      if ((m68k_pc_guest_page_bits & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = m68k_cartridge_base;
      }
      else {
        uVar5 = 0xffff0000;
      }
      m68k_pc_guest_page_bits = m68k_pc_guest_page_bits & uVar5;
      m68k_irq_pending = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      m68k_pc_mapped_base = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*m68k_pc_host_pointer * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}


// 0x02000568  update_vdp_timing_and_run_m68k_configured

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_vdp_timing_and_run_m68k_configured(int cycles_to_run)

{
  int iVar1;
  int iVar2;
  ushort *pc_host_pointer;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *interrupt_stack_frame;
  bool bVar8;
  bool bVar9;
  
  update_vdp_line_cycles_and_queue_m68k_interrupts();
  iVar2 = m68k_work_ram_base;
  iVar4 = DAT_0b0000f4;
  pc_host_pointer = m68k_pc_host_pointer;
  m68k_cycle_counter = m68k_cycle_counter + cycles_to_run;
  if (m68k_irq_pending != '\0') {
    uVar5 = (uint)m68k_pending_irq_level;
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
      interrupt_stack_frame = (undefined2 *)(m68k_work_ram_base + (DAT_0b0000e8 & 0xffff));
      *interrupt_stack_frame = (short)uVar6;
      m68k_pc_guest_page_bits = (int)pc_host_pointer - m68k_pc_mapped_base | m68k_pc_guest_page_bits;
      interrupt_stack_frame[1] = (short)(m68k_pc_guest_page_bits >> 0x10);
      interrupt_stack_frame[2] = (short)m68k_pc_guest_page_bits;
      m68k_pc_guest_page_bits = *(int *)(m68k_cartridge_base + (uVar5 + 0x18) * 4) << 0x10;
      if ((m68k_pc_guest_page_bits & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = m68k_cartridge_base;
      }
      else {
        uVar5 = 0xffff0000;
      }
      m68k_pc_guest_page_bits = m68k_pc_guest_page_bits & uVar5;
      m68k_irq_pending = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      m68k_pc_mapped_base = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*m68k_pc_host_pointer * 4))();
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


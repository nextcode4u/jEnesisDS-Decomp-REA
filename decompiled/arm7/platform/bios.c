/* ARM7 bios — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f812c  arm_veneer_for_bios_wait_for_vblank

void arm_veneer_for_bios_wait_for_vblank(void)

{
  software_interrupt(5);
  return;
}


// 0x03801784  bios_delay_cycles

void bios_delay_cycles(void)

{
  software_interrupt(3);
  return;
}


// 0x0380178c  bios_wait_for_vblank

void bios_wait_for_vblank(void)

{
  software_interrupt(5);
  return;
}


// 0x038017a2  bios_divide_with_remainder

void bios_divide_with_remainder(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  software_interrupt(9);
  *param_3 = param_1;
  *param_4 = param_2;
  return;
}


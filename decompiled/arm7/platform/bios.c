/* ARM7 bios — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f812c  swiWaitForVBlank_arm_veneer

void swiWaitForVBlank(void)

{
  software_interrupt(5);
  return;
}


// 0x03801784  swiDelay

void swiDelay(void)

{
  software_interrupt(3);
  return;
}


// 0x0380178c  swiWaitForVBlank

void swiWaitForVBlank(void)

{
  software_interrupt(5);
  return;
}


// 0x038017a2  swiDivMod

void swiDivMod(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  software_interrupt(9);
  *param_3 = param_1;
  *param_4 = param_2;
  return;
}


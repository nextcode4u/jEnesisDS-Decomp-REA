/* ARM9 bus control — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01002cdc  read_z80_mapped_byte_preserving_r1

void FUN_01002cdc(uint param_1,undefined4 param_2)

{
  undefined4 uStack00000068;
  int in_stack_0000009c;
  
                    /* WARNING: Could not recover jumptable at 0x01002ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack00000068 = param_2;
  (**(code **)(in_stack_0000009c + ((param_1 & 0xf000) >> 10)))();
  return;
}


// 0x02000bfc  reset_z80_core_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000bfc(void)

{
  uRam0b00057d = (undefined1)((uint3)_DAT_0b000558 >> 8);
  uRam0b00057e = (undefined1)((uint3)_DAT_0b000558 >> 0x10);
  uRam0b000561 = 0;
  uRam0b000562 = 0;
  uRam0b000563 = 0;
  uRam0b00057c = (char)_DAT_0b000558;
  uRam0b00057f = DAT_0b00055b;
  uRam0b000590 = 0;
  uRam0b000591 = 0;
  uRam0b000592 = 0;
  uRam0b000593 = 0;
  uRam0b000594 = 0;
  uRam0b000595 = 0;
  uRam0b000596 = 0;
  uRam0b000597 = 0;
  uRam0b00059c = 0;
  uRam0b00059d = 0;
  uRam0b00059e = 0;
  uRam0b00059f = 0;
  uRam0b0005fc = 0;
  uRam0b0005fd = 0;
  uRam0b0005fe = 0;
  uRam0b0005ff = 0;
  uRam0b000578 = (char)_DAT_0b000558;
  uRam0b000579 = uRam0b00057d;
  uRam0b00057a = uRam0b00057e;
  uRam0b00057b = DAT_0b00055b;
  uRam0b0005cc = 0;
  uRam0b0005db = 0;
  uRam0b0005cd = 0;
  uRam0b0005ce = 0;
  uRam0b0005cf = 0;
  uRam0b0005dc = 0;
  uRam0b0005dd = 0;
  uRam0b0005de = 0;
  uRam0b0005df = 0;
  uRam0b0005e0 = 0;
  uRam0b0005e1 = 0;
  uRam0b0005e2 = 0;
  uRam0b0005e3 = 0;
  uRam0b0005e4 = 0;
  uRam0b0005e5 = 0;
  uRam0b0005e6 = 0;
  uRam0b0005e7 = 0;
  uRam0b0005e8 = 0;
  uRam0b0005e9 = 0;
  uRam0b0005ea = 0;
  uRam0b0005eb = 0;
  uRam0b0005d4 = 0;
  uRam0b0005d5 = 0;
  uRam0b0005d6 = 0;
  uRam0b0005d7 = 0;
  uRam0b0005d8 = 0;
  uRam0b0005d9 = 0;
  uRam0b0005da = 0;
  return;
}


// 0x020043bc  return_zero_for_unhandled_z80_vdp_access

undefined4 FUN_020043bc(void)

{
  return 0;
}


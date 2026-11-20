/* ARM9 to register — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02019f58  m68k_move_long

void m68k_dispatch_02019f58(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc((int)*unaff_r10);
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02019f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201a484  m68k_move_long

void m68k_dispatch_0201a484(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201a4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201bd68  m68k_move_long

void m68k_dispatch_0201bd68(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x0201bd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


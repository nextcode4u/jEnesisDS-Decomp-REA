/* ARM9 startup — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000000  start_arm9_and_map_tcm

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm9_entry(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  _DAT_04000208 = 0x4000000;
  _DAT_04000304 = 0x8203;
  coproc_moveto_Control(0x2078);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_Entire_Data_cache(0);
  coproc_moveto_Data_Synchronization(0);
  coprocessor_moveto(0xf,0,0,0xb00000a,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,1,0x20,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,0,0x4000033,in_cr6,in_cr0);
  coprocessor_moveto(0xf,0,0,0x200002b,in_cr6,in_cr1);
  coprocessor_moveto(0xf,0,0,0x37f801d,in_cr6,in_cr2);
  coprocessor_moveto(0xf,0,0,0x8000035,in_cr6,in_cr3);
  coprocessor_moveto(0xf,0,0,0xb00001b,in_cr6,in_cr4);
  coprocessor_moveto(0xf,0,0,0x100001d,in_cr6,in_cr5);
  coprocessor_moveto(0xf,0,0,0xffff001d,in_cr6,in_cr6);
  coprocessor_moveto(0xf,0,0,0x240002b,in_cr6,in_cr7);
  coproc_moveto_Domain_Access_Control(6);
  coproc_moveto_Translation_table_base_0(0x42);
  coproc_moveto_Translation_table_base_1(0x42);
  coprocessor_moveto(0xf,0,3,0x36636333,in_cr5,in_cr0);
  coprocessor_moveto(0xf,0,2,0x36333333,in_cr5,in_cr0);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x51005);
  uVar2 = FUN_02000180(0x1f,&DAT_020936f0,0x1000000);
  FUN_02000180(uVar2,&DAT_02090004,&DAT_0b000000);
  FUN_0200015c(&DAT_02098f70,0x3523e0);
  FUN_0200015c(0xb0036ec,0);
  DAT_020b4ce0 = 0x23ff000;
  thunk_FUN_020805e8();
  thunk_FUN_020805e8(0,0);
  _LAB_027ffe78 = 0xeafffffe;
  (*(code *)&LAB_027ffe78)();
  return;
}


// 0x0200015c  clear_aligned_words_to_zero

void FUN_0200015c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (uVar1 != 0) {
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 4;
    } while (uVar1 != 0);
    return;
  }
  return;
}


// 0x02000180  copy_aligned_tcm_words

void FUN_02000180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r4;
  
  uVar2 = (unaff_r4 - (int)param_3) + 3U & 0xfffffffc;
  if (uVar2 == 0) {
    return;
  }
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
    uVar2 = uVar2 - 4;
  } while (uVar2 != 0);
  return;
}


// 0x02000220  arm9_empty_runtime_initializer

void FUN_02000220(void)

{
  return;
}


// 0x020011b0  initialize_ds_display_and_overlay

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020011b0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_02001118();
  _DAT_04000304 = _DAT_04000304 | 0x20f;
  FUN_02006d20();
  thunk_FUN_0208031c();
  _DAT_04000000 = 0x113f10;
  FUN_02006f2c(0);
  FUN_02008edc();
  _DAT_04000000 = _DAT_04000000 | 0x20;
  _DAT_04001000 = 0x10300;
  thunk_FUN_0207fc98(1,9,4,2);
  thunk_FUN_0207fd44(2);
  _DAT_0400100a = 0x288;
  _DAT_04001008 = 0x1f90;
  FUN_0200d900(&DAT_02085aa8,0x6210000,0x620f800,0x5f,0xf);
  FUN_02006bb0();
  FUN_02006730();
  puVar1 = (undefined2 *)&DAT_050005e0;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[-0x17bd5ac];
    puVar1 = puVar2;
  } while (puVar2 != (undefined2 *)0x5000600);
  software_interrupt(5);
  return;
}


// 0x02082370  run_arm9_c_runtime_initializers

/* WARNING: Removing unreachable block (ram,0x02082388) */
/* WARNING: Removing unreachable block (ram,0x02082390) */

void arm9_startup_call_1(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_02000220();
  iVar1 = 0;
  puVar2 = &DAT_0208f330;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)*puVar2)();
    puVar2 = puVar2 + 1;
  } while (iVar1 != 1);
  return;
}


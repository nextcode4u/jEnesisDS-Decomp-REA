/* ARM9 startup — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
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


// 0x02000220  helper_for_run_arm9_c_runtime_initializers

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


// 0x02006f2c  helper_for_initialize_ds_display_and_overlay

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006f2c(int param_1)

{
  if (param_1 != 0xff) {
    DAT_020993c4 = 0;
    switch(param_1) {
    case 0:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_04000008 = 0x820;
      _DAT_0400000a = 0xc29;
      _DAT_0400000c = 0x22;
      DAT_023dc6a4 = 0x22;
      DAT_023dc6a8 = 0x820;
      _DAT_0400000e = 0x42b;
      break;
    case 1:
    case 3:
      DAT_023dc6a8 = 0x8820;
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      _DAT_04000008 = 0x8820;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_0400000a = 0x8c29;
      DAT_023dc6a4 = 0x8022;
      _DAT_0400000c = 0x8022;
      _DAT_0400000e = 0x842b;
      break;
    default:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      break;
    case 0x10:
      DAT_023dc69c = FUN_02007830;
      DAT_023dc6ac = FUN_02007c04;
      DAT_023dc6a0 = FUN_02007f94;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      DAT_023dc6a4 = 0x4022;
      DAT_023dc6a8 = 0x4820;
      _DAT_0400000e = 0x442b;
      break;
    case 0x11:
    case 0x13:
      DAT_023dc6a8 = 0xc820;
      DAT_023dc69c = FUN_020078c8;
      DAT_023dc6ac = FUN_02007ce4;
      DAT_023dc6a0 = FUN_02008078;
      DAT_023dc6a4 = 0xc022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_0400000e = 0xc42b;
      _DAT_04000008 = 0xc820;
      _DAT_0400000a = 0xcc29;
      _DAT_0400000c = 0xc022;
      return;
    case 0x30:
    case 0x31:
      DAT_023dc69c = FUN_0200797c;
      DAT_023dc6ac = FUN_02007ddc;
      DAT_023dc6a0 = FUN_02008174;
      DAT_023dc6a8 = 0x4820;
      DAT_020993c4 = 1;
      DAT_023dc6a4 = 0x4022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      _DAT_0400000e = 0x442b;
      return;
    }
                    /* WARNING (jumptable): Read-only address (ram,0x0208f350) is written */
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
    DAT_0208f350 = param_1;
    return;
  }
  DAT_0208f350 = 0xff;
  return;
}


// 0x02008edc  helper_for_initialize_ds_display_and_overlay

/* WARNING: Removing unreachable block (ram,0x02008ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02008edc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_023dc1a8;
  do {
    puVar2 = puVar1;
    *(undefined2 *)puVar2 = 0x200;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    puVar1 = puVar2 + 2;
  } while (puVar2 + 2 != &DAT_023dc5a8);
  *(undefined2 *)((int)puVar2 + -0x3f2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x3ba) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ea) = 0;
  *(undefined2 *)((int)puVar2 + -0x3e2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3da) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ca) = 0;
  *(undefined2 *)((int)puVar2 + -0x3c2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3d2) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x3b2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x37a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x3aa) = 0;
  *(undefined2 *)((int)puVar2 + -0x3a2) = 0;
  *(undefined2 *)((int)puVar2 + -0x39a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x392) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x38a) = 0;
  *(undefined2 *)((int)puVar2 + -0x382) = 0;
  FUN_020802c4(&DAT_023dc1a8,0x400);
  do {
  } while( true );
}


// 0x020805e8  helper_for_start_arm9_and_map_tcm

void FUN_020805e8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x020805e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
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


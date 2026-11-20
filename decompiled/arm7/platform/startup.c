/* ARM7 startup — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037f8000  start_arm7_audio_processor

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm7_entry(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_04000208 = 0x4000000;
  FUN_037f805c(&DAT_03806d94,0x5138);
  thunk_FUN_03801b40();
  thunk_FUN_03801b40(0,0,param_3,arm7_main);
  (*(code *)&LAB_08000000)();
  return;
}


// 0x037f805c  clear_aligned_words_to_zero

void FUN_037f805c(undefined4 *param_1,int param_2)

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


// 0x037f80d0  helper_for_run_arm7_c_runtime_initializers

void FUN_037f80d0(void)

{
  return;
}


// 0x037f80f0  call_via_r3_interworking_veneer

void thunk_FUN_03801b40(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x03801b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// 0x037f814c  run_once_initialization_guard

/* WARNING: Removing unreachable block (ram,0x037f816c) */

void FUN_037f814c(void)

{
  if (DAT_03806d94 == '\0') {
    DAT_03806d94 = '\x01';
  }
  return;
}


// 0x03802524  run_arm7_c_runtime_initializers

/* WARNING: Removing unreachable block (ram,0x0380253c) */
/* WARNING: Removing unreachable block (ram,0x03802544) */

void arm7_startup_call_1(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_037f80d0();
  iVar1 = 0;
  puVar2 = &DAT_03806d34;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)*puVar2)();
    puVar2 = puVar2 + 1;
  } while (iVar1 != 1);
  return;
}


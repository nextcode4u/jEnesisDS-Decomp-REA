/* ARM7 startup — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f8000  start_arm7_audio_processor

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_arm7_audio_processor(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  REG_IME = 0x4000000;
  clear_aligned_words_to_zero(&DAT_03806d94,0x5138);
  _call_via_r3();
  _call_via_r3(0,0,param_3,run_arm7_audio_service);
  (*(code *)&LAB_08000000)();
  return;
}


// 0x037f805c  clear_aligned_words_to_zero

void clear_aligned_words_to_zero(undefined4 *param_1,int param_2)

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


// 0x037f80d0  _init

void _init(void)

{
  return;
}


// 0x037f80f0  _call_via_r3_arm_veneer

void _call_via_r3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x03801b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// 0x037f814c  run_once_initialization_guard

/* WARNING: Removing unreachable block (ram,0x037f816c) */

void run_once_initialization_guard(void)

{
  if (DAT_03806d94 == '\0') {
    DAT_03806d94 = '\x01';
  }
  return;
}


// 0x03802524  __libc_init_array

/* WARNING: Removing unreachable block (ram,0x0380253c) */
/* WARNING: Removing unreachable block (ram,0x03802544) */

void __libc_init_array(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  _init();
  iVar1 = 0;
  puVar2 = &DAT_03806d34;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)*puVar2)();
    puVar2 = puVar2 + 1;
  } while (iVar1 != 1);
  return;
}


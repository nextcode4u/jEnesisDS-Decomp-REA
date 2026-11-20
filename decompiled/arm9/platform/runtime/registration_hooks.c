/* ARM9 registration hooks — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000240  run_arm9_finalizer_once

/* WARNING: Removing unreachable block (ram,0x02000260) */

void FUN_02000240(void)

{
  if (DAT_02098f70 == '\0') {
    DAT_02098f70 = '\x01';
  }
  return;
}


// 0x02000284  call_optional_arm9_registration_hooks

/* WARNING: Removing unreachable block (ram,0x0200029c) */
/* WARNING: Removing unreachable block (ram,0x020002bc) */
/* WARNING: Removing unreachable block (ram,0x020002b8) */

void FUN_02000284(void)

{
  return;
}


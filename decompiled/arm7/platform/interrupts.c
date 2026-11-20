/* ARM7 interrupts — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f8108  irqInit_arm_veneer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqInit(void)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &irq_table_first_handler;
  do {
    *puVar1 = &irqDummy;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x380becc);
  IRQ_HANDLER = &IntrMain;
  REG_IE = 0;
  REG_IF = 0xffffffff;
  REG_IME = 1;
  return in_lr;
}


// 0x037f8114  irqSet_arm_veneer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqSet(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    puVar2 = &irq_table_first_mask;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&irq_table_first_handler)[iVar1 * 2] = param_2;
        (&irq_table_first_mask)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 0x10;
        }
        REG_IE = REG_IE | param_1;
        return in_lr;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return in_lr;
}


// 0x037f8120  irqEnable_arm_veneer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqEnable(uint param_1)

{
  undefined4 in_lr;
  
  if ((param_1 & 1) != 0) {
    REG_DISPSTAT = REG_DISPSTAT | 8;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x10;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x20;
  }
  REG_IE = REG_IE | param_1;
  REG_IME = 1;
  return in_lr;
}


// 0x03801564  irqSet

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqSet(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    puVar2 = &irq_table_first_mask;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&irq_table_first_handler)[iVar1 * 2] = param_2;
        (&irq_table_first_mask)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 0x10;
        }
        REG_IE = REG_IE | param_1;
        return in_lr;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return in_lr;
}


// 0x038015d0  irqInit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqInit(void)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &irq_table_first_handler;
  do {
    *puVar1 = &irqDummy;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x380becc);
  IRQ_HANDLER = &IntrMain;
  REG_IE = 0;
  REG_IF = 0xffffffff;
  REG_IME = 1;
  return in_lr;
}


// 0x03801620  irqClear

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqClear(uint param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = &irq_table_first_mask;
  iVar2 = 0;
  do {
    if (param_1 == *puVar1) {
      (&irq_table_first_handler)[iVar2 * 2] = &irqDummy;
      if ((int)(param_1 << 0x1f) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xfff7;
      }
      if ((int)(param_1 << 0x1e) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xffef;
      }
      if ((int)(param_1 << 0x1d) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xffdf;
      }
      REG_IE = REG_IE & ~param_1;
      return in_lr;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x19);
  return in_lr;
}


// 0x038016a4  irqInitHandler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqInitHandler(undefined4 param_1)

{
  undefined4 in_lr;
  
  REG_IF = 0xffffffff;
  REG_IE = 0;
  IRQ_HANDLER = param_1;
  REG_IME = 1;
  return in_lr;
}


// 0x038016d8  irqEnable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 irqEnable(uint param_1)

{
  undefined4 in_lr;
  
  if ((param_1 & 1) != 0) {
    REG_DISPSTAT = REG_DISPSTAT | 8;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x10;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x20;
  }
  REG_IE = REG_IE | param_1;
  REG_IME = 1;
  return in_lr;
}


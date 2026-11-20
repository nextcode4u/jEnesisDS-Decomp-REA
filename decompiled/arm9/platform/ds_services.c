/* ARM9 ds services — grouped REA pseudocode.
 * See functions.tsv for libnds source matches and corrections from native instructions.
 */

// 0x02001180  wait_six_vblanks_per_unit

void wait_six_vblanks_per_unit(int units)

{
  int elapsed_vblanks;
  
  if (units * 6 != 0) {
    elapsed_vblanks = 0;
    do {
      elapsed_vblanks = elapsed_vblanks + 1;
      swiWaitForVBlank();
    } while (elapsed_vblanks != units * 6);
  }
  return;
}


// 0x02074e40  default_dldi_operation_returns_false

undefined4 default_dldi_operation_returns_false(void)

{
  return 0;
}


// 0x0207fb7c  keysDown

ushort keysDown(void)

{
  return keys & ~keysold;
}


// 0x0207fc98  vramSetMainBanks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 vramSetMainBanks(undefined1 bank_a,undefined1 bank_b,undefined1 bank_c,undefined1 bank_d)

{
  undefined4 vramTemp;
  
  vramTemp = VRAM_CR;
  VRAM_CR = CONCAT13(bank_d,CONCAT12(bank_c,CONCAT11(bank_b,bank_a))) | 0x80808080;
  return vramTemp;
}


// 0x0207fd44  vramSetBankE

void vramSetBankE(byte bank_e)

{
  VRAM_E_CR = bank_e | 0x80;
  return;
}


// 0x0207fda8  cardWriteCommand

void cardWriteCommand(int command)

{
  undefined1 *command_byte;
  int offset_from_last_byte;
  int index;
  
  CARD_CR1H = 0xc0;
  index = 0;
  do {
    command_byte = (undefined1 *)(command + index);
    offset_from_last_byte = -index;
    index = index + 1;
    (&CARD_COMMAND[7])[offset_from_last_byte] = *command_byte;
  } while (index != 8);
  return;
}


// 0x0207fdcc  cardPolledTransfer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cardPolledTransfer(uint flags,undefined4 *destination,int length,undefined4 command)

{
  undefined4 *target;
  
  cardWriteCommand(command);
  target = destination + length;
  CARD_CR2 = flags;
  do {
    if ((CARD_CR2 & 0x800000) != 0) {
      if (destination < target) {
        *destination = CARD_DATA_RD;
      }
      destination = destination + 1;
    }
  } while ((int)CARD_CR2 < 0);
  return;
}


// 0x0207fe0c  cardStartTransfer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cardStartTransfer(undefined4 command,undefined4 destination,int channel_offset,undefined4 flags)

{
  cardWriteCommand();
  channel_offset = channel_offset * 0xc;
  DMA_SRC(channel_offset / 12) = &CARD_DATA_RD;
  DMA_DEST(channel_offset / 12) = destination;
  DMA_CR(channel_offset / 12) = 0xaf000001;
  CARD_CR2 = flags;
  return;
}


// 0x02080098  irqSet

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqSet(uint mask,undefined4 handler)

{
  int i;
  uint *entry_mask;
  
  if (mask != 0) {
    entry_mask = &irq_table_first_mask;
    i = 0;
    do {
      if ((*entry_mask == 0) || (mask == *entry_mask)) {
        (&irq_table_first_handler)[i * 2] = handler;
        (&irq_table_first_mask)[i * 2] = mask;
        if ((int)(mask << 0x1f) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 8;
        }
        if ((int)(mask << 0x1e) < 0) {
          REG_DISPSTAT = REG_DISPSTAT | 0x10;
        }
        REG_IE = REG_IE | mask;
        return;
      }
      i = i + 1;
      entry_mask = entry_mask + 2;
    } while (i != 0x19);
  }
  return;
}


// 0x02080100  irqInit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqInit(void)

{
  undefined4 *entry;
  
  entry = &irq_table_first_handler;
  do {
    *entry = &irqDummy;
    entry[1] = 0;
    entry = entry + 2;
  } while (entry != (undefined4 *)&IntrMain);
  IRQ_HANDLER = &IntrMain;
  REG_IE = 0;
  REG_IF = 0xffffffff;
  REG_IME = 1;
  return;
}


// 0x0208014c  irqClear

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqClear(uint mask)

{
  uint *entry_mask;
  int i;
  
  entry_mask = &irq_table_first_mask;
  i = 0;
  do {
    if (mask == *entry_mask) {
      (&irq_table_first_handler)[i * 2] = &irqDummy;
      if ((int)(mask << 0x1f) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xfff7;
      }
      if ((int)(mask << 0x1e) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xffef;
      }
      if ((int)(mask << 0x1d) < 0) {
        REG_DISPSTAT = REG_DISPSTAT & 0xffdf;
      }
      REG_IE = REG_IE & ~mask;
      return;
    }
    i = i + 1;
    entry_mask = entry_mask + 2;
  } while (i != 0x19);
  return;
}


// 0x020801cc  irqInitHandler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqInitHandler(undefined4 handler)

{
  REG_IF = 0xffffffff;
  REG_IE = 0;
  IRQ_HANDLER = handler;
  REG_IME = 1;
  return;
}


// 0x020801fc  irqEnable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqEnable(uint irq)

{
  if ((irq & 1) != 0) {
    REG_DISPSTAT = REG_DISPSTAT | 8;
  }
  if ((int)(irq << 0x1e) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x10;
  }
  if ((int)(irq << 0x1d) < 0) {
    REG_DISPSTAT = REG_DISPSTAT | 0x20;
  }
  REG_IE = REG_IE | irq;
  REG_IME = 1;
  return;
}


// 0x0208024c  irqDisable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void irqDisable(uint irq)

{
  if ((int)(irq << 0x1f) < 0) {
    REG_DISPSTAT = REG_DISPSTAT & 0xfff7;
  }
  if ((int)(irq << 0x1e) < 0) {
    REG_DISPSTAT = REG_DISPSTAT & 0xffef;
  }
  if ((int)(irq << 0x1d) < 0) {
    REG_DISPSTAT = REG_DISPSTAT & 0xffdf;
  }
  REG_IE = REG_IE & ~irq;
  return;
}


// 0x020802c4  DC_FlushRange

void DC_FlushRange(uint base,int size)

{
  uint cache_line;
  
  cache_line = base & 0xffffffe0;
  do {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(cache_line);
    cache_line = cache_line + 0x20;
  } while ((int)cache_line < (int)(size + base));
  return;
}


// 0x0208031c  swiWaitForVBlank

void swiWaitForVBlank(void)

{
  software_interrupt(5);
  return;
}


// 0x0208033e  swiCopy

void swiCopy(void)

{
  software_interrupt(0xb);
  return;
}


// 0x020858a4  swiWaitForVBlank_arm_veneer

void swiWaitForVBlank(void)

{
  software_interrupt(5);
  return;
}


// 0x0208591c  swiCopy_arm_veneer

void swiCopy(void)

{
  software_interrupt(0xb);
  return;
}


// 0x02085928  vramSetMainBanks_arm_veneer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
vramSetMainBanks(undefined1 bank_a,undefined1 bank_b,undefined1 bank_c,undefined1 bank_d)

{
  undefined4 vramTemp;
  
  vramTemp = VRAM_CR;
  VRAM_CR = CONCAT13(bank_d,CONCAT12(bank_c,CONCAT11(bank_b,bank_a))) | 0x80808080;
  return vramTemp;
}


// 0x02085934  vramSetBankE_arm_veneer

void vramSetBankE(byte bank_e)

{
  VRAM_E_CR = bank_e | 0x80;
  return;
}


/* ARM9 ds services — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02001180  wait_six_vblanks_per_unit

void wait_six_vblanks_per_unit(int param_1)

{
  int iVar1;
  
  if (param_1 * 6 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      arm_veneer_for_nds_swiwaitforvblank();
    } while (iVar1 != param_1 * 6);
  }
  return;
}


// 0x02074e40  default_dldi_operation_returns_false

undefined4 default_dldi_operation_returns_false(void)

{
  return 0;
}


// 0x0207fb7c  read_newly_pressed_ds_keys

ushort read_newly_pressed_ds_keys(void)

{
  return DAT_020b4ca0 & ~DAT_020b4ca2;
}


// 0x0207fc98  nds_vramsetmainbanks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nds_vramsetmainbanks(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_04000240;
  _DAT_04000240 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1))) | 0x80808080;
  return uVar1;
}


// 0x0207fd44  nds_vramsetbanke

void nds_vramsetbanke(byte param_1)

{
  DAT_04000244 = param_1 | 0x80;
  return;
}


// 0x0207fda8  load_slot1_card_command_registers

void load_slot1_card_command_registers(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  DAT_040001a1 = 0xc0;
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + iVar3);
    iVar2 = -iVar3;
    iVar3 = iVar3 + 1;
    (&DAT_040001af)[iVar2] = *puVar1;
  } while (iVar3 != 8);
  return;
}


// 0x0207fdcc  read_slot1_card_transfer_words

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_slot1_card_transfer_words(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  load_slot1_card_command_registers(param_4);
  puVar1 = param_2 + param_3;
  _DAT_040001a4 = param_1;
  do {
    if ((_DAT_040001a4 & 0x800000) != 0) {
      if (param_2 < puVar1) {
        *param_2 = _DAT_04100010;
      }
      param_2 = param_2 + 1;
    }
  } while ((int)_DAT_040001a4 < 0);
  return;
}


// 0x0207fe0c  start_slot1_card_transfer_with_dma

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_slot1_card_transfer_with_dma(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  load_slot1_card_command_registers();
  param_3 = param_3 * 0xc;
  *(undefined1 **)(param_3 + 0x40000b0) = &DAT_04100010;
  *(undefined4 *)(param_3 + 0x40000b4) = param_2;
  *(undefined4 *)(param_3 + 0x40000b8) = 0xaf000001;
  _DAT_040001a4 = param_4;
  return;
}


// 0x02080098  install_arm9_interrupt_handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void install_arm9_interrupt_handler(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    puVar2 = &DAT_010056e4;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&DAT_010056e0)[iVar1 * 2] = param_2;
        (&DAT_010056e4)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          _DAT_04000004 = _DAT_04000004 | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          _DAT_04000004 = _DAT_04000004 | 0x10;
        }
        _DAT_04000210 = _DAT_04000210 | param_1;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return;
}


// 0x02080100  initialize_arm9_interrupt_table

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_arm9_interrupt_table(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_010056e0;
  do {
    *puVar1 = &DAT_02080095;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)&DAT_010057a8);
  _DAT_0b003ffc = &DAT_010057a8;
  _DAT_04000210 = 0;
  _DAT_04000214 = 0xffffffff;
  _DAT_04000208 = 1;
  return;
}


// 0x0208014c  remove_arm9_interrupt_handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_arm9_interrupt_handler(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = &DAT_010056e4;
  iVar2 = 0;
  do {
    if (param_1 == *puVar1) {
      (&DAT_010056e0)[iVar2 * 2] = &DAT_02080095;
      if ((int)(param_1 << 0x1f) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xfff7;
      }
      if ((int)(param_1 << 0x1e) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffef;
      }
      if ((int)(param_1 << 0x1d) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffdf;
      }
      _DAT_04000210 = _DAT_04000210 & ~param_1;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x19);
  return;
}


// 0x020801cc  install_custom_arm9_interrupt_dispatcher

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void install_custom_arm9_interrupt_dispatcher(undefined4 param_1)

{
  _DAT_04000214 = 0xffffffff;
  _DAT_04000210 = 0;
  _DAT_0b003ffc = param_1;
  _DAT_04000208 = 1;
  return;
}


// 0x020801fc  enable_arm9_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enable_arm9_interrupt_sources(uint param_1)

{
  if ((param_1 & 1) != 0) {
    _DAT_04000004 = _DAT_04000004 | 8;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    _DAT_04000004 = _DAT_04000004 | 0x10;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    _DAT_04000004 = _DAT_04000004 | 0x20;
  }
  _DAT_04000210 = _DAT_04000210 | param_1;
  _DAT_04000208 = 1;
  return;
}


// 0x0208024c  disable_arm9_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void disable_arm9_interrupt_sources(uint param_1)

{
  if ((int)(param_1 << 0x1f) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xfff7;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffef;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffdf;
  }
  _DAT_04000210 = _DAT_04000210 & ~param_1;
  return;
}


// 0x020802c4  clean_and_invalidate_arm9_data_cache_range

void clean_and_invalidate_arm9_data_cache_range(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffffffe0;
  do {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar1);
    uVar1 = uVar1 + 0x20;
  } while ((int)uVar1 < (int)(param_2 + param_1));
  return;
}


// 0x0208031c  nds_swiwaitforvblank

void nds_swiwaitforvblank(void)

{
  software_interrupt(5);
  return;
}


// 0x0208033e  nds_swicopy

void nds_swicopy(void)

{
  software_interrupt(0xb);
  return;
}


// 0x020858a4  arm_veneer_for_nds_swiwaitforvblank

void arm_veneer_for_nds_swiwaitforvblank(void)

{
  software_interrupt(5);
  return;
}


// 0x0208591c  arm_veneer_for_nds_swicopy

void arm_veneer_for_nds_swicopy(void)

{
  software_interrupt(0xb);
  return;
}


// 0x02085928  arm_veneer_for_nds_vramsetmainbanks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
arm_veneer_for_nds_vramsetmainbanks(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_04000240;
  _DAT_04000240 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1))) | 0x80808080;
  return uVar1;
}


// 0x02085934  arm_veneer_for_nds_vramsetbanke

void arm_veneer_for_nds_vramsetbanke(byte param_1)

{
  DAT_04000244 = param_1 | 0x80;
  return;
}


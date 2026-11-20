/* ARM7 interrupts — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f8108  arm_veneer_for_initialize_interrupt_controller

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 arm_veneer_for_initialize_interrupt_controller(void)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_0380be04;
  do {
    *puVar1 = &DAT_03801561;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x380becc);
  _DAT_0380fffc = &DAT_03801800;
  _DAT_04000210 = 0;
  _DAT_04000214 = 0xffffffff;
  _DAT_04000208 = 1;
  return in_lr;
}


// 0x037f8114  arm_veneer_for_install_interrupt_callback

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 arm_veneer_for_install_interrupt_callback(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    puVar2 = &DAT_0380be08;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&DAT_0380be04)[iVar1 * 2] = param_2;
        (&DAT_0380be08)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          _DAT_04000004 = _DAT_04000004 | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          _DAT_04000004 = _DAT_04000004 | 0x10;
        }
        _DAT_04000210 = _DAT_04000210 | param_1;
        return in_lr;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return in_lr;
}


// 0x037f8120  arm_veneer_for_enable_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 arm_veneer_for_enable_interrupt_sources(uint param_1)

{
  undefined4 in_lr;
  
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
  return in_lr;
}


// 0x03801564  install_interrupt_callback

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 install_interrupt_callback(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    puVar2 = &DAT_0380be08;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&DAT_0380be04)[iVar1 * 2] = param_2;
        (&DAT_0380be08)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          _DAT_04000004 = _DAT_04000004 | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          _DAT_04000004 = _DAT_04000004 | 0x10;
        }
        _DAT_04000210 = _DAT_04000210 | param_1;
        return in_lr;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return in_lr;
}


// 0x038015d0  initialize_interrupt_controller

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 initialize_interrupt_controller(void)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_0380be04;
  do {
    *puVar1 = &DAT_03801561;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x380becc);
  _DAT_0380fffc = &DAT_03801800;
  _DAT_04000210 = 0;
  _DAT_04000214 = 0xffffffff;
  _DAT_04000208 = 1;
  return in_lr;
}


// 0x03801620  disable_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 disable_interrupt_sources(uint param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = &DAT_0380be08;
  iVar2 = 0;
  do {
    if (param_1 == *puVar1) {
      (&DAT_0380be04)[iVar2 * 2] = &DAT_03801561;
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
      return in_lr;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x19);
  return in_lr;
}


// 0x038016a4  replace_irq_dispatcher

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 replace_irq_dispatcher(undefined4 param_1)

{
  undefined4 in_lr;
  
  _DAT_04000214 = 0xffffffff;
  _DAT_04000210 = 0;
  _DAT_0380fffc = param_1;
  _DAT_04000208 = 1;
  return in_lr;
}


// 0x038016d8  enable_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 enable_interrupt_sources(uint param_1)

{
  undefined4 in_lr;
  
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
  return in_lr;
}


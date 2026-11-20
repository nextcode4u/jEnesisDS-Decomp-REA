/* ARM9 veneers — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020805e8  thumb_call_via_r3

void thumb_call_via_r3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x020805e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// 0x02085898  arm_veneer_for_thumb_call_via_r3

void arm_veneer_for_thumb_call_via_r3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x020805e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// 0x020858b0  arm_veneer_for_disable_arm9_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_disable_arm9_interrupt_sources(uint param_1)

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


// 0x020858bc  arm_veneer_for_enable_arm9_interrupt_sources

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_enable_arm9_interrupt_sources(uint param_1)

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


// 0x020858c8  arm_veneer_for_install_arm9_interrupt_handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_install_arm9_interrupt_handler(uint param_1,undefined4 param_2)

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


// 0x020858d4  arm_veneer_for_initialize_arm9_interrupt_table

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_initialize_arm9_interrupt_table(void)

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


// 0x020858e0  arm_veneer_for_remove_arm9_interrupt_handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_remove_arm9_interrupt_handler(uint param_1)

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


// 0x020858ec  arm_veneer_for_sample_ds_keys_and_update_repeat_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm_veneer_for_sample_ds_keys_and_update_repeat_state(void)

{
  ushort uVar1;
  bool bVar2;
  
  DAT_020b4ca2 = DAT_020b4ca0;
  uVar1 = (~_DAT_04000130 & 0x3ff | (~_DAT_027ff018 & 3) << 10 | (~_DAT_027ff018 & 0xc0) << 6) ^
          0x2000;
  bVar2 = DAT_020b4ca0 != uVar1;
  DAT_020b4ca0 = uVar1;
  if (bVar2) {
    DAT_0208f392 = '<';
    DAT_020b4ca4 = read_newly_pressed_ds_keys();
  }
  DAT_0208f392 = DAT_0208f392 + -1;
  if (DAT_0208f392 == '\0') {
    DAT_0208f392 = '\x1e';
    DAT_020b4ca4 = uVar1;
  }
  return;
}


// 0x020858f8  arm_veneer_for_read_latched_ds_key_state

undefined2 arm_veneer_for_read_latched_ds_key_state(void)

{
  return DAT_020b4ca0;
}


// 0x02085904  arm_veneer_for_read_shared_arm7_touch_sample

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * arm_veneer_for_read_shared_arm7_touch_sample(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = _DAT_027ff00a;
  uVar2 = _DAT_027ff008;
  uVar1 = _DAT_027ff006;
  do {
  } while (DAT_027ff035 != '\0');
  *param_1 = _DAT_027ff004;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  return param_1;
}


// 0x02085910  arm_veneer_for_mount_browser_fat_storage

void arm_veneer_for_mount_browser_fat_storage(void)

{
  mount_browser_fat_storage();
  return;
}


// 0x02085940  thumb_veneer_for_register_named_device

int arm_thumb_veneer_for_register_named_device(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_0208fbc0;
  uVar5 = *param_1;
  iVar1 = 3;
  while( true ) {
    iVar4 = iVar1;
    uVar3 = *(undefined4 *)puVar6[3];
    iVar1 = newlib_strcmp(uVar3,uVar5);
    puVar6 = puVar6 + 1;
    if (iVar1 == 0) {
      iVar1 = newlib_strlen(uVar3);
      iVar2 = newlib_strlen(uVar5);
      if (iVar1 == iVar2) break;
    }
    iVar1 = newlib_strcmp(uVar3,"stdnull");
    if (iVar1 == 0) break;
    iVar1 = iVar4 + 1;
    if (iVar4 + 1 == 0x10) {
      return iVar4 + -0x10;
    }
  }
  (&DAT_0208fbc0)[iVar4] = param_1;
  return iVar4;
}


// 0x02085944  arm_entry_for_register_named_device

int arm_thumb_veneer_for_register_named_device(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_0208fbc0;
  uVar5 = *param_1;
  iVar1 = 3;
  while( true ) {
    iVar4 = iVar1;
    uVar3 = *(undefined4 *)puVar6[3];
    iVar1 = newlib_strcmp(uVar3,uVar5);
    puVar6 = puVar6 + 1;
    if (iVar1 == 0) {
      iVar1 = newlib_strlen(uVar3);
      iVar2 = newlib_strlen(uVar5);
      if (iVar1 == iVar2) break;
    }
    iVar1 = newlib_strcmp(uVar3,"stdnull");
    if (iVar1 == 0) break;
    iVar1 = iVar4 + 1;
    if (iVar4 + 1 == 0x10) {
      return iVar4 + -0x10;
    }
  }
  (&DAT_0208fbc0)[iVar4] = param_1;
  return iVar4;
}


// 0x02085948  thumb_veneer_for_change_working_directory_on_device

undefined4 arm_thumb_veneer_for_change_working_directory_on_device(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_410 [1024];
  
  uVar1 = bounded_string_length(param_1,0x401);
  if (uVar1 < 0x400) {
    iVar2 = newlib_strchr(param_1,0x3a);
    if (iVar2 == 0) {
      newlib_strncpy(auStack_410,&DAT_0208fc04,0x400);
    }
    else {
      newlib_strncpy(auStack_410,param_1,0x400);
      param_1 = newlib_strchr(param_1,0x3a);
      param_1 = param_1 + 1;
    }
    iVar2 = newlib_strchr(auStack_410,0x3a);
    if (*(char *)(iVar2 + 1) == '/') {
      iVar2 = normalize_device_directory_path(&DAT_0208f3a0,auStack_410,param_1,0x400);
      if (iVar2 != -1) {
        iVar2 = select_device_for_path_prefix(auStack_410);
        if ((iVar2 < 0) || (*(code **)((&DAT_0208fbc0)[iVar2] + 0x2c) == (code *)0x0)) {
          DAT_0208f3a0 = 0x13;
          return 0xffffffff;
        }
        iVar3 = (**(code **)((&DAT_0208fbc0)[iVar2] + 0x2c))(&DAT_0208f3a0,auStack_410);
        if (iVar3 != -1) {
          set_default_device_slot(iVar2);
          newlib_strncpy(&DAT_0208fc04,auStack_410,0x400);
          return 0;
        }
      }
    }
    else {
      DAT_0208f3a0 = 2;
    }
  }
  else {
    DAT_0208f3a0 = 0x5b;
  }
  return 0xffffffff;
}


// 0x0208594c  arm_entry_for_change_working_directory_on_device

undefined4 arm_thumb_veneer_for_change_working_directory_on_device(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_410 [1024];
  
  uVar1 = bounded_string_length(param_1,0x401);
  if (uVar1 < 0x400) {
    iVar2 = newlib_strchr(param_1,0x3a);
    if (iVar2 == 0) {
      newlib_strncpy(auStack_410,&DAT_0208fc04,0x400);
    }
    else {
      newlib_strncpy(auStack_410,param_1,0x400);
      param_1 = newlib_strchr(param_1,0x3a);
      param_1 = param_1 + 1;
    }
    iVar2 = newlib_strchr(auStack_410,0x3a);
    if (*(char *)(iVar2 + 1) == '/') {
      iVar2 = normalize_device_directory_path(&DAT_0208f3a0,auStack_410,param_1,0x400);
      if (iVar2 != -1) {
        iVar2 = select_device_for_path_prefix(auStack_410);
        if ((iVar2 < 0) || (*(code **)((&DAT_0208fbc0)[iVar2] + 0x2c) == (code *)0x0)) {
          DAT_0208f3a0 = 0x13;
          return 0xffffffff;
        }
        iVar3 = (**(code **)((&DAT_0208fbc0)[iVar2] + 0x2c))(&DAT_0208f3a0,auStack_410);
        if (iVar3 != -1) {
          set_default_device_slot(iVar2);
          newlib_strncpy(&DAT_0208fc04,auStack_410,0x400);
          return 0;
        }
      }
    }
    else {
      DAT_0208f3a0 = 2;
    }
  }
  else {
    DAT_0208f3a0 = 0x5b;
  }
  return 0xffffffff;
}


// 0x02085968  thumb_veneer_for_newlib_free_global_reent_wrapper

void arm_thumb_veneer_for_newlib_free_global_reent_wrapper(undefined4 param_1)

{
  newlib_free_r(&DAT_0208f3a0,param_1);
  return;
}


// 0x0208596c  arm_entry_for_newlib_free_global_reent_wrapper

void arm_thumb_veneer_for_newlib_free_global_reent_wrapper(undefined4 param_1)

{
  newlib_free_r(&DAT_0208f3a0,param_1);
  return;
}


// 0x02085978  thumb_veneer_for_newlib_malloc_global_reent_wrapper

void arm_thumb_veneer_for_newlib_malloc_global_reent_wrapper(undefined4 param_1)

{
  newlib_malloc_r(&DAT_0208f3a0,param_1);
  return;
}


// 0x0208597c  arm_entry_for_newlib_malloc_global_reent_wrapper

void arm_thumb_veneer_for_newlib_malloc_global_reent_wrapper(undefined4 param_1)

{
  newlib_malloc_r(&DAT_0208f3a0,param_1);
  return;
}


// 0x02085990  thumb_veneer_for_scsd_write_sector_data_and_crc

/* WARNING: Removing unreachable block (ram,0x0207ce54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 arm_thumb_veneer_for_scsd_write_sector_data_and_crc(ushort *param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x200;
  iVar3 = 0x10000;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  } while ((_DAT_09000000 & 0x100) == 0);
  if (((uint)param_1 & 1) == 0) goto LAB_0207ce18;
  do {
    pbVar1 = (byte *)((int)param_1 + 1);
    param_1 = param_1 + 1;
    _DAT_09000004 = (uint)*pbVar1;
    _DAT_09000000 = 0;
    iVar4 = iVar4 + -2;
    puVar2 = param_2;
  } while (iVar4 != 0);
  while (puVar2 != (ushort *)0x0) {
    param_2 = (ushort *)0x0;
    iVar4 = 8;
    param_1 = puVar2;
LAB_0207ce18:
    do {
      _DAT_09000000 = (uint)*param_1 * 0x100001;
      _DAT_09000004 = _DAT_09000000 >> 8;
      iVar4 = iVar4 + -2;
      param_1 = param_1 + 1;
      puVar2 = param_2;
    } while (iVar4 != 0);
  }
  _DAT_09000000 = CONCAT22(DAT_09000000_2,0xff);
  return 1;
}


// 0x02085994  arm_entry_for_scsd_write_sector_data_and_crc

/* WARNING: Removing unreachable block (ram,0x0207ce54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 arm_thumb_veneer_for_scsd_write_sector_data_and_crc(ushort *param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x200;
  iVar3 = 0x10000;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  } while ((_DAT_09000000 & 0x100) == 0);
  if (((uint)param_1 & 1) == 0) goto LAB_0207ce18;
  do {
    pbVar1 = (byte *)((int)param_1 + 1);
    param_1 = param_1 + 1;
    _DAT_09000004 = (uint)*pbVar1;
    _DAT_09000000 = 0;
    iVar4 = iVar4 + -2;
    puVar2 = param_2;
  } while (iVar4 != 0);
  while (puVar2 != (ushort *)0x0) {
    param_2 = (ushort *)0x0;
    iVar4 = 8;
    param_1 = puVar2;
LAB_0207ce18:
    do {
      _DAT_09000000 = (uint)*param_1 * 0x100001;
      _DAT_09000004 = _DAT_09000000 >> 8;
      iVar4 = iVar4 + -2;
      param_1 = param_1 + 1;
      puVar2 = param_2;
    } while (iVar4 != 0);
  }
  _DAT_09000000 = CONCAT22(DAT_09000000_2,0xff);
  return 1;
}


// 0x020859b0  thumb_veneer_for_bounded_string_length

int arm_thumb_veneer_for_bounded_string_length(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 == 0) || (*param_1 == '\0')) {
    return 0;
  }
  pcVar1 = param_1;
  do {
    pcVar1 = pcVar1 + 1;
    if (pcVar1 == param_1 + param_2) break;
  } while (*pcVar1 != '\0');
  return (int)pcVar1 - (int)param_1;
}


// 0x020859b4  arm_entry_for_bounded_string_length

int arm_thumb_veneer_for_bounded_string_length(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 == 0) || (*param_1 == '\0')) {
    return 0;
  }
  pcVar1 = param_1;
  do {
    pcVar1 = pcVar1 + 1;
    if (pcVar1 == param_1 + param_2) break;
  } while (*pcVar1 != '\0');
  return (int)pcVar1 - (int)param_1;
}


// 0x020859d8  thumb_veneer_for_uppercase_string_in_place_using_ctype_table

void arm_thumb_veneer_for_uppercase_string_in_place_using_ctype_table(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if (((&DAT_0208ee85)[bVar1] & 2) != 0) {
      *param_1 = bVar1 - 0x20;
    }
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return;
}


// 0x020859dc  arm_entry_for_uppercase_string_in_place_using_ctype_table

void arm_thumb_veneer_for_uppercase_string_in_place_using_ctype_table(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if (((&DAT_0208ee85)[bVar1] & 2) != 0) {
      *param_1 = bVar1 - 0x20;
    }
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return;
}


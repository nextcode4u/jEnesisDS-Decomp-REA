/* ARM9 partitions — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02072c5c  fat_unsafe_unmount_partition_wrapper

void fat_unsafe_unmount_partition_wrapper(void)

{
  fat_fat_partition_unsafeunmount();
  return;
}


// 0x02072c68  fat_unmount_partition_wrapper

void fat_unmount_partition_wrapper(void)

{
  fat_fat_partition_unmount();
  return;
}


// 0x02072c74  fat_mount_custom_interface_wrapper

void fat_mount_custom_interface_wrapper(void)

{
  fat_fat_partition_mountcustominterface();
  return;
}


// 0x02072c80  fat_mount_partition_wrapper

void fat_mount_partition_wrapper(void)

{
  fat_fat_partition_mount();
  return;
}


// 0x02072c8c  fat_mount_default_and_register_device

undefined4 fat_mount_default_and_register_device(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fat_fat_partition_mount(1,param_1);
  iVar2 = fat_fat_partition_mount(2,param_1);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    fat_fat_partition_setdefaultinterface(2);
  }
  else {
    fat_fat_partition_setdefaultinterface(1);
  }
  arm_thumb_veneer_for_register_named_device("");
  if (param_2 != 0) {
    arm_thumb_veneer_for_change_working_directory_on_device(&DAT_0208f2f8);
  }
  return 1;
}


// 0x02072cdc  mount_browser_fat_storage

void mount_browser_fat_storage(void)

{
  fat_mount_default_and_register_device(8,1);
  return;
}


// 0x02072cec  fat_fat_partition_setdefaultinterface

undefined4 fat_fat_partition_setdefaultinterface(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 - 1U & 0xff) < 3) && ((&DAT_020b4c5c)[param_1] != 0)) {
    uVar1 = 1;
    DAT_020b4c5c = (&DAT_020b4c5c)[param_1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02072d10  fat_fat_partition_setdefaultpartition

undefined4 fat_fat_partition_setdefaultpartition(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) ||
     (((param_1 != DAT_020b4c60 && (param_1 != DAT_020b4c64)) && (param_1 != DAT_020b4c68)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    DAT_020b4c5c = param_1;
  }
  return uVar1;
}


// 0x02072d38  fat_fat_partition_getpartitionfrompath

undefined4 fat_fat_partition_getpartitionfrompath(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = arm_thumb_veneer_for_newlib_strlen(&DAT_0208f300);
  iVar2 = arm_thumb_veneer_for_newlib_strchr(param_1,0x3a);
  if (iVar2 != 0) {
    iVar2 = arm_thumb_veneer_for_newlib_strncmp(&DAT_0208f300,param_1,iVar1);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + iVar1);
    if (uVar3 != 0x3a) {
      if (-1 < (int)((uint)(byte)(&DAT_0208ee85)[uVar3] << 0x1d)) {
        return 0;
      }
      if (*(char *)(param_1 + iVar1 + 1) != ':') {
        return 0;
      }
      uVar3 = uVar3 - 0x30;
      if (3 < uVar3) {
        return 0;
      }
      goto LAB_02072d56;
    }
  }
  uVar3 = 0;
LAB_02072d56:
  return (&DAT_020b4c5c)[uVar3];
}


// 0x02072d9c  fat_fat_partition_destructor

void fat_fat_partition_destructor(int *param_1)

{
  fat_fat_cache_destructor(param_1[1]);
  (**(code **)(*param_1 + 0x1c))();
  arm_thumb_veneer_for_newlib_free_global_reent_wrapper(param_1);
  return;
}


// 0x02072db4  fat_fat_partition_unsafeunmount

undefined4 fat_fat_partition_unsafeunmount(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (&DAT_020b4c5c)[param_1];
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar2 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar2 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar2 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    fat_fat_cache_invalidate(*(undefined4 *)(iVar2 + 4));
    fat_fat_partition_destructor(iVar2);
    uVar1 = 1;
  }
  return uVar1;
}


// 0x02072e14  fat_fat_partition_unmount

undefined4 fat_fat_partition_unmount(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_020b4c5c)[param_1];
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 0)) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar1 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar1 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar1 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    fat_fat_partition_destructor();
    uVar2 = 1;
  }
  return uVar2;
}


// 0x02072e70  fat_fat_partition_constructor

/* WARNING: Removing unreachable block (ram,0x02072fb2) */

int * fat_fat_partition_constructor(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char acStack_220 [8];
  ushort uStack_218;
  byte bStack_216;
  ushort local_215;
  byte local_213;
  ushort local_212;
  byte local_210;
  ushort local_20f;
  ushort local_20d;
  ushort local_20a;
  ushort uStack_200;
  byte bStack_1fe;
  byte bStack_1fd;
  ushort uStack_1fc;
  byte bStack_1fa;
  byte bStack_1f9;
  byte bStack_1f8;
  ushort uStack_1f4;
  byte bStack_1f2;
  byte bStack_1f1;
  char cStack_1ea;
  char cStack_1e9;
  char cStack_1e8;
  char cStack_1ce;
  char cStack_1cd;
  char cStack_1cc;
  char acStack_62 [8];
  ushort local_5a;
  byte local_58 [56];
  
  arm_thumb_veneer_for_newlib_memset(acStack_220,0,0x200);
  cVar1 = (**(code **)(param_1 + 0x10))(0,1,acStack_220);
  if (cVar1 == '\0') {
    return (int *)0x0;
  }
  if (local_58[0x36] != 'U') {
    return (int *)0x0;
  }
  if (local_58[0x37] != -0x56) {
    return (int *)0x0;
  }
  if ((((cStack_1ea == 'F') && (cStack_1e9 == 'A')) && (cStack_1e8 == 'T')) ||
     (((cStack_1ce == 'F' && (cStack_1cd == 'A')) && (cStack_1cc == 'T')))) {
LAB_02072f20:
    uVar5 = 0;
  }
  else {
    iVar3 = 0x1be;
    do {
      if (acStack_220[iVar3] == -0x80) {
        if (iVar3 == 0x1fe) goto LAB_02072f20;
        goto LAB_02073062;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x1fe);
    if (acStack_62[4] == '\0') {
      if (local_58[10] == '\0') {
        if (local_58[0x1a] == '\0') {
          if (local_58[0x2a] == '\0') goto LAB_02072f20;
          iVar3 = 0x1ee;
        }
        else {
          iVar3 = 0x1de;
        }
      }
      else {
        iVar3 = 0x1ce;
      }
    }
    else {
      iVar3 = 0x1be;
    }
LAB_02073062:
    uVar5 = (uint)*(ushort *)((int)&uStack_218 + iVar3) |
            (uint)(&bStack_216)[iVar3] << 0x10 | (uint)*(byte *)((int)&local_215 + iVar3) << 0x18;
  }
  cVar1 = (**(code **)(param_1 + 0x10))(uVar5,1,acStack_220);
  if ((cVar1 == '\0') || (piVar2 = (int *)arm_thumb_veneer_for_newlib_malloc_global_reent_wrapper(0x44), piVar2 == (int *)0x0)) {
    return (int *)0x0;
  }
  *piVar2 = param_1;
  piVar2[0xc] = (uint)local_20a;
  if (local_20a == 0) {
    piVar2[0xc] = (uint)uStack_1fc | (uint)bStack_1fa << 0x10 | (uint)bStack_1f9 << 0x18;
  }
  piVar2[6] = (uint)local_20d;
  if (local_20d == 0) {
    piVar2[6] = (uint)uStack_200 | (uint)bStack_1fe << 0x10 | (uint)bStack_1fd << 0x18;
  }
  piVar2[8] = 0x200;
  iVar3 = (int)((uint)local_215 * (uint)local_213) >> 9;
  piVar2[9] = iVar3;
  piVar2[10] = iVar3 << 9;
  iVar6 = uVar5 + local_212;
  piVar2[0xb] = iVar6;
  iVar4 = piVar2[0xc];
  iVar3 = iVar6 + (uint)local_210 * iVar4;
  piVar2[4] = iVar3;
  iVar3 = iVar3 + (uint)(local_20f >> 4);
  piVar2[7] = iVar3;
  piVar2[3] = (piVar2[6] - iVar3) * 0x200;
  uVar5 = arm_thumb_veneer_for_compiler_udivsi3();
  piVar2[0xd] = uVar5;
  piVar2[0xe] = 2;
  if (uVar5 < 0xff5) {
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  else {
    if (0xfff4 < uVar5) {
      *(undefined1 *)((int)piVar2 + 9) = 3;
      piVar2[5] = (uint)uStack_1f4 | (uint)bStack_1f2 << 0x10 | (uint)bStack_1f1 << 0x18;
      if (-1 < (int)((uint)bStack_1f8 * 0x1000000)) {
        piVar2[0xb] = (bStack_1f8 & 0xf) * iVar4 + iVar6;
      }
      goto LAB_0207300e;
    }
    *(undefined1 *)((int)piVar2 + 9) = 2;
  }
  piVar2[5] = 0;
LAB_0207300e:
  iVar3 = fat_fat_cache_constructor(param_2,*piVar2);
  piVar2[1] = iVar3;
  piVar2[0xf] = piVar2[5];
  *(byte *)(piVar2 + 2) = ~(byte)(*(uint *)(param_1 + 4) >> 1) & 1;
  piVar2[0x10] = 0;
  return piVar2;
}


// 0x020730f0  fat_fat_partition_mountcustominterface

undefined4 fat_fat_partition_mountcustominterface(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_020b4c68 == (int *)0x0) && (param_1 != 0)) {
    piVar3 = &DAT_020b4c5c;
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if ((piVar3 != (int *)0x0) && (param_1 == *piVar3)) {
        DAT_020b4c68 = piVar3;
        return 1;
      }
      piVar3 = piVar4 + 1;
    } while (piVar4 + 1 != &DAT_020b4c6c);
    iVar2 = fat_fat_partition_constructor(param_1,param_2);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02073150  fat_fat_partition_mount

bool fat_fat_partition_mount(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((&DAT_020b4c5c)[param_1] == 0) {
    if (param_1 == 1) {
      iVar1 = fat_fat_disc_dsslotfindinterface();
    }
    else {
      if (param_1 != 2) {
        return false;
      }
      iVar1 = fat_fat_disc_gbaslotfindinterface();
    }
    if (iVar1 != 0) {
      piVar2 = &DAT_020b4c5c;
      while ((piVar3 = piVar2, piVar2 = (int *)*piVar3, piVar2 == (int *)0x0 || (iVar1 != *piVar2)))
      {
        piVar2 = piVar3 + 1;
        if (piVar3 + 1 == &DAT_020b4c6c) {
          iVar1 = fat_fat_partition_constructor(iVar1,param_2);
          piVar3[param_1 + -3] = iVar1;
          return iVar1 != 0;
        }
      }
      (&DAT_020b4c5c)[param_1] = piVar2;
      return true;
    }
  }
  return false;
}


// 0x020731bc  fat_fat_disc_gbaslotfindinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_fat_disc_gbaslotfindinterface(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xff7f;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  while ((-1 < *(int *)(*piVar2 + 4) << 0x1b || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 == 0)))
  {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
    if (iVar3 == 8) {
      return 0;
    }
  }
  return *puVar4;
}


// 0x020731f8  fat_fat_disc_dsslotfindinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_fat_disc_dsslotfindinterface(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xf7ff;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  while ((-1 < *(int *)(*piVar2 + 4) << 0x1a || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 == 0)))
  {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
    if (iVar3 == 8) {
      return 0;
    }
  }
  return *puVar4;
}


// 0x02073238  fat_fat_disc_findinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_fat_disc_findinterface(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xf77f;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  do {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 != 0) {
      return *puVar4;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 8);
  return 0;
}


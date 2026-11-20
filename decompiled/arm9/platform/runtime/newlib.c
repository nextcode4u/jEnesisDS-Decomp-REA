/* ARM9 newlib — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02081020  newlib_fclose

/* WARNING: Removing unreachable block (ram,0x02080f50) */

undefined4 newlib_fclose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    newlib_sfp_lock_acquire();
    newlib_sinit(&DAT_0208f3a0);
    uVar1 = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar1 = newlib_fflush(param_1);
      if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x20)), iVar2 < 0)) {
        uVar1 = 0xffffffff;
      }
      if ((*(ushort *)(param_1 + 0xc) & 0x80) != 0) {
        newlib_free_r(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x14));
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        if (*(int *)(param_1 + 0x34) != param_1 + 0x44) {
          newlib_free_r(&DAT_0208f3a0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      if (*(int *)(param_1 + 0x48) != 0) {
        newlib_free_r(&DAT_0208f3a0);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
    newlib_sfp_lock_release();
  }
  return uVar1;
}


// 0x02081034  newlib_fflush

undefined4 newlib_fflush(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 == (int *)0x0) {
    uVar2 = newlib_fwalk(&DAT_0208f3a0,newlib_fflush);
    return uVar2;
  }
  newlib_sinit();
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 8) == 0) {
    *(ushort *)(param_1 + 3) = uVar1 | 0x800;
    if ((param_1[1] < 1) && (param_1[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_1[0xb];
    if (pcVar6 != (code *)0x0) {
      if ((uVar1 & 0x1000) == 0) {
        iVar5 = (*pcVar6)(param_1[8],uVar1 & 0x1000,1);
        if (iVar5 == -1) {
          return 0;
        }
      }
      else {
        iVar5 = param_1[0x15];
      }
      if ((*(ushort *)(param_1 + 3) & 4) != 0) {
        iVar4 = 0;
        if (param_1[0xd] != 0) {
          iVar4 = param_1[0x10];
        }
        iVar5 = iVar5 - param_1[1];
        if (param_1[0xd] != 0) {
          iVar5 = iVar5 - iVar4;
        }
      }
      iVar4 = (*pcVar6)(param_1[8],iVar5,0);
      if (iVar4 != -1) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7ff;
        *param_1 = param_1[5];
        param_1[1] = 0;
        if ((*(ushort *)(param_1 + 3) & 0x1000) != 0) {
          param_1[0x15] = iVar5;
          return 0;
        }
      }
    }
  }
  else {
    iVar5 = param_1[5];
    if (iVar5 != 0) {
      iVar4 = *param_1 - iVar5;
      *param_1 = iVar5;
      if ((uVar1 & 3) == 0) {
        iVar3 = param_1[6];
      }
      else {
        iVar3 = 0;
      }
      param_1[2] = iVar3;
      while (0 < iVar4) {
        iVar3 = (*(code *)param_1[10])(param_1[8],iVar5,iVar4);
        iVar5 = iVar5 + iVar3;
        iVar4 = iVar4 - iVar3;
        if (iVar3 < 1) {
          *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x40;
          return 0xffffffff;
        }
      }
    }
  }
  return 0;
}


// 0x020811ec  newlib_std

void newlib_std(undefined4 *param_1,undefined2 param_2,undefined4 param_3)

{
  param_1[0xc] = &LAB_02083510;
  param_1[4] = param_3;
  param_1[9] = &LAB_020835f0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[7] = 0;
  param_1[10] = newlib_swrite;
  param_1[0xb] = &LAB_02083538;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = param_1;
  return;
}


// 0x02081248  newlib_sfp_lock_acquire

void newlib_sfp_lock_acquire(void)

{
  return;
}


// 0x0208124c  newlib_sfp_lock_release

void newlib_sfp_lock_release(void)

{
  return;
}


// 0x02081258  newlib_sinit

void newlib_sinit(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  *(code **)(param_1 + 0x3c) = newlib_cleanup_r;
  *(undefined4 *)(param_1 + 0x2e4) = 3;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(int *)(param_1 + 0x2e8) = param_1 + 0x2ec;
  *(undefined4 *)(param_1 + 0x38) = 1;
  newlib_std(*(undefined4 *)(param_1 + 4),4,0,param_1);
  newlib_std(*(undefined4 *)(param_1 + 8),9,1,param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  puVar1[0xc] = &LAB_02083510;
  puVar1[4] = 2;
  puVar1[9] = &LAB_020835f0;
  *(undefined2 *)(puVar1 + 3) = 10;
  puVar1[7] = 0;
  puVar1[10] = newlib_swrite;
  puVar1[0xb] = &LAB_02083538;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = puVar1;
  return;
}


// 0x020812e8  newlib_fp_unlock_all

void newlib_fp_unlock_all(void)

{
  newlib_fwalk(&DAT_0208f3a0,&LAB_020812e0);
  return;
}


// 0x02081314  newlib_fp_lock_all

void newlib_fp_lock_all(void)

{
  newlib_fwalk(&DAT_0208f3a0,&LAB_020812d8);
  return;
}


// 0x02081340  newlib_cleanup_r

void newlib_cleanup_r(undefined4 param_1)

{
  newlib_fwalk(param_1,newlib_fclose);
  return;
}


// 0x02081370  newlib_sfmoreglue

undefined4 * newlib_sfmoreglue(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)newlib_malloc_r(param_1,param_2 * 0x60 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = 0;
    puVar1[2] = puVar1 + 3;
    newlib_memset(puVar1 + 3,0,param_2 * 0x60);
  }
  return puVar1;
}


// 0x020813c0  newlib_sfp

undefined4 * newlib_sfp(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  newlib_sinit(&DAT_0208f3a0);
  puVar1 = &DAT_0208f680;
  do {
    do {
      puVar3 = puVar1;
      iVar2 = puVar3[1];
      puVar1 = (undefined4 *)puVar3[2];
      if (-1 < iVar2 + -1) {
        do {
          if (*(short *)(puVar1 + 3) == 0) {
            puVar1[0x13] = 0;
            *puVar1 = 0;
            puVar1[2] = 0;
            puVar1[1] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0x12] = 0;
            puVar1[4] = 0xffffffff;
            *(undefined2 *)(puVar1 + 3) = 1;
            return puVar1;
          }
          bVar4 = iVar2 != 1;
          puVar1 = puVar1 + 0x18;
          iVar2 = iVar2 + -1;
        } while (bVar4);
      }
      puVar1 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
    puVar1 = (undefined4 *)newlib_sfmoreglue(param_1,4);
    *puVar3 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  *param_1 = 0xc;
  return (undefined4 *)0x0;
}


// 0x02081588  newlib_fopen

int newlib_fopen(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  iVar1 = newlib_sflags(&DAT_0208f3a0,param_2,local_1c);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = newlib_sfp(&DAT_0208f3a0), iVar2 != 0)) {
    iVar3 = newlib_reentrant_device_open(&DAT_0208f3a0,param_1,local_1c[0],0x1b6);
    if (iVar3 < 0) {
      newlib_sfp_lock_acquire();
      *(undefined2 *)(iVar2 + 0xc) = 0;
      newlib_sfp_lock_release();
      iVar2 = 0;
    }
    else {
      *(short *)(iVar2 + 0xc) = (short)iVar1;
      *(int *)(iVar2 + 0x10) = iVar3;
      *(undefined1 **)(iVar2 + 0x24) = &LAB_020835f0;
      *(code **)(iVar2 + 0x28) = newlib_swrite;
      *(undefined1 **)(iVar2 + 0x2c) = &LAB_02083538;
      *(undefined1 **)(iVar2 + 0x30) = &LAB_02083510;
      *(int *)(iVar2 + 0x20) = iVar2;
      if ((*(ushort *)(iVar2 + 0xc) & 0x100) != 0) {
        newlib_fseek_r(&DAT_0208f3a0,iVar2,0,2);
      }
    }
  }
  return iVar2;
}


// 0x020815a4  newlib_fread_r

int newlib_fread_r(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_34;
  
  uVar2 = param_3 * param_4;
  if (uVar2 == 0) {
    local_34 = 0;
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
      newlib_sinit();
    }
    uVar8 = param_5[1];
    if ((int)uVar8 < 0) {
      uVar8 = 0;
      param_5[1] = 0;
    }
    uVar4 = uVar2;
    local_34 = param_4;
    if ((*(ushort *)(param_5 + 3) & 2) == 0) {
      while (uVar8 < uVar4) {
        newlib_memcpy(param_2,*param_5,uVar8);
        *param_5 = *param_5 + uVar8;
        iVar9 = newlib_srefill_r(param_1,param_5);
        param_2 = param_2 + uVar8;
        uVar4 = uVar4 - uVar8;
        if (iVar9 != 0) {
          iVar9 = compiler_udivsi3(uVar2 - uVar4,param_3);
          return iVar9;
        }
        uVar8 = param_5[1];
      }
      newlib_memcpy(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
    }
    else {
      if (uVar8 <= uVar2) {
        uVar4 = uVar8;
      }
      newlib_memcpy(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
      iVar9 = uVar2 - uVar4;
      if ((int *)param_5[0xd] != (int *)0x0 && uVar2 != uVar4) {
        if ((int *)param_5[0xd] != param_5 + 0x11) {
          newlib_free_r(&DAT_0208f3a0);
        }
        param_5[0xd] = 0;
      }
      if (uVar2 - uVar4 != 0) {
        param_2 = param_2 + uVar4;
        do {
          iVar6 = param_5[5];
          iVar7 = *param_5;
          iVar5 = param_5[6];
          param_5[5] = param_2;
          *param_5 = param_2;
          param_5[6] = iVar9;
          iVar1 = newlib_srefill_r(param_1,param_5);
          iVar3 = param_5[1];
          param_5[5] = iVar6;
          param_5[6] = iVar5;
          *param_5 = iVar7;
          param_5[1] = 0;
          param_2 = param_2 + iVar3;
          iVar9 = iVar9 - iVar3;
          if (iVar1 != 0) {
            iVar9 = compiler_udivsi3(uVar2 - iVar9,param_3);
            return iVar9;
          }
        } while (iVar9 != 0);
      }
    }
  }
  return local_34;
}


// 0x02081788  newlib_fread

void newlib_fread(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  newlib_fread_r(&DAT_0208f3a0,param_1,param_2,param_3,param_4);
  return;
}


// 0x020817cc  newlib_malloc_trim_r

undefined4 newlib_malloc_trim_r(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  newlib_malloc_lock_return_stub();
  uVar3 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  iVar2 = ((uVar3 - param_2) + 0xfef >> 0xc) - 1;
  if (0xfff < iVar2 * 0x1000) {
    iVar1 = newlib_reentrant_adjust_heap_break(param_1,0);
    if (iVar1 == uVar3 + DAT_0208f7b8) {
      iVar1 = newlib_reentrant_adjust_heap_break(param_1,iVar2 * -0x1000);
      if (iVar1 != -1) {
        *(uint *)(DAT_0208f7b8 + 4) = uVar3 + iVar2 * -0x1000 | 1;
        DAT_020b4cb4 = DAT_020b4cb4 + iVar2 * -0x1000;
        newlib_malloc_unlock_return_stub(param_1);
        return 1;
      }
      iVar2 = newlib_reentrant_adjust_heap_break(param_1,0);
      if (0xf < iVar2 - DAT_0208f7b8) {
        DAT_020b4cb4 = iVar2 - DAT_0208fbbc;
        *(uint *)(DAT_0208f7b8 + 4) = iVar2 - DAT_0208f7b8 | 1;
      }
    }
  }
  newlib_malloc_unlock_return_stub(param_1);
  return 0;
}


// 0x020818d4  newlib_free_r

void newlib_free_r(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  
  if (param_2 == 0) {
    return;
  }
  newlib_malloc_lock_return_stub();
  iVar11 = param_2 + -8;
  uVar2 = *(uint *)(param_2 + -4);
  uVar4 = uVar2 & 0xfffffffe;
  iVar9 = iVar11 + uVar4;
  uVar8 = *(uint *)(iVar9 + 4) & 0xfffffffc;
  if (iVar9 == DAT_0208f7b8) {
    uVar4 = uVar4 + uVar8;
    if ((uVar2 & 1) == 0) {
      iVar9 = *(int *)(param_2 + -8);
      iVar11 = iVar11 - iVar9;
      iVar6 = *(int *)(iVar11 + 0xc);
      iVar7 = *(int *)(iVar11 + 8);
      *(int *)(iVar6 + 8) = iVar7;
      *(int *)(iVar7 + 0xc) = iVar6;
      uVar4 = uVar4 + iVar9;
    }
    DAT_0208f7b8 = iVar11;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    if (0x1ffff < uVar4) {
      newlib_malloc_trim_r(param_1,DAT_020b4ca8);
    }
    goto LAB_0208194c;
  }
  *(uint *)(iVar9 + 4) = uVar8;
  if ((uVar2 & 1) == 0) {
    iVar6 = *(int *)(param_2 + -8);
    iVar11 = iVar11 - iVar6;
    puVar5 = *(undefined4 **)(iVar11 + 8);
    if (puVar5 != &DAT_0208f7b8) {
      iVar7 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar5;
      puVar5[3] = iVar7;
    }
    uVar4 = uVar4 + iVar6;
    bVar1 = puVar5 == &DAT_0208f7b8;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) != 0) goto LAB_02081938;
LAB_02081960:
    uVar4 = uVar4 + uVar8;
    if (bVar1) {
      puVar5 = *(undefined4 **)(iVar9 + 8);
    }
    else {
      puVar5 = *(undefined4 **)(iVar9 + 8);
      if (puVar5 == &DAT_0208f7b8) {
        DAT_0208f7c0 = iVar11;
        DAT_0208f7c4 = iVar11;
        *(uint *)(uVar4 + iVar11) = uVar4;
        *(uint *)(iVar11 + 4) = uVar4 | 1;
        *(int **)(iVar11 + 8) = &DAT_0208f7b8;
        *(int **)(iVar11 + 0xc) = &DAT_0208f7b8;
        goto LAB_0208194c;
      }
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    *(undefined4 **)(iVar9 + 8) = puVar5;
    puVar5[3] = iVar9;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  else {
    bVar1 = false;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) == 0) goto LAB_02081960;
LAB_02081938:
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  if (uVar4 < 0x200) {
    DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar4 >> 5 & 0xff);
    uVar4 = uVar4 & 0xfffffff8;
    iVar9 = *(int *)((int)&DAT_0208f7b8 + uVar4);
    *(undefined **)(iVar11 + 0xc) = &DAT_0208f7b0 + uVar4;
    *(int *)(iVar11 + 8) = iVar9;
    *(int *)(iVar9 + 0xc) = iVar11;
    *(int *)((int)&DAT_0208f7b8 + uVar4) = iVar11;
  }
  else {
    uVar2 = uVar4 >> 9;
    if (uVar2 == 0) {
      uVar2 = uVar4 >> 3;
      iVar9 = uVar2 << 3;
    }
    else if (uVar2 < 5) {
      uVar2 = (uVar4 >> 6) + 0x38;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x15) {
      uVar2 = uVar2 + 0x5b;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x55) {
      uVar2 = (uVar4 >> 0xc) + 0x6e;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x155) {
      uVar2 = (uVar4 >> 0xf) + 0x77;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x555) {
      uVar2 = (uVar4 >> 0x12) + 0x7c;
      iVar9 = uVar2 * 8;
    }
    else {
      uVar2 = 0x7e;
      iVar9 = 0x3f0;
    }
    puVar10 = &DAT_0208f7b0 + iVar9;
    puVar3 = *(undefined **)((int)&DAT_0208f7b8 + iVar9);
    if (puVar10 == puVar3) {
      DAT_0208f7b4 = DAT_0208f7b4 | 1 << ((int)uVar2 >> 2 & 0xffU);
    }
    else {
      do {
        if ((*(uint *)(puVar3 + 4) & 0xfffffffc) <= uVar4) break;
        puVar3 = *(undefined **)(puVar3 + 8);
      } while (puVar10 != puVar3);
      puVar10 = *(undefined **)(puVar3 + 0xc);
    }
    *(undefined **)(iVar11 + 0xc) = puVar10;
    *(undefined **)(iVar11 + 8) = puVar3;
    *(int *)(puVar3 + 0xc) = iVar11;
    *(int *)(puVar10 + 8) = iVar11;
  }
LAB_0208194c:
  newlib_malloc_unlock_return_stub(param_1);
  return;
}


// 0x02081b8c  newlib_fseek_r

undefined4 newlib_fseek_r(undefined4 *param_1,int *param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint local_74;
  undefined1 auStack_6c [8];
  uint local_64;
  int local_54;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[0xe] != 0)) {
    uVar7 = *(ushort *)(param_2 + 3);
  }
  else {
    newlib_sinit();
    uVar7 = *(ushort *)(param_2 + 3);
  }
  if ((uVar7 & 0x108) == 0x108) {
    newlib_fflush(param_2);
  }
  pcVar6 = (code *)param_2[0xb];
  if (pcVar6 == (code *)0x0) {
    *param_1 = 0x1d;
    return 0xffffffff;
  }
  if (param_4 == 1) {
    newlib_fflush(param_2);
    uVar7 = *(ushort *)(param_2 + 3);
    if ((uVar7 & 0x1000) == 0) {
      iVar3 = (*pcVar6)(param_2[8],uVar7 & 0x1000,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_2 + 3);
    }
    else {
      iVar3 = param_2[0x15];
    }
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) == 0) || (*param_2 == 0)) goto LAB_02081e38;
      iVar9 = param_2[5];
      iVar3 = iVar3 + (*param_2 - iVar9);
    }
    else {
      iVar3 = iVar3 - param_2[1];
      if (param_2[0xd] == 0) {
LAB_02081e38:
        iVar9 = param_2[5];
      }
      else {
        iVar9 = param_2[5];
        iVar3 = iVar3 - param_2[0x10];
      }
    }
    param_4 = 0;
    local_74 = param_3 + iVar3;
    bVar1 = true;
  }
  else {
    if ((param_4 != 2) && (param_4 != 0)) {
      *param_1 = 0x16;
      return 0xffffffff;
    }
    iVar3 = 0;
    iVar9 = param_2[5];
    bVar1 = false;
    local_74 = param_3;
  }
  if (iVar9 == 0) {
    newlib_smakebuf(param_2);
  }
  uVar7 = *(ushort *)(param_2 + 3);
  if ((uVar7 & 0x81a) != 0) goto LAB_02081c58;
  if ((uVar7 & 0x400) == 0) {
    if ((pcVar6 == (code *)&LAB_02083538) && (-1 < param_2[4])) {
      iVar9 = newlib_reentrant_device_seek(param_1,param_2[4],auStack_6c);
      if ((iVar9 == 0) && ((local_64 & 0xf000) == 0x8000)) {
        param_2[0x14] = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        goto LAB_02081cb4;
      }
      uVar7 = *(ushort *)(param_2 + 3);
    }
    *(ushort *)(param_2 + 3) = uVar7 | 0x800;
    goto LAB_02081c58;
  }
LAB_02081cb4:
  uVar4 = local_74;
  if (param_4 != 0) {
    iVar9 = newlib_reentrant_device_seek(param_1,param_2[4],auStack_6c);
    if (iVar9 != 0) goto LAB_02081c58;
    uVar4 = local_74 + local_54;
  }
  if (bVar1) {
    piVar5 = (int *)param_2[0xd];
    if (piVar5 != (int *)0x0) {
      uVar8 = (uint)*(ushort *)(param_2 + 3);
      iVar9 = param_2[1];
      iVar2 = param_2[0x10];
      goto LAB_02081cf4;
    }
    uVar8 = (uint)*(ushort *)(param_2 + 3);
    iVar9 = param_2[1];
LAB_02081f24:
    iVar10 = param_2[5];
    iVar2 = (*param_2 - iVar10) + iVar9;
    iVar3 = iVar3 - (*param_2 - iVar10);
  }
  else {
    uVar7 = *(ushort *)(param_2 + 3);
    uVar8 = (uint)uVar7;
    if ((uVar7 & 0x1000) == 0) {
      uVar11 = (*pcVar6)(param_2[8],uVar8 & 0x1000,1);
      if ((int)uVar11 == -1) goto LAB_02081c58;
      uVar8 = (uint)*(ushort *)(param_2 + 3);
    }
    else {
      uVar11 = (ulonglong)CONCAT24(uVar7,param_2[0x15]) & 0x1000ffffffff;
    }
    iVar2 = (int)(uVar11 >> 0x20);
    piVar5 = (int *)param_2[0xd];
    iVar9 = param_2[1];
    if (piVar5 != (int *)0x0) {
      iVar2 = param_2[0x10];
    }
    iVar3 = (int)uVar11 - iVar9;
    if (piVar5 == (int *)0x0) goto LAB_02081f24;
    iVar3 = iVar3 - iVar2;
LAB_02081cf4:
    iVar10 = param_2[5];
    iVar2 = (param_2[0xf] - iVar10) + iVar2;
    iVar3 = (iVar3 + iVar9) - (param_2[0xf] - iVar10);
  }
  uVar7 = (ushort)uVar8;
  if ((int)uVar4 < iVar3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uVar8 >> 0xd ^ 1) & 1;
  }
  if ((uVar8 != 0) && (uVar4 < (uint)(iVar2 + iVar3))) {
    *param_2 = iVar10 + (uVar4 - iVar3);
    param_2[1] = iVar2 - (uVar4 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_2 + 0x11) {
        newlib_free_r(&DAT_0208f3a0,piVar5);
        uVar7 = *(ushort *)(param_2 + 3);
      }
      param_2[0xd] = 0;
    }
    *(ushort *)(param_2 + 3) = uVar7 & 0xffdf;
    return 0;
  }
  iVar9 = param_2[0x14];
  iVar3 = (*pcVar6)(param_2[8],uVar4 & -iVar9,0);
  if (iVar3 != -1) {
    *param_2 = param_2[5];
    param_2[1] = 0;
    if ((int *)param_2[0xd] != (int *)0x0) {
      if ((int *)param_2[0xd] != param_2 + 0x11) {
        newlib_free_r(&DAT_0208f3a0);
      }
      param_2[0xd] = 0;
    }
    uVar4 = uVar4 - (uVar4 & -iVar9);
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdf;
    if (uVar4 == 0) {
      return 0;
    }
    iVar3 = newlib_srefill_r(param_1,param_2);
    if ((iVar3 == 0) && (uVar4 <= (uint)param_2[1])) {
      *param_2 = *param_2 + uVar4;
      param_2[1] = param_2[1] - uVar4;
      return 0;
    }
  }
LAB_02081c58:
  iVar3 = newlib_fflush(param_2);
  if ((iVar3 == 0) && (iVar3 = (*pcVar6)(param_2[8],local_74,param_4), iVar3 != -1)) {
    if ((int *)param_2[0xd] != (int *)0x0) {
      if ((int *)param_2[0xd] != param_2 + 0x11) {
        newlib_free_r(&DAT_0208f3a0);
      }
      param_2[0xd] = 0;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xf7df;
    *param_2 = param_2[5];
    param_2[1] = 0;
    return 0;
  }
  return 0xffffffff;
}


// 0x02081ff0  newlib_fseek

/* WARNING: Removing unreachable block (ram,0x02081bb4) */

undefined4 newlib_fseek(int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uStack_74;
  undefined1 auStack_6c [8];
  uint uStack_64;
  int iStack_54;
  
  newlib_sinit();
  if ((*(ushort *)(param_1 + 3) & 0x108) == 0x108) {
    newlib_fflush(param_1);
  }
  pcVar6 = (code *)param_1[0xb];
  if (pcVar6 == (code *)0x0) {
    DAT_0208f3a0 = 0x1d;
    return 0xffffffff;
  }
  if (param_3 == 1) {
    newlib_fflush(param_1);
    uVar7 = *(ushort *)(param_1 + 3);
    if ((uVar7 & 0x1000) == 0) {
      iVar3 = (*pcVar6)(param_1[8],uVar7 & 0x1000,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar3 = param_1[0x15];
    }
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) == 0) || (*param_1 == 0)) goto LAB_02081e38;
      iVar9 = param_1[5];
      iVar3 = iVar3 + (*param_1 - iVar9);
    }
    else {
      iVar3 = iVar3 - param_1[1];
      if (param_1[0xd] == 0) {
LAB_02081e38:
        iVar9 = param_1[5];
      }
      else {
        iVar9 = param_1[5];
        iVar3 = iVar3 - param_1[0x10];
      }
    }
    param_3 = 0;
    uStack_74 = param_2 + iVar3;
    bVar1 = true;
  }
  else {
    if ((param_3 != 2) && (param_3 != 0)) {
      DAT_0208f3a0 = 0x16;
      return 0xffffffff;
    }
    iVar3 = 0;
    iVar9 = param_1[5];
    bVar1 = false;
    uStack_74 = param_2;
  }
  if (iVar9 == 0) {
    newlib_smakebuf(param_1);
  }
  uVar7 = *(ushort *)(param_1 + 3);
  if ((uVar7 & 0x81a) != 0) goto LAB_02081c58;
  if ((uVar7 & 0x400) == 0) {
    if ((pcVar6 == (code *)&LAB_02083538) && (-1 < param_1[4])) {
      iVar9 = newlib_reentrant_device_seek(&DAT_0208f3a0,param_1[4],auStack_6c);
      if ((iVar9 == 0) && ((uStack_64 & 0xf000) == 0x8000)) {
        param_1[0x14] = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        goto LAB_02081cb4;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    *(ushort *)(param_1 + 3) = uVar7 | 0x800;
    goto LAB_02081c58;
  }
LAB_02081cb4:
  uVar4 = uStack_74;
  if (param_3 != 0) {
    iVar9 = newlib_reentrant_device_seek(&DAT_0208f3a0,param_1[4],auStack_6c);
    if (iVar9 != 0) goto LAB_02081c58;
    uVar4 = uStack_74 + iStack_54;
  }
  if (bVar1) {
    piVar5 = (int *)param_1[0xd];
    if (piVar5 != (int *)0x0) {
      uVar8 = (uint)*(ushort *)(param_1 + 3);
      iVar9 = param_1[1];
      iVar2 = param_1[0x10];
      goto LAB_02081cf4;
    }
    uVar8 = (uint)*(ushort *)(param_1 + 3);
    iVar9 = param_1[1];
LAB_02081f24:
    iVar10 = param_1[5];
    iVar2 = (*param_1 - iVar10) + iVar9;
    iVar3 = iVar3 - (*param_1 - iVar10);
  }
  else {
    uVar7 = *(ushort *)(param_1 + 3);
    uVar8 = (uint)uVar7;
    if ((uVar7 & 0x1000) == 0) {
      uVar11 = (*pcVar6)(param_1[8],uVar8 & 0x1000,1);
      if ((int)uVar11 == -1) goto LAB_02081c58;
      uVar8 = (uint)*(ushort *)(param_1 + 3);
    }
    else {
      uVar11 = (ulonglong)CONCAT24(uVar7,param_1[0x15]) & 0x1000ffffffff;
    }
    iVar2 = (int)(uVar11 >> 0x20);
    piVar5 = (int *)param_1[0xd];
    iVar9 = param_1[1];
    if (piVar5 != (int *)0x0) {
      iVar2 = param_1[0x10];
    }
    iVar3 = (int)uVar11 - iVar9;
    if (piVar5 == (int *)0x0) goto LAB_02081f24;
    iVar3 = iVar3 - iVar2;
LAB_02081cf4:
    iVar10 = param_1[5];
    iVar2 = (param_1[0xf] - iVar10) + iVar2;
    iVar3 = (iVar3 + iVar9) - (param_1[0xf] - iVar10);
  }
  uVar7 = (ushort)uVar8;
  if ((int)uVar4 < iVar3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uVar8 >> 0xd ^ 1) & 1;
  }
  if ((uVar8 != 0) && (uVar4 < (uint)(iVar2 + iVar3))) {
    *param_1 = iVar10 + (uVar4 - iVar3);
    param_1[1] = iVar2 - (uVar4 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_1 + 0x11) {
        newlib_free_r(&DAT_0208f3a0,piVar5);
        uVar7 = *(ushort *)(param_1 + 3);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar7 & 0xffdf;
    return 0;
  }
  iVar9 = param_1[0x14];
  iVar3 = (*pcVar6)(param_1[8],uVar4 & -iVar9,0);
  if (iVar3 != -1) {
    *param_1 = param_1[5];
    param_1[1] = 0;
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        newlib_free_r(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    uVar4 = uVar4 - (uVar4 & -iVar9);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffdf;
    if (uVar4 == 0) {
      return 0;
    }
    iVar3 = newlib_srefill_r(&DAT_0208f3a0,param_1);
    if ((iVar3 == 0) && (uVar4 <= (uint)param_1[1])) {
      *param_1 = *param_1 + uVar4;
      param_1[1] = param_1[1] - uVar4;
      return 0;
    }
  }
LAB_02081c58:
  iVar3 = newlib_fflush(param_1);
  if ((iVar3 == 0) && (iVar3 = (*pcVar6)(param_1[8],uStack_74,param_3), iVar3 != -1)) {
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        newlib_free_r(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7df;
    *param_1 = param_1[5];
    param_1[1] = 0;
    return 0;
  }
  return 0xffffffff;
}


// 0x0208212c  newlib_ftell

int newlib_ftell(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  newlib_sinit();
  if (param_1[0xb] == 0) {
    iVar2 = -1;
    DAT_0208f3a0 = 0x1d;
  }
  else {
    newlib_fflush(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
    if ((uVar1 & 0x1000) == 0) {
      iVar2 = (*(code *)param_1[0xb])(param_1[8],uVar1 & 0x1000,1);
      if (iVar2 == -1) {
        return -1;
      }
      uVar1 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar2 = param_1[0x15];
    }
    if ((uVar1 & 4) == 0) {
      if (((uVar1 & 8) != 0) && (*param_1 != 0)) {
        iVar2 = iVar2 + (*param_1 - param_1[5]);
      }
    }
    else {
      iVar3 = 0;
      if (param_1[0xd] != 0) {
        iVar3 = param_1[0x10];
      }
      iVar2 = iVar2 - param_1[1];
      if (param_1[0xd] != 0) {
        iVar2 = iVar2 - iVar3;
      }
    }
  }
  return iVar2;
}


// 0x02082140  newlib_fwalk_reent

uint newlib_fwalk_reent(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  newlib_sfp_lock_acquire();
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = piVar5[1];
      iVar2 = piVar5[2];
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if ((*(short *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) != -1)) {
            uVar1 = (*param_2)(param_1,iVar2);
            uVar6 = uVar6 | uVar1;
          }
          iVar2 = iVar2 + 0x60;
        } while (iVar4 != iVar3);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  newlib_sfp_lock_release();
  return uVar6;
}


// 0x020821cc  newlib_fwalk

uint newlib_fwalk(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  newlib_sfp_lock_acquire();
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = piVar5[1];
      iVar2 = piVar5[2];
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if ((*(short *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) != -1)) {
            uVar1 = (*param_2)(iVar2);
            uVar6 = uVar6 | uVar1;
          }
          iVar2 = iVar2 + 0x60;
        } while (iVar4 != iVar3);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  newlib_sfp_lock_release();
  return uVar6;
}


// 0x0208225c  newlib_fwrite_r

int newlib_fwrite_r(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar2 = param_3 * param_4;
  puStack_2c = &local_20;
  uStack_28 = 1;
  local_24 = iVar2;
  local_20 = param_2;
  local_1c = iVar2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    newlib_sinit();
  }
  iVar1 = newlib_sfvwrite_r(param_1,param_5,&puStack_2c);
  if (iVar1 != 0) {
    param_4 = compiler_udivsi3(iVar2 - local_24,param_3);
  }
  return param_4;
}


// 0x020822e0  newlib_fwrite

void newlib_fwrite(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  newlib_fwrite_r(&DAT_0208f3a0,param_1,param_2,param_3,param_4);
  return;
}


// 0x020823f8  newlib_smakebuf

void newlib_smakebuf(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_5c [8];
  uint local_54;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 2) != 0) {
    param_1[6] = 1;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
    return;
  }
  if (-1 < param_1[4]) {
    iVar2 = newlib_reentrant_device_seek(&DAT_0208f3a0,param_1[4],auStack_5c);
    if (-1 < iVar2) {
      bVar4 = (local_54 & 0xf000) == 0x2000;
      if (((local_54 & 0xf000) == 0x8000) && ((undefined1 *)param_1[0xb] == &LAB_02083538)) {
        iVar2 = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        param_1[0x14] = 0x400;
      }
      else {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x800;
        iVar2 = 0x400;
      }
      goto LAB_02082478;
    }
    uVar1 = *(ushort *)(param_1 + 3);
  }
  if ((uVar1 & 0x80) == 0) {
    iVar2 = 0x400;
  }
  else {
    iVar2 = 0x40;
  }
  bVar4 = false;
  *(ushort *)(param_1 + 3) = uVar1 | 0x800;
LAB_02082478:
  iVar3 = newlib_malloc_r(&DAT_0208f3a0,iVar2);
  if (iVar3 == 0) {
    param_1[6] = 1;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
  }
  else {
    DAT_0208f3dc = newlib_cleanup_r;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x80;
    param_1[5] = iVar3;
    param_1[6] = iVar2;
    *param_1 = iVar3;
    if ((bVar4) && (iVar2 = stdio_terminal_check_returns_zero(param_1[4]), iVar2 != 0)) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
    }
  }
  return;
}


// 0x02082590  newlib_memalign_r

int newlib_memalign_r(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 9) {
    iVar1 = newlib_malloc_r();
  }
  else {
    uVar4 = param_3 + 0xb;
    if (param_2 < 0x10) {
      param_2 = 0x10;
    }
    if (uVar4 < 0x17) {
      uVar6 = 0x10;
      uVar4 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffff8;
      uVar4 = uVar4 >> 0x1f;
    }
    if (uVar6 < param_3) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      iVar2 = newlib_malloc_r(param_1,param_2 + uVar6 + 0x10);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        newlib_malloc_lock_return_stub(param_1);
        compiler_aeabi_uidivmod(iVar2,param_2);
        iVar1 = iVar2 + -8;
        if (extraout_r1 != 0) {
          iVar5 = ((iVar2 + param_2) - 1 & -param_2) - 8;
          uVar4 = iVar5 - iVar1;
          if ((int)uVar4 < 0x10) {
            uVar4 = (iVar5 + param_2) - iVar1;
            iVar5 = iVar5 + param_2;
          }
          iVar1 = iVar5;
          uVar3 = (*(uint *)(iVar2 + -4) & 0xfffffffc) - uVar4;
          *(uint *)(iVar1 + 4) = uVar3 | 1;
          iVar5 = iVar1 + uVar3;
          *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 1;
          *(uint *)(iVar2 + -4) = uVar4 | *(uint *)(iVar2 + -4) & 1;
          newlib_free_r(param_1,iVar2);
        }
        uVar4 = (*(uint *)(iVar1 + 4) & 0xfffffffc) - uVar6;
        if (0xf < (int)uVar4) {
          *(uint *)(uVar6 + iVar1 + 4) = uVar4 | 1;
          *(uint *)(iVar1 + 4) = uVar6 | *(uint *)(iVar1 + 4) & 1;
          newlib_free_r(param_1,uVar6 + iVar1 + 8);
        }
        newlib_malloc_unlock_return_stub(param_1);
        iVar1 = iVar1 + 8;
      }
    }
    else {
      iVar1 = 0;
      *param_1 = 0xc;
    }
  }
  return iVar1;
}


// 0x0208274c  newlib_malloc_r

/* WARNING: Type propagation algorithm not settling */

int * newlib_malloc_r(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  uVar8 = param_2 + 0xb;
  if (uVar8 < 0x17) {
    uVar14 = 0x10;
    uVar8 = 0;
  }
  else {
    uVar14 = uVar8 & 0xfffffff8;
    uVar8 = uVar8 >> 0x1f;
  }
  if (uVar14 < param_2) {
    uVar8 = 1;
  }
  if (uVar8 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  newlib_malloc_lock_return_stub(param_1);
  puVar15 = DAT_0208f7c0;
  if (uVar14 < 0x1f8) {
    uVar8 = uVar14 >> 3;
    puVar12 = (undefined *)(&DAT_0208f7bc)[uVar8 * 2];
    if ((&DAT_0208f7b0 + uVar8 * 8 != puVar12) ||
       (puVar11 = puVar12 + 8, puVar12 = *(undefined **)(puVar12 + 0x14), puVar11 != puVar12)) {
      uVar14 = *(uint *)(puVar12 + 4);
      uVar8 = *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4);
      iVar1 = *(int *)(puVar12 + 0xc);
      iVar4 = *(int *)(puVar12 + 8);
      *(int *)(iVar1 + 8) = iVar4;
      *(int *)(iVar4 + 0xc) = iVar1;
      *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4) = uVar8 | 1;
      newlib_malloc_unlock_return_stub(param_1);
      return (int *)(puVar12 + 8);
    }
    uVar8 = uVar8 + 2;
  }
  else {
    uVar8 = uVar14 >> 9;
    if (uVar8 == 0) {
      uVar8 = uVar14 >> 3;
      iVar1 = uVar8 << 3;
    }
    else if (uVar8 < 5) {
      uVar8 = (uVar14 >> 6) + 0x38;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x15) {
      uVar8 = uVar8 + 0x5b;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x55) {
      uVar8 = (uVar14 >> 0xc) + 0x6e;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x155) {
      uVar8 = (uVar14 >> 0xf) + 0x77;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x555) {
      uVar8 = (uVar14 >> 0x12) + 0x7c;
      iVar1 = uVar8 * 8;
    }
    else {
      uVar8 = 0x7e;
      iVar1 = 0x3f0;
    }
    for (puVar12 = *(undefined **)((int)&DAT_0208f7bc + iVar1); &DAT_0208f7b0 + iVar1 != puVar12;
        puVar12 = *(undefined **)(puVar12 + 0xc)) {
      uVar2 = *(uint *)(puVar12 + 4) & 0xfffffffc;
      if (0xf < (int)(uVar2 - uVar14)) {
        uVar8 = uVar8 - 1;
        break;
      }
      if (-1 < (int)(uVar2 - uVar14)) {
        iVar1 = *(int *)(puVar12 + 0xc);
        iVar4 = *(int *)(puVar12 + 8);
        *(uint *)(puVar12 + uVar2 + 4) = *(uint *)(puVar12 + uVar2 + 4) | 1;
        *(int *)(iVar1 + 8) = iVar4;
        *(int *)(iVar4 + 0xc) = iVar1;
        newlib_malloc_unlock_return_stub(param_1);
        return (int *)(puVar12 + 8);
      }
    }
    uVar8 = uVar8 + 1;
  }
  uVar2 = DAT_0208f7b4;
  if ((undefined **)DAT_0208f7c0 != &DAT_0208f7b8) {
    uVar9 = DAT_0208f7c0[1];
    uVar7 = uVar9 & 0xfffffffc;
    uVar2 = uVar7 - uVar14;
    if (0xf < (int)uVar2) {
      iVar1 = (int)DAT_0208f7c0 + uVar14;
      *(uint *)(iVar1 + uVar2) = uVar2;
      DAT_0208f7c0[1] = uVar14 | 1;
      DAT_0208f7c0 = (undefined4 *)iVar1;
      DAT_0208f7c4 = (undefined4 *)iVar1;
      *(uint *)(iVar1 + 4) = uVar2 | 1;
      *(undefined ***)(iVar1 + 8) = &DAT_0208f7b8;
      *(undefined ***)(iVar1 + 0xc) = &DAT_0208f7b8;
      newlib_malloc_unlock_return_stub(param_1);
      return puVar15 + 2;
    }
    DAT_0208f7c4 = &DAT_0208f7b8;
    DAT_0208f7c0 = &DAT_0208f7b8;
    if (-1 < (int)uVar2) {
      *(uint *)((int)puVar15 + uVar7 + 4) = *(uint *)((int)puVar15 + uVar7 + 4) | 1;
      newlib_malloc_unlock_return_stub(param_1);
      return puVar15 + 2;
    }
    if (uVar7 < 0x200) {
      uVar2 = DAT_0208f7b4 | 1 << (uVar9 >> 5 & 0xff);
      uVar9 = uVar9 & 0xfffffff8;
      iVar1 = *(int *)((int)&DAT_0208f7b8 + uVar9);
      puVar15[3] = &DAT_0208f7b0 + uVar9;
      puVar15[2] = iVar1;
      DAT_0208f7b4 = uVar2;
      *(undefined4 **)(iVar1 + 0xc) = puVar15;
      *(undefined4 **)((int)&DAT_0208f7b8 + uVar9) = puVar15;
    }
    else {
      uVar2 = uVar9 >> 9;
      if (uVar2 == 0) {
        uVar9 = uVar9 >> 3;
        iVar1 = uVar9 << 3;
      }
      else if (uVar2 < 5) {
        uVar9 = (uVar9 >> 6) + 0x38;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x15) {
        uVar9 = uVar2 + 0x5b;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x55) {
        uVar9 = (uVar9 >> 0xc) + 0x6e;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x155) {
        uVar9 = (uVar9 >> 0xf) + 0x77;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x555) {
        uVar9 = (uVar9 >> 0x12) + 0x7c;
        iVar1 = uVar9 * 8;
      }
      else {
        uVar9 = 0x7e;
        iVar1 = 0x3f0;
      }
      puVar11 = &DAT_0208f7b0 + iVar1;
      puVar12 = *(undefined **)((int)&DAT_0208f7b8 + iVar1);
      if (puVar11 == puVar12) {
        DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar9 >> 2 & 0xff);
      }
      else {
        do {
          if ((*(uint *)(puVar12 + 4) & 0xfffffffc) <= uVar7) break;
          puVar12 = *(undefined **)(puVar12 + 8);
        } while (puVar11 != puVar12);
        puVar11 = *(undefined **)(puVar12 + 0xc);
      }
      puVar15[3] = puVar11;
      puVar15[2] = puVar12;
      *(undefined4 **)(puVar12 + 0xc) = puVar15;
      *(undefined4 **)(puVar11 + 8) = puVar15;
      uVar2 = DAT_0208f7b4;
    }
  }
  puVar12 = DAT_0208f7b8;
  uVar9 = uVar8 + 3;
  if (-1 < (int)uVar8) {
    uVar9 = uVar8;
  }
  uVar9 = 1 << ((int)uVar9 >> 2 & 0xffU);
  if (uVar9 <= uVar2) {
    if ((uVar9 & uVar2) == 0) {
      uVar8 = uVar8 & 0xfffffffc;
      do {
        uVar9 = uVar9 << 1;
        uVar8 = uVar8 + 4;
      } while ((uVar2 & uVar9) == 0);
    }
    do {
      puVar15 = (undefined4 *)(&DAT_0208f7b0 + uVar8 * 8);
      puVar5 = puVar15;
      uVar7 = uVar8;
      while( true ) {
        for (puVar13 = (undefined4 *)puVar5[3]; puVar5 != puVar13;
            puVar13 = (undefined4 *)puVar13[3]) {
          uVar10 = puVar13[1] & 0xfffffffc;
          uVar16 = uVar10 - uVar14;
          if (0xf < (int)uVar16) {
            puVar12 = (undefined *)((int)puVar13 + uVar14);
            iVar1 = puVar13[3];
            puVar13[1] = uVar14 | 1;
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            DAT_0208f7c0 = (undefined4 *)puVar12;
            DAT_0208f7c4 = (undefined4 *)puVar12;
            *(uint *)(puVar12 + uVar16) = uVar16;
            *(uint *)(puVar12 + 4) = uVar16 | 1;
            *(undefined ***)(puVar12 + 8) = &DAT_0208f7b8;
            *(undefined ***)(puVar12 + 0xc) = &DAT_0208f7b8;
            newlib_malloc_unlock_return_stub(param_1);
            return puVar13 + 2;
          }
          if (-1 < (int)uVar16) {
            uVar8 = *(uint *)((int)puVar13 + uVar10 + 4);
            iVar1 = puVar13[3];
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            *(uint *)((int)puVar13 + uVar10 + 4) = uVar8 | 1;
            newlib_malloc_unlock_return_stub(param_1);
            return puVar13 + 2;
          }
        }
        uVar7 = uVar7 + 1;
        if ((uVar7 & 3) == 0) break;
        puVar5 = puVar5 + 2;
      }
      do {
        uVar10 = uVar8 & 3;
        puVar5 = puVar15 + -2;
        uVar8 = uVar8 - 1;
        if (uVar10 == 0) {
          uVar2 = uVar2 & ~uVar9;
          DAT_0208f7b4 = uVar2;
          break;
        }
        puVar13 = (undefined4 *)*puVar15;
        puVar15 = puVar5;
      } while (puVar13 == puVar5);
      uVar9 = uVar9 * 2;
      if ((uVar2 < uVar9) || (uVar8 = uVar7, uVar9 == 0)) break;
      for (; (uVar9 & uVar2) == 0; uVar9 = uVar9 << 1) {
        uVar8 = uVar8 + 4;
      }
    } while( true );
  }
  uVar2 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  uVar8 = uVar2 - uVar14;
  puVar11 = DAT_0208f7b8;
  if (uVar14 <= uVar2 && 0xf < (int)uVar8) goto LAB_02082bdc;
  uVar8 = uVar14 + DAT_020b4ca8 + 0x10;
  if (DAT_0208fbbc != (undefined *)0xffffffff) {
    uVar8 = uVar8 + 0xfff & 0xfffff000;
  }
  puVar3 = (undefined *)newlib_reentrant_adjust_heap_break(param_1,uVar8);
  puVar11 = DAT_0208f7b8;
  if (puVar3 != (undefined *)0xffffffff) {
    puVar6 = puVar12 + uVar2;
    if (puVar3 < puVar6) {
      if (puVar12 != &DAT_0208f7b0) goto LAB_02082ba4;
LAB_02082cbc:
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      puVar11 = puVar3;
      if (DAT_0208fbbc != (undefined *)0xffffffff) {
        DAT_020b4cb4 = puVar3 + ((int)DAT_020b4cb4 - (int)puVar6);
        puVar11 = DAT_0208fbbc;
      }
      DAT_0208fbbc = puVar11;
      if (((uint)puVar3 & 7) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 8 - ((uint)puVar3 & 7);
        puVar3 = puVar3 + iVar1;
      }
      iVar1 = iVar1 + (0x1000 - ((uint)(puVar3 + uVar8) & 0xfff));
      iVar4 = newlib_reentrant_adjust_heap_break(param_1,iVar1);
      if (iVar4 == -1) {
        iVar1 = 0;
        uVar8 = 1;
      }
      else {
        uVar8 = (iVar4 - (int)puVar3) + iVar1 | 1;
      }
      DAT_020b4cb4 = DAT_020b4cb4 + iVar1;
      *(uint *)(puVar3 + 4) = uVar8;
      puVar11 = puVar3;
      DAT_0208f7b8 = puVar3;
      if (puVar12 != &DAT_0208f7b0) {
        if (uVar2 < 0x10) {
          *(undefined4 *)(puVar3 + 4) = 1;
          goto LAB_02082ba4;
        }
        uVar8 = uVar2 - 0xc & 0xfffffff8;
        *(undefined4 *)(puVar12 + uVar8 + 8) = 5;
        *(undefined4 *)(puVar12 + uVar8 + 4) = 5;
        *(uint *)(puVar12 + 4) = uVar8 | *(uint *)(puVar12 + 4) & 1;
        if (0xf < uVar8) {
          newlib_free_r(param_1,puVar12 + 8);
          puVar11 = DAT_0208f7b8;
        }
      }
    }
    else {
      if ((puVar6 != puVar3) || (((uint)puVar3 & 0xfff) != 0)) goto LAB_02082cbc;
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      *(uint *)(DAT_0208f7b8 + 4) = uVar8 + uVar2 | 1;
    }
    if (DAT_020b4cac < DAT_020b4cb4) {
      DAT_020b4cac = DAT_020b4cb4;
    }
    if (DAT_020b4cb0 < DAT_020b4cb4) {
      DAT_020b4cb0 = DAT_020b4cb4;
    }
  }
LAB_02082ba4:
  uVar8 = (*(uint *)(puVar11 + 4) & 0xfffffffc) - uVar14;
  if ((*(uint *)(puVar11 + 4) & 0xfffffffc) < uVar14 || (int)uVar8 < 0x10) {
    newlib_malloc_unlock_return_stub(param_1);
    return (int *)0x0;
  }
LAB_02082bdc:
  DAT_0208f7b8 = puVar11 + uVar14;
  *(uint *)(puVar11 + 4) = uVar14 | 1;
  *(uint *)(DAT_0208f7b8 + 4) = uVar8 | 1;
  newlib_malloc_unlock_return_stub(param_1);
  return (int *)(puVar11 + 8);
}


// 0x02082ec0  newlib_memcpy

void newlib_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_3 = param_3 - 0x10;
      param_1[3] = param_2[3];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(uVar1 + (int)param_1) = *(undefined1 *)param_2;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (uVar1 != param_3);
  }
  return;
}


// 0x02082f5c  newlib_memmove

undefined4 * newlib_memmove(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar3)) {
    if (param_3 != 0) {
      puVar1 = (undefined1 *)((int)param_1 + param_3);
      puVar4 = puVar1 + -param_3;
      do {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        puVar1 = puVar1 + -1;
        *puVar1 = *(undefined1 *)puVar3;
      } while (puVar4 != puVar1);
    }
  }
  else {
    puVar3 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        param_3 = param_3 - 0x10;
        puVar3[3] = param_2[3];
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar2 + (int)puVar3) = *(undefined1 *)param_2;
        uVar2 = uVar2 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (uVar2 != param_3);
    }
  }
  return param_1;
}


// 0x02083058  newlib_memset

void newlib_memset(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 < 4) || (((uint)param_1 & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (param_3 < 0x10) goto LAB_020830d0;
    do {
      param_3 = param_3 - 0x10;
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
LAB_020830d0:
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(uVar1 + (int)param_1) = param_2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}


// 0x02083144  newlib_wrapup_reent

void newlib_wrapup_reent(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0208f3a0;
  }
  for (piVar4 = (int *)param_1[0x52]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    iVar3 = piVar4[1];
    if (-1 < iVar3 + -1) {
      puVar2 = piVar4 + iVar3 + 2;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + -1;
        (*(code *)*puVar2)();
      } while (iVar1 != iVar3);
    }
  }
  if ((code *)param_1[0xf] != (code *)0x0) {
    (*(code *)param_1[0xf])(param_1);
  }
  return;
}


// 0x020831c0  newlib_cleanup_glue

void newlib_cleanup_glue(undefined4 param_1,int *param_2)

{
  if (*param_2 != 0) {
    newlib_cleanup_glue();
  }
  newlib_free_r(param_1,param_2);
  return;
}


// 0x02083320  newlib_srefill_r

uint newlib_srefill_r(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  newlib_sinit(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_2 + 3);
  uVar3 = uVar2 & 0x20;
  param_2[1] = 0;
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x10) == 0) {
        *param_1 = 9;
        *(ushort *)(param_2 + 3) = uVar2 | 0x40;
        return 0xffffffff;
      }
      if ((uVar2 & 8) != 0) {
        iVar1 = newlib_fflush(param_2);
        if (iVar1 != 0) goto LAB_0208345c;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
        uVar2 = *(ushort *)(param_2 + 3);
        param_2[7] = uVar3;
        param_2[2] = uVar3;
      }
      *(ushort *)(param_2 + 3) = uVar2 | 4;
    }
    else if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        newlib_free_r(&DAT_0208f3a0);
      }
      param_2[0xd] = uVar3;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return uVar3;
      }
    }
    if (param_2[5] == 0) {
      newlib_smakebuf(param_2);
    }
    if ((*(ushort *)(param_2 + 3) & 3) != 0) {
      newlib_fwalk(&DAT_0208f3a0,&LAB_020832e8);
    }
    *param_2 = param_2[5];
    iVar1 = (*(code *)param_2[9])(param_2[8]);
    uVar2 = *(ushort *)(param_2 + 3);
    param_2[1] = iVar1;
    *(ushort *)(param_2 + 3) = uVar2 & 0xdfff;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        *(ushort *)(param_2 + 3) = uVar2 & 0xdfff | 0x20;
        uVar3 = 0xffffffff;
      }
      else {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        param_2[1] = 0;
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
LAB_0208345c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// 0x02083584  newlib_swrite

void newlib_swrite(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xc);
  if ((uVar1 & 0x100) != 0) {
    newlib_reentrant_device_read(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x10),0,2);
    uVar1 = *(ushort *)(param_1 + 0xc);
  }
  *(ushort *)(param_1 + 0xc) = uVar1 & 0xefff;
  newlib_reentrant_device_write(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  return;
}


// 0x02083638  newlib_strcasecmp

int newlib_strcasecmp(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    uVar2 = (uint)*param_2;
  }
  else {
    do {
      uVar2 = (uint)*param_2;
      uVar4 = uVar1;
      if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
        uVar4 = uVar1 + 0x20;
      }
      uVar3 = uVar2;
      if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
        uVar3 = uVar2 + 0x20;
      }
      param_2 = param_2 + 1;
      if (uVar4 != uVar3) goto LAB_02083694;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    uVar2 = (uint)*param_2;
  }
LAB_02083694:
  if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
    uVar1 = uVar1 + 0x20;
  }
  if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  return uVar1 - uVar2;
}


// 0x020836d4  newlib_strchr

uint * newlib_strchr(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = param_2 | uVar4 << 8;
    } while (iVar3 != 4);
    uVar2 = *param_1;
    if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) == 0) {
      for (uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4); uVar2 == 0;
          uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4)) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
        if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) != 0) break;
      }
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        param_1 = (uint *)0x0;
      }
      return param_1;
    }
    if (param_2 == bVar1) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
  }
  return param_1;
}


// 0x020837ec  newlib_strcmp

int newlib_strcmp(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (uVar2 = *param_1, uVar2 == *param_2)) {
    uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    while( true ) {
      if (uVar2 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      if (uVar2 != *param_2) break;
      uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) {
      return -(uint)(byte)*param_2;
    }
    if ((byte)*param_2 != uVar2) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
    param_2 = (uint *)((int)param_2 + 1);
  }
  return uVar2 - (byte)*param_2;
}


// 0x020838bc  newlib_strcpy

void newlib_strcpy(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    uVar2 = *param_2;
    uVar1 = uVar2 + 0xfefefeff & ~uVar2;
    while ((uVar1 & 0x80808080) == 0) {
      *param_1 = uVar2;
      param_2 = param_2 + 1;
      uVar2 = *param_2;
      param_1 = param_1 + 1;
      uVar1 = uVar2 + 0xfefefeff & ~uVar2;
    }
  }
  do {
    uVar2 = *param_2;
    *(char *)param_1 = (char)uVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  } while ((char)uVar2 != '\0');
  return;
}


// 0x0208395c  newlib_strlcat

int newlib_strlcat(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_3 == 0) || (*param_1 == '\0')) {
    iVar3 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == param_1 + param_3) break;
    } while (*pcVar4 != '\0');
    iVar3 = (int)pcVar4 - (int)param_1;
    param_1 = pcVar4;
  }
  param_3 = param_3 - iVar3;
  if (param_3 == 0) {
    iVar1 = newlib_strlen(param_2);
  }
  else {
    cVar2 = *param_2;
    pcVar4 = param_2;
    pcVar5 = param_1;
    if (cVar2 == '\0') {
      iVar1 = 0;
    }
    else {
      do {
        param_1 = pcVar5;
        if (param_3 != 1) {
          param_1 = pcVar5 + 1;
          *pcVar5 = cVar2;
        }
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
        if (param_3 != 1) {
          param_3 = param_3 + -1;
        }
        pcVar5 = param_1;
      } while (cVar2 != '\0');
      iVar1 = (int)pcVar4 - (int)param_2;
    }
    *param_1 = '\0';
  }
  return iVar1 + iVar3;
}


// 0x02083a04  newlib_strlcpy

char * newlib_strlcpy(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      pcVar2 = pcVar3;
      pcVar4 = param_1;
      if (param_3 == 0) goto LAB_02083a40;
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar4 = param_1 + 1;
      *param_1 = cVar1;
      param_1 = pcVar4;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
    if (param_3 != 0) goto LAB_02083a54;
LAB_02083a40:
    *pcVar4 = '\0';
    pcVar3 = pcVar2;
  }
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
LAB_02083a54:
  return pcVar2 + (-1 - (int)param_2);
}


// 0x02083a6c  newlib_strlen

int newlib_strlen(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar3 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar3 == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefeff & 0x80808080 & ~*puVar2;
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (uint *)((int)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  return (int)puVar2 - (int)param_1;
}


// 0x02083afc  newlib_strncasecmp

int newlib_strncasecmp(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar5 = (uint)*param_1;
      uVar4 = (uint)*param_2;
      uVar2 = uVar5;
      if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
        uVar2 = uVar5 + 0x20;
      }
      uVar3 = uVar4;
      if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
        uVar3 = uVar4 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((((uVar2 != uVar3) || (param_3 == 1)) || (uVar5 == 0)) || (uVar4 == 0)) goto LAB_02083b74;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = (uint)*param_1;
    uVar4 = (uint)*param_2;
LAB_02083b74:
    if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
      uVar5 = uVar5 + 0x20;
    }
    if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
      uVar4 = uVar4 + 0x20;
    }
    iVar1 = uVar5 - uVar4;
  }
  return iVar1;
}


// 0x02083bb4  newlib_strncat

void newlib_strncat(uint *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  if (((uint)param_1 & 3) == 0) {
    uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar2 == 0) {
      param_1 = param_1 + 1;
      uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    }
  }
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    param_1 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    param_3 = param_3 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *(char *)param_1 = cVar1;
    if (cVar1 == '\0') break;
    if (param_3 == 0) {
      *(char *)((int)param_1 + 1) = '\0';
    }
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}


// 0x02083c80  newlib_strncmp

int newlib_strncmp(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar1 = *param_1;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    }
  }
  if (param_3 != 0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
    if (uVar1 != uVar2) goto LAB_02083db4;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (param_3 == 1) break;
      uVar1 = (uint)*(byte *)param_2;
      uVar2 = (uint)*(byte *)param_1;
      if (uVar1 != uVar2) goto LAB_02083db4;
      bVar3 = param_3 == 2;
      param_3 = param_3 - 1;
      if (bVar3) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)*param_2;
LAB_02083db4:
  return uVar2 - uVar1;
}


// 0x02083dbc  newlib_strncpy

uint * newlib_strncpy(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar7 = param_1;
  if ((3 < param_3 && (((uint)param_2 | (uint)param_1) & 3) == 0) && (3 < param_3)) {
    uVar4 = *param_2;
    puVar3 = param_1;
    while (puVar7 = puVar3, (uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
      param_3 = param_3 - 4;
      puVar7 = puVar3 + 1;
      *puVar3 = uVar4;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      puVar3 = puVar7;
      uVar4 = *param_2;
    }
  }
  if (param_3 != 0) {
    uVar4 = *param_2;
    iVar5 = param_3 - 1;
    pcVar8 = (char *)((int)puVar7 + 1);
    *(char *)puVar7 = (char)uVar4;
    if ((char)uVar4 != '\0') {
      pcVar2 = (char *)((int)puVar7 + 2);
      do {
        pcVar8 = pcVar2;
        bVar9 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar9) {
          return param_1;
        }
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        pcVar8[-1] = cVar1;
        pcVar2 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        pcVar8[iVar6] = '\0';
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return param_1;
}


// 0x02083f18  newlib_strpbrk

char * newlib_strpbrk(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == cVar2) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  return (char *)0x0;
}


// 0x02083f68  newlib_strrchr

int newlib_strrchr(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = newlib_strchr();
  }
  else {
    iVar1 = 0;
    while (iVar2 = newlib_strchr(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x0208408c  newlib_sflags

undefined4 newlib_sflags(undefined4 *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar4 = 4;
    uVar2 = 0;
  }
  else if (cVar1 == 'w') {
    uVar4 = 8;
    uVar3 = 1;
    uVar2 = 0x600;
  }
  else {
    if (cVar1 != 'a') {
      *param_1 = 0x16;
      return 0;
    }
    uVar4 = 0x108;
    uVar3 = 1;
    uVar2 = 0x208;
  }
  if ((param_2[1] == '\0') || ((param_2[1] != '+' && (param_2[2] != '+')))) {
    *param_3 = uVar3 | uVar2;
  }
  else {
    uVar4 = 0x10;
    *param_3 = uVar2 | 2;
  }
  return uVar4;
}


// 0x02084130  newlib_sfvwrite_r

undefined4 newlib_sfvwrite_r(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  if (param_3[2] != 0) {
    uVar2 = (ushort)param_2[3];
    if (((uVar2 & 8) == 0) || (param_2[5] == 0)) {
      iVar7 = newlib_swsetup(param_2);
      if (iVar7 != 0) {
        *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
        *param_1 = 9;
        return 0xffffffff;
      }
      uVar2 = (ushort)param_2[3];
    }
    uVar4 = (uint)uVar2;
    bVar14 = (uVar2 & 2) != 0;
    if (bVar14) {
      param_1 = (undefined4 *)0x0;
    }
    puVar12 = (uint *)*param_3;
    puVar10 = param_1;
    if (bVar14) {
      do {
        while (param_1 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          param_1 = (undefined4 *)*puVar1;
        }
        iVar7 = (*(code *)param_2[10])(param_2[8],puVar10);
        param_1 = (undefined4 *)((int)param_1 - iVar7);
        if (iVar7 < 1) {
LAB_020844a8:
          *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
          return 0xffffffff;
        }
        iVar6 = param_3[2];
        param_3[2] = iVar6 - iVar7;
        puVar10 = (undefined4 *)((int)puVar10 + iVar7);
      } while (iVar6 - iVar7 != 0);
    }
    else {
      uVar5 = uVar4 & 1;
      uVar11 = uVar5;
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        uVar5 = uVar11;
        uVar4 = uVar11;
        do {
          while (bVar14 = false, uVar11 == 0) {
            uVar5 = *puVar12;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 2;
            uVar11 = *puVar1;
          }
          do {
            if (!bVar14) {
              iVar7 = newlib_memchr(uVar5,10,uVar11);
              uVar4 = uVar11;
              if (iVar7 != 0) {
                uVar4 = iVar7 - uVar5;
              }
              bVar14 = true;
              uVar4 = uVar4 + 1;
            }
            uVar13 = param_2[6];
            uVar3 = *param_2;
            uVar9 = uVar11;
            if (uVar4 <= uVar11) {
              uVar9 = uVar4;
            }
            uVar8 = uVar13 + param_2[2];
            if ((int)uVar8 < (int)uVar9 && param_2[5] < uVar3) {
              newlib_memmove(uVar3,uVar5,uVar8);
              *param_2 = *param_2 + uVar8;
              iVar7 = newlib_fflush(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
            }
            else if ((int)uVar9 < (int)uVar13) {
              newlib_memmove(uVar3,uVar5,uVar9);
              param_2[2] = param_2[2] - uVar9;
              *param_2 = *param_2 + uVar9;
              uVar8 = uVar9;
            }
            else {
              uVar8 = (*(code *)param_2[10])(param_2[8],uVar5,uVar13);
              if ((int)uVar8 < 1) goto LAB_020844a8;
            }
            uVar4 = uVar4 - uVar8;
            if (uVar4 == 0) {
              iVar7 = newlib_fflush(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
              bVar14 = false;
            }
            iVar7 = param_3[2];
            param_3[2] = iVar7 - uVar8;
            if (iVar7 - uVar8 == 0) {
              return 0;
            }
            uVar11 = uVar11 - uVar8;
            uVar5 = uVar5 + uVar8;
          } while (uVar11 != 0);
          uVar5 = *puVar12;
          uVar11 = puVar12[1];
          puVar12 = puVar12 + 2;
        } while( true );
      }
      while( true ) {
        while (uVar5 == 0) {
          uVar11 = *puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          uVar5 = *puVar1;
        }
        uVar9 = param_2[2];
        if ((uVar4 & 0x200) == 0) {
          uVar4 = *param_2;
          bVar15 = param_2[5] <= uVar4;
          bVar14 = uVar4 == param_2[5];
          if (bVar15 && !bVar14) {
            bVar15 = uVar9 <= uVar5;
            bVar14 = uVar5 == uVar9;
          }
          if (bVar15 && !bVar14) {
            newlib_memmove(uVar4,uVar11,uVar9);
            *param_2 = *param_2 + uVar9;
            iVar7 = newlib_fflush(param_2);
            if (iVar7 != 0) goto LAB_020844a8;
          }
          else if (uVar5 < param_2[6]) {
            newlib_memmove(uVar4,uVar11,uVar5);
            param_2[2] = param_2[2] - uVar5;
            *param_2 = *param_2 + uVar5;
            uVar9 = uVar5;
          }
          else {
            uVar9 = (*(code *)param_2[10])(param_2[8],uVar11);
            if ((int)uVar9 < 1) goto LAB_020844a8;
          }
        }
        else {
          uVar3 = uVar5;
          if ((uVar9 <= uVar5) && (uVar3 = uVar9, (uVar4 & 0x80) != 0)) {
            iVar7 = *param_2 - param_2[5];
            uVar4 = (int)(param_2[6] * 3) / 2;
            uVar9 = uVar5 + iVar7 + 1;
            if (uVar4 < uVar9) {
              uVar4 = uVar9;
            }
            uVar9 = newlib_realloc_r(&DAT_0208f3a0,param_2[5],uVar4);
            if (uVar9 == 0) {
              newlib_free_r(&DAT_0208f3a0,param_2[5]);
              goto LAB_020844a8;
            }
            *param_2 = uVar9 + iVar7;
            param_2[2] = uVar4 - iVar7;
            param_2[5] = uVar9;
            param_2[6] = uVar4;
            uVar3 = uVar5;
          }
          newlib_memmove(*param_2,uVar11,uVar3);
          param_2[2] = param_2[2] - uVar3;
          *param_2 = *param_2 + uVar3;
          uVar9 = uVar5;
        }
        iVar7 = param_3[2];
        param_3[2] = iVar7 - uVar9;
        if (iVar7 - uVar9 == 0) break;
        uVar5 = uVar5 - uVar9;
        uVar4 = (uint)(ushort)param_2[3];
        uVar11 = uVar11 + uVar9;
      }
    }
  }
  return 0;
}


// 0x020845c0  newlib_memchr

uint * newlib_memchr(uint *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  param_2 = param_2 & 0xff;
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar3 = param_2 + uVar3 * 0x100;
    } while (iVar2 != 4);
    do {
      param_3 = param_3 - 4;
      if (((*param_1 ^ uVar3) + 0xfefefeff & 0x80808080 & ~(*param_1 ^ uVar3)) != 0) {
        if (param_2 == (byte)*param_1) {
          return param_1;
        }
        if (param_2 == *(byte *)((int)param_1 + 1)) {
          return (uint *)((int)param_1 + 1);
        }
        if (param_2 == *(byte *)((int)param_1 + 2)) {
          return (uint *)((int)param_1 + 2);
        }
        if (param_2 == *(byte *)((int)param_1 + 3)) {
          return (uint *)((int)param_1 + 3);
        }
      }
      param_1 = param_1 + 1;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
LAB_02084610:
    param_1 = (uint *)0x0;
  }
  else {
    bVar1 = (byte)*param_1;
    while (param_2 != bVar1) {
      bVar4 = param_3 == 1;
      param_3 = param_3 - 1;
      if (bVar4) goto LAB_02084610;
      param_1 = (uint *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
    }
  }
  return param_1;
}


// 0x0208470c  newlib_realloc_r

int * newlib_realloc_r(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)newlib_malloc_r(param_1,param_3);
    return piVar2;
  }
  newlib_malloc_lock_return_stub();
  uVar3 = param_3 + 0xb;
  if (uVar3 < 0x17) {
    uVar8 = 0x10;
    uVar3 = 0;
  }
  else {
    uVar8 = uVar3 & 0xfffffff8;
    uVar3 = uVar3 >> 0x1f;
  }
  if (uVar8 < param_3) {
    uVar3 = 1;
  }
  piVar2 = param_2 + -2;
  if (uVar3 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  uVar3 = param_2[-1] & 0xfffffffc;
  if ((int)uVar3 < (int)uVar8) {
    iVar1 = (int)piVar2 + uVar3;
    if (iVar1 == DAT_0208f7b8) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)(uVar8 + 0x10) <= (int)(uVar3 + uVar9)) {
        DAT_0208f7b8 = (int)piVar2 + uVar8;
        *(uint *)(DAT_0208f7b8 + 4) = (uVar3 + uVar9) - uVar8 | 1;
        param_2[-1] = uVar8 | param_2[-1] & 1U;
        newlib_malloc_unlock_return_stub(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(iVar1 + 4) & 0xfffffffe) + iVar1 + 4) & 1) == 0) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)uVar8 <= (int)(uVar3 + uVar9)) {
        iVar5 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        uVar3 = uVar3 + uVar9;
        goto LAB_020848a4;
      }
    }
    else {
      uVar9 = 0;
      iVar1 = 0;
    }
    if ((param_2[-1] & 1U) == 0) {
      piVar6 = (int *)((int)piVar2 - *piVar2);
      uVar4 = piVar6[1] & 0xfffffffc;
      if (iVar1 != 0) {
        if (iVar1 == DAT_0208f7b8) {
          iVar1 = uVar9 + uVar3 + uVar4;
          if ((int)(uVar8 + 0x10) <= iVar1) {
            uVar3 = uVar3 - 4;
            iVar5 = piVar6[3];
            iVar7 = piVar6[2];
            *(int *)(iVar5 + 8) = iVar7;
            *(int *)(iVar7 + 0xc) = iVar5;
            piVar2 = piVar6 + 2;
            if (uVar3 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar3) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar3) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar3 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
            }
            else {
              newlib_memmove(piVar2,param_2,uVar3);
            }
            DAT_0208f7b8 = (int)piVar6 + uVar8;
            *(uint *)(DAT_0208f7b8 + 4) = iVar1 - uVar8 | 1;
            piVar6[1] = uVar8 | piVar6[1] & 1U;
            newlib_malloc_unlock_return_stub(param_1);
            return piVar2;
          }
        }
        else {
          uVar9 = uVar9 + uVar3 + uVar4;
          if ((int)uVar8 <= (int)uVar9) {
            iVar5 = *(int *)(iVar1 + 8);
            iVar1 = *(int *)(iVar1 + 0xc);
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            uVar4 = uVar3 - 4;
            iVar1 = piVar6[3];
            iVar5 = piVar6[2];
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            piVar2 = piVar6 + 2;
            uVar3 = uVar9;
            if (uVar4 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar4) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar4) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar4 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            else {
              newlib_memmove(piVar2,param_2,uVar4);
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            goto LAB_020848a4;
          }
        }
      }
      uVar4 = uVar3 + uVar4;
      if ((int)uVar8 <= (int)uVar4) {
        uVar9 = uVar3 - 4;
        iVar1 = piVar6[3];
        iVar5 = piVar6[2];
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        piVar2 = piVar6 + 2;
        uVar3 = uVar4;
        if (uVar9 < 0x25) {
          piVar10 = param_2;
          piVar11 = piVar2;
          if (0x13 < uVar9) {
            piVar6[2] = *param_2;
            piVar6[3] = param_2[1];
            piVar11 = piVar6 + 4;
            piVar10 = param_2 + 2;
            if (0x1b < uVar9) {
              piVar6[4] = param_2[2];
              piVar6[5] = param_2[3];
              piVar11 = piVar6 + 6;
              piVar10 = param_2 + 4;
              if (uVar9 == 0x24) {
                piVar6[6] = param_2[4];
                piVar11 = piVar6 + 8;
                piVar10 = param_2 + 6;
                piVar6[7] = param_2[5];
              }
            }
          }
          *piVar11 = *piVar10;
          piVar11[1] = piVar10[1];
          piVar11[2] = piVar10[2];
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        else {
          newlib_memmove(piVar2,param_2,uVar9);
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        goto LAB_020848a4;
      }
    }
    piVar6 = (int *)newlib_malloc_r(param_1,param_3);
    if (piVar6 != (int *)0x0) {
      if (piVar6 + -2 == (int *)((int)piVar2 + (param_2[-1] & 0xfffffffeU))) {
        uVar3 = uVar3 + (piVar6[-1] & 0xfffffffcU);
        goto LAB_020848a4;
      }
      uVar3 = uVar3 - 4;
      if (uVar3 < 0x25) {
        piVar2 = param_2;
        piVar10 = piVar6;
        if (0x13 < uVar3) {
          *piVar6 = *param_2;
          piVar6[1] = param_2[1];
          piVar10 = piVar6 + 2;
          piVar2 = param_2 + 2;
          if (0x1b < uVar3) {
            piVar6[2] = param_2[2];
            piVar6[3] = param_2[3];
            piVar2 = param_2 + 4;
            piVar10 = piVar6 + 4;
            if (uVar3 == 0x24) {
              piVar6[4] = param_2[4];
              piVar2 = param_2 + 6;
              piVar6[5] = param_2[5];
              piVar10 = piVar6 + 6;
            }
          }
        }
        *piVar10 = *piVar2;
        piVar10[1] = piVar2[1];
        piVar10[2] = piVar2[2];
      }
      else {
        newlib_memmove(piVar6,param_2,uVar3);
      }
      newlib_free_r(param_1,param_2);
    }
    newlib_malloc_unlock_return_stub(param_1);
  }
  else {
LAB_020848a4:
    uVar9 = uVar3 - uVar8;
    if (uVar9 < 0x10) {
      piVar2[1] = uVar3 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar3 + 4) = *(uint *)((int)piVar2 + uVar3 + 4) | 1;
    }
    else {
      piVar2[1] = uVar8 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar8 + 4) = uVar9 | 1;
      *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) | 1;
      newlib_free_r(param_1,(int)piVar2 + uVar8 + 8);
    }
    newlib_malloc_unlock_return_stub(param_1);
    piVar6 = param_2;
  }
  return piVar6;
}


// 0x02084d28  newlib_swsetup

undefined4 newlib_swsetup(int *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  newlib_sinit(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_1 + 3);
  uVar3 = (uint)uVar2;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar2 & 4) == 0) {
      iVar1 = param_1[5];
    }
    else {
      if ((int *)param_1[0xd] != (int *)0x0) {
        if ((int *)param_1[0xd] != param_1 + 0x11) {
          newlib_free_r(&DAT_0208f3a0);
          uVar2 = *(ushort *)(param_1 + 3);
        }
        param_1[0xd] = uVar3 & 8;
      }
      *(ushort *)(param_1 + 3) = uVar2 & 0xffdb;
      iVar1 = param_1[5];
      uVar2 = *(ushort *)(param_1 + 3);
      *param_1 = iVar1;
      param_1[1] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar2 | 8;
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  else {
    iVar1 = param_1[5];
  }
  if ((iVar1 == 0) && ((uVar3 & 0x280) != 0x200)) {
    newlib_smakebuf(param_1);
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = 0;
    if ((uVar3 & 2) == 0) {
      iVar1 = param_1[6];
    }
    param_1[2] = iVar1;
  }
  else {
    param_1[7] = -param_1[6];
    param_1[2] = 0;
  }
  return 0;
}


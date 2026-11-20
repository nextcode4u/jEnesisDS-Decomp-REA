/* ARM9 runtime support — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020805d8  arm9_divide_by_zero_return_stub

void FUN_020805d8(void)

{
  return;
}


// 0x02080c2c  compiler_muldf3_special_operands

ulonglong FUN_02080c2c(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar4 != in_r12) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
    {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar5 = param_2 & 0x80000000;
      do {
        iVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar2;
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar5;
      if (uVar4 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      iVar2 = param_3 >> 0x1f;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 - iVar2;
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = (param_2 & 0x7fffffff) != 0;
  uVar5 = param_4;
  iVar2 = param_3;
  if (param_1 != 0 || bVar1) {
    uVar5 = param_2;
    iVar2 = param_1;
  }
  uVar3 = uVar5;
  if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
      ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
     ((uVar4 != in_r12 ||
      (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}


// 0x02080e60  compiler_divdf3_special_operands

ulonglong FUN_02080e60(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  uVar3 = param_2;
  if (unaff_r4 != in_r12 || uVar2 != in_r12) {
    if (unaff_r4 == in_r12) {
      if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
         (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_02080c98:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_02080c48:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
          (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
        if (unaff_r4 == 0) {
          uVar3 = param_2 & 0x80000000;
          do {
            iVar1 = param_1 >> 0x1f;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 - iVar1;
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar3;
          if (uVar2 != 0) {
            return CONCAT44(param_2,param_1);
          }
        }
        do {
          iVar1 = param_3 >> 0x1f;
          param_3 = param_3 << 1;
          param_4 = param_4 * 2 - iVar1;
        } while ((param_4 & 0x100000) == 0);
        return CONCAT44(param_2,param_1);
      }
      if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_02080c98;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_02080c48;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


// 0x02082560  newlib_memalign_global_reent_wrapper

void FUN_02082560(undefined4 param_1,undefined4 param_2)

{
  FUN_02082590(&DAT_0208f3a0,param_1,param_2);
  return;
}


// 0x020826fc  newlib_free_global_reent_wrapper

void FUN_020826fc(undefined4 param_1)

{
  FUN_020818d4(&DAT_0208f3a0,param_1);
  return;
}


// 0x02082724  newlib_malloc_global_reent_wrapper

void FUN_02082724(undefined4 param_1)

{
  FUN_0208274c(&DAT_0208f3a0,param_1);
  return;
}


// 0x020830f0  newlib_malloc_lock_return_stub

void FUN_020830f0(void)

{
  return;
}


// 0x020830f4  newlib_malloc_unlock_return_stub

void FUN_020830f4(void)

{
  return;
}


// 0x02083ed0  bounded_string_length

int FUN_02083ed0(char *param_1,int param_2)

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


// 0x02083fb8  uppercase_string_in_place_using_ctype_table

void FUN_02083fb8(byte *param_1)

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


// 0x020850a0  stdio_terminal_check_returns_zero

undefined4 FUN_020850a0(void)

{
  return 0;
}


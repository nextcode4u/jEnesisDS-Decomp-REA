/* ARM9 interworking — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02085950  strlen_thumb_veneer

int strlen(uint *param_1)

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


// 0x02085954  strlen_arm_veneer

int strlen(uint *param_1)

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


// 0x02085958  strchr_thumb_veneer

uint * strchr(uint *param_1,uint param_2)

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


// 0x0208595c  strchr_arm_veneer

uint * strchr(uint *param_1,uint param_2)

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


// 0x02085960  strncmp_thumb_veneer

int strncmp(uint *param_1,uint *param_2,uint param_3)

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


// 0x02085964  strncmp_arm_veneer

int strncmp(uint *param_1,uint *param_2,uint param_3)

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


// 0x02085970  memset_thumb_veneer

void memset(undefined4 *param_1,undefined1 param_2,uint param_3)

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


// 0x02085974  memset_arm_veneer

void memset(undefined4 *param_1,undefined1 param_2,uint param_3)

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


// 0x02085980  __udivsi3_thumb_veneer

uint __udivsi3(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    __div0();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}


// 0x02085984  __udivsi3_arm_veneer

uint __udivsi3(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    __div0();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}


// 0x02085988  memcpy_thumb_veneer

void memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


// 0x0208598c  memcpy_arm_veneer

void memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


// 0x02085998  strncpy_thumb_veneer

uint * strncpy(uint *param_1,uint *param_2,uint param_3)

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


// 0x0208599c  strncpy_arm_veneer

uint * strncpy(uint *param_1,uint *param_2,uint param_3)

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


// 0x020859a0  strrchr_thumb_veneer

int strrchr(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = strchr();
  }
  else {
    iVar1 = 0;
    while (iVar2 = strchr(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x020859a4  strrchr_arm_veneer

int strrchr(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = strchr();
  }
  else {
    iVar1 = 0;
    while (iVar2 = strchr(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x020859a8  __aeabi_uidivmod_thumb_veneer

void __aeabi_uidivmod(void)

{
  __udivsi3();
  return;
}


// 0x020859ac  __aeabi_uidivmod_arm_veneer

void __aeabi_uidivmod(void)

{
  __udivsi3();
  return;
}


// 0x020859b8  strcasecmp_thumb_veneer

int strcasecmp(byte *param_1,byte *param_2)

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


// 0x020859bc  strcasecmp_arm_veneer

int strcasecmp(byte *param_1,byte *param_2)

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


// 0x020859c0  strncasecmp_thumb_veneer

int strncasecmp(byte *param_1,byte *param_2,int param_3)

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


// 0x020859c4  strncasecmp_arm_veneer

int strncasecmp(byte *param_1,byte *param_2,int param_3)

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


// 0x020859c8  strpbrk_thumb_veneer

char * strpbrk(char *param_1,char *param_2)

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


// 0x020859cc  strpbrk_arm_veneer

char * strpbrk(char *param_1,char *param_2)

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


// 0x020859d0  memmove_thumb_veneer

undefined4 * memmove(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


// 0x020859d4  memmove_arm_veneer

undefined4 * memmove(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


// 0x020859e0  __divsi3_thumb_veneer

uint __divsi3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    __div0();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// 0x020859e4  __divsi3_arm_veneer

uint __divsi3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    __div0();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// 0x020859e8  __aeabi_idivmod_thumb_veneer

void __aeabi_idivmod(void)

{
  __divsi3();
  return;
}


// 0x020859ec  __aeabi_idivmod_arm_veneer

void __aeabi_idivmod(void)

{
  __divsi3();
  return;
}


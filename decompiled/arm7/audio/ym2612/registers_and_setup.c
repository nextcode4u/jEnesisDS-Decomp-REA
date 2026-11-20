/* ARM7 registers and setup — grouped REA pseudocode.
 * Register writes, chip reset, and table and channel initialization.
 */

// 0x037f8e1c  write_ym2612_channel_or_operator_register

undefined4 write_ym2612_channel_or_operator_register(uint register_with_bank,uint register_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *operator_state;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar8 = register_with_bank & 3;
  if (uVar8 == 3) goto switchD_037f90e4_default;
  if (0xff < (int)register_with_bank) {
    uVar8 = uVar8 + 3;
  }
  uVar11 = (int)register_with_bank >> 2 & 3;
  uVar4 = register_with_bank & 0xf0;
  iVar6 = uVar8 * 0xd8;
  operator_state = &DAT_03807308 + uVar8 * 0x36 + uVar11 * 0xc;
  if (uVar4 == 0x60) {
    register_value = register_value & 0x1f;
    if (register_value != 0) {
      iVar6 = register_value << 1;
    }
    else {
      iVar6 = 0;
    }
    if (register_value != 0) {
      iVar6 = iVar6 + 0x20;
    }
    iVar3 = iVar6 + (uint)*(byte *)((int)operator_state + 0x15);
    operator_state[9] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    *(char *)((int)operator_state + 5) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x61) {
    if (uVar4 == 0x40) {
      *(short *)(operator_state + 6) = (short)((register_value & 0x7f) << 3);
      return 1;
    }
    if (uVar4 == 0x50) {
      if ((register_value & 0x1f) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (register_value & 0x1f) * 2 + 0x20;
      }
      uVar11 = 3 - ((int)register_value >> 6);
      uVar7 = uVar11 & 0xff;
      bVar12 = *(byte *)(operator_state + 5) != uVar7;
      *(char *)(operator_state + 5) = (char)uVar11;
      if (bVar12) {
        uVar7 = 0xffffffff;
      }
      *(char *)(operator_state + 1) = (char)uVar4;
      if (!bVar12) {
        uVar8 = (uint)*(byte *)(operator_state + 1) + (uint)*(byte *)((int)operator_state + 0x15);
        if (uVar8 < 0x5e) {
          uVar4 = (uint)(byte)(&DAT_03806b28)[uVar8];
          uVar11 = (uint)(byte)(&DAT_03806ba8)[uVar8];
        }
        else {
          uVar11 = 0x11;
        }
        if (uVar8 < 0x5e) {
          uVar4 = uVar4 << 0x18;
        }
        else {
          uVar4 = 0;
        }
        operator_state[8] = uVar4 | *(uint *)(&DAT_03806c28 + uVar11 * 4);
        return 1;
      }
      (&DAT_03807318)[uVar8 * 0x36] = uVar7;
      return 1;
    }
    if (uVar4 == 0x30) {
      uVar4 = register_value & 0xf;
      iVar6 = 0x30;
      if (uVar4 != 0) {
        iVar6 = uVar4 << 1;
      }
      if (uVar4 == 0) {
        iVar6 = 1;
      }
      *operator_state = &DAT_03806ed4 + (register_value & 0x70) * 8;
      (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
      operator_state[2] = iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  if (uVar4 == 0x80) {
    iVar6 = (register_value & 0xf) * 4 + 0x22;
    iVar3 = iVar6 + (uint)*(byte *)((int)operator_state + 0x15);
    uVar10 = *(undefined4 *)(&DAT_03806c74 + ((int)register_value >> 4) * 4);
    operator_state[0xb] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                  (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    operator_state[7] = uVar10;
    *(char *)((int)operator_state + 7) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x81) {
    if (uVar4 == 0x70) {
      register_value = register_value & 0x1f;
      if (register_value != 0) {
        iVar6 = register_value << 1;
      }
      else {
        iVar6 = 0;
      }
      if (register_value != 0) {
        iVar6 = iVar6 + 0x20;
      }
      iVar3 = iVar6 + (uint)*(byte *)((int)operator_state + 0x15);
      operator_state[10] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                   (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
      *(char *)((int)operator_state + 6) = (char)iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  bVar1 = (byte)register_value;
  if (uVar4 != 0xa0) {
    if (uVar4 == 0xb0) {
      if (uVar11 == 0) {
        uVar8 = (int)register_value >> 3 & 7;
        cVar5 = (char)uVar8;
        if (uVar8 != 0) {
          cVar5 = cVar5 + '\x06';
        }
        (&DAT_038073c8)[iVar6] = bVar1 & 7;
        (&DAT_038073c9)[iVar6] = cVar5;
        return 1;
      }
      if (uVar11 == 1) {
        iVar6 = (int)(register_value & 0xc0) >> 6;
        DAT_038072f4 = DAT_038072f4 & ~(3 << uVar8 * 2) | iVar6 << uVar8 * 2;
        if (*(int *)(&sound_channel_register_base + uVar8 * 0x10) < 0) {
          uVar4 = *(uint *)(&DAT_03806b18 + iVar6 * 4) | 0xa8000000 |
                  *(int *)(&DAT_03806b08 + iVar6 * 4) << 0x10;
          *(uint *)(&sound_channel_register_base + uVar8 * 0x10) = uVar4;
          *(uint *)(&sound_channel_register_base + (uVar8 + 6) * 0x10) = uVar4;
          return 1;
        }
        goto LAB_037f90d8;
      }
    }
    goto switchD_037f90e4_default;
  }
  switch(uVar11) {
  case 0:
    register_value = register_value + (DAT_03806ebb & 7) * 0x100;
    uVar4 = (&DAT_03807820)[register_value * 2];
    bVar2 = DAT_03806ebb >> 3;
    bVar1 = (&DAT_03806af8)[register_value >> 7];
    uVar10 = 1;
    (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
    (&DAT_038073d4)[iVar6] = bVar1 | bVar2 << 2;
    (&DAT_038073d8)[uVar8 * 0x36] = uVar4 >> (7 - bVar2 & 0xff);
    break;
  case 1:
    DAT_03806ebb = bVar1 & 0x3f;
    uVar10 = 0;
    break;
  case 2:
    if ((int)register_with_bank < 0x100) {
      register_value = register_value + (DAT_038072e4 & 7) * 0x100;
      uVar4 = (&DAT_03807820)[register_value * 2];
      bVar1 = DAT_038072e4 >> 3;
      (&DAT_038072e5)[uVar8] = (&DAT_03806af8)[register_value >> 7] | bVar1 << 2;
      *(uint *)(&DAT_038072e8 + uVar8 * 4) = register_value;
      (&DAT_038072d8)[uVar8] = uVar4 >> (7 - bVar1 & 0xff);
      DAT_038074c8 = 0xffffffff;
      return 1;
    }
LAB_037f90d8:
    uVar10 = 1;
    break;
  case 3:
    if ((int)register_with_bank < 0x100) {
      DAT_038072e4 = bVar1 & 0x3f;
      return 0;
    }
  default:
switchD_037f90e4_default:
    uVar10 = 0;
  }
  return uVar10;
}


// 0x037f9238  reset_ym2612_registers

void reset_ym2612_registers(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar4;
  
  puVar7 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar1 = &DAT_03807768;
  do {
    puVar1[-0xe4] = 0;
    iVar3 = 0;
    puVar5 = puVar7;
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      *(undefined1 *)((int)puVar5 + 0x17) = 0;
      *(undefined2 *)((int)puVar5 + 0x1a) = 0x3ff;
      puVar5 = puVar5 + 0xc;
    } while (iVar3 != 4);
    puVar7 = puVar7 + 0x36;
    puVar1 = puVar1 + 0x36;
  } while (puVar7 != &ym2612_dac_enable_bit);
  write_ym2612_channel_or_operator_register(0xb6,iVar4 + 0xbd);
  write_ym2612_channel_or_operator_register(0x1b6,0xc0);
  write_ym2612_channel_or_operator_register(0xb5,0xc0);
  write_ym2612_channel_or_operator_register(0x1b5,0xc0);
  write_ym2612_channel_or_operator_register(0xb4,0xc0);
  write_ym2612_channel_or_operator_register(0x1b4,0xc0);
  uVar6 = 0xb2;
  do {
    write_ym2612_channel_or_operator_register(uVar6,0);
    uVar2 = uVar6 | 0x100;
    uVar6 = uVar6 - 1;
    write_ym2612_channel_or_operator_register(uVar2,0);
  } while (uVar6 != 0x2f);
  write_ym2612_channel_or_operator_register(0x26,0);
  write_ym2612_channel_or_operator_register(0x25,0);
  write_ym2612_channel_or_operator_register(0x24,0);
  write_ym2612_channel_or_operator_register(0x23,0);
  write_ym2612_channel_or_operator_register(0x22,0);
  write_ym2612_channel_or_operator_register(0x21,0);
  write_ym2612_channel_or_operator_register(0x20,0);
  ym2612_dac_enable_bit = 0;
  return;
}


// 0x037f9394  apply_ym2612_bank1_writes

void apply_ym2612_bank1_writes(byte *write_pairs,uint byte_count)

{
  byte *write_cursor;
  byte *next_write;
  
  write_cursor = write_pairs;
  if (byte_count != 0) {
    do {
      next_write = write_cursor + 2;
      write_ym2612_channel_or_operator_register(*write_cursor | 0x100,write_cursor[1]);
      write_cursor = next_write;
    } while ((uint)((int)next_write - (int)write_pairs) < byte_count);
  }
  return;
}


// 0x037f93e8  initialize_ym2612_tables_and_channels

void initialize_ym2612_tables_and_channels(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_2c;
  
  iVar7 = 0;
  piVar9 = &DAT_03806e88;
  DAT_03806ea0 = param_3;
  do {
    piVar10 = piVar9 + 1;
    *piVar9 = iVar7;
    iVar7 = iVar7 + param_3;
    piVar9 = piVar10;
  } while (piVar10 != &DAT_03806ea0);
  memset(&DAT_03807308,0,0x978);
  DAT_03806ea8 = param_1;
  DAT_03806eac = param_2;
  if (param_2 == 0) {
    uVar12 = 0;
    DAT_03807300 = 0;
  }
  else {
    uVar12 = __floatsidf(param_1);
    uVar13 = __floatsidf(param_2);
    uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x40620000);
    uVar12 = __divdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40f00000);
    DAT_03807300 = __fixunsdfsi();
  }
  local_2c = 0;
  do {
    iVar7 = 0;
    piVar9 = (int *)(&DAT_038070d4 + local_2c * 0x80);
    piVar10 = (int *)(&DAT_03806ed4 + local_2c * 0x80);
    do {
      DAT_03806eb4 = (undefined4)((ulonglong)uVar12 >> 0x20);
      DAT_03806eb0 = (undefined4)uVar12;
      cVar1 = (&DAT_03806cb4)[iVar7 + local_2c * 0x20];
      uVar12 = __floatsidf((int)cVar1);
      iVar7 = iVar7 + 1;
      if (cVar1 < 0) {
        uVar12 = __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40700000);
      }
      uVar13 = __muldf3(0,0x40500000,DAT_03806eb0,DAT_03806eb4);
      __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                   (int)((ulonglong)uVar13 >> 0x20));
      iVar4 = __fixdfsi();
      *piVar10 = iVar4;
      *piVar9 = -iVar4;
      uVar12 = CONCAT44(DAT_03806eb4,DAT_03806eb0);
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 != 0x20);
    local_2c = local_2c + 1;
  } while (local_2c != 4);
  uVar12 = __muldf3(0,0x40a00000,DAT_03806eb0,DAT_03806eb4);
  iVar7 = 0;
  puVar2 = &DAT_03807820;
  do {
    uVar13 = __floatsidf(iVar7);
    __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
    uVar5 = __fixunsdfsi();
    iVar7 = iVar7 + 1;
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 0x1000);
  puVar11 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar2 = &DAT_03807768;
  do {
    puVar2[-0xe4] = 0;
    iVar7 = 0;
    puVar6 = puVar11;
    do {
      iVar4 = iVar7;
      iVar7 = iVar4 + 1;
      *(undefined1 *)((int)puVar6 + 0x17) = 0;
      *(undefined2 *)((int)puVar6 + 0x1a) = 0x3ff;
      puVar6 = puVar6 + 0xc;
    } while (iVar7 != 4);
    puVar11 = puVar11 + 0x36;
    puVar2 = puVar2 + 0x36;
  } while (puVar11 != &ym2612_dac_enable_bit);
  write_ym2612_channel_or_operator_register(0xb6,iVar4 + 0xbd);
  write_ym2612_channel_or_operator_register(0x1b6,0xc0);
  write_ym2612_channel_or_operator_register(0xb5,0xc0);
  write_ym2612_channel_or_operator_register(0x1b5,0xc0);
  write_ym2612_channel_or_operator_register(0xb4,0xc0);
  write_ym2612_channel_or_operator_register(0x1b4,0xc0);
  uVar8 = 0xb2;
  do {
    write_ym2612_channel_or_operator_register(uVar8,0);
    uVar3 = uVar8 | 0x100;
    uVar8 = uVar8 - 1;
    write_ym2612_channel_or_operator_register(uVar3,0);
  } while (uVar8 != 0x2f);
  write_ym2612_channel_or_operator_register(0x26,0);
  write_ym2612_channel_or_operator_register(0x25,0);
  write_ym2612_channel_or_operator_register(0x24,0);
  write_ym2612_channel_or_operator_register(0x23,0);
  write_ym2612_channel_or_operator_register(0x22,0);
  write_ym2612_channel_or_operator_register(0x21,0);
  write_ym2612_channel_or_operator_register(0x20,0);
  ym2612_dac_enable_bit = 0;
  return;
}


// 0x037f9afc  apply_ym2612_bank0_writes

void apply_ym2612_bank0_writes(byte *write_pairs,uint byte_count)

{
  int iVar1;
  byte register_address;
  byte register_value_byte;
  byte *write_cursor;
  uint uVar5;
  
  write_cursor = write_pairs;
  if (byte_count != 0) {
    do {
      register_address = *write_cursor;
      register_value_byte = write_cursor[1];
      uVar5 = (uint)register_value_byte;
      if ((register_address & 0xf0) == 0x20) {
        switch(register_address) {
        case 0x24:
          uVar5 = DAT_03806ebc & 3 | uVar5 << 2;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x25:
          uVar5 = DAT_03806ebc & 0x3fc | uVar5 & 3;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x26:
          if (uVar5 != DAT_03806ec8) {
            DAT_03806ecc = (0x100 - uVar5) * 0x120;
            DAT_03806ed0 = 0;
            DAT_03806ec8 = register_value_byte;
          }
          break;
        case 0x27:
          if ((register_value_byte & 0x20) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfd;
          }
          DAT_03806eba = register_value_byte;
          if ((register_value_byte & 0x10) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfe;
          }
          break;
        case 0x28:
          uVar5 = uVar5 & 3;
          if (uVar5 != 3) {
            if ((register_value_byte & 4) != 0) {
              uVar5 = uVar5 + 3;
            }
            iVar1 = uVar5 * 0xd8;
            if ((register_value_byte & 0x10) == 0) {
              if (((&DAT_0380731e)[iVar1] != '\0') &&
                 ((&DAT_0380731e)[iVar1] = register_value_byte & 0x10, 1 < (byte)(&DAT_0380731f)[iVar1])) {
                (&DAT_0380731f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380731e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807314 + iVar1) = 0;
              (&DAT_0380731e)[iVar1] = 1;
              (&DAT_0380731f)[iVar1] = 4;
            }
            if ((register_value_byte & 0x20) == 0) {
              if (((&DAT_0380737e)[iVar1] != '\0') &&
                 ((&DAT_0380737e)[iVar1] = register_value_byte & 0x20, 1 < (byte)(&DAT_0380737f)[iVar1])) {
                (&DAT_0380737f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380737e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807374 + iVar1) = 0;
              (&DAT_0380737f)[iVar1] = 4;
              (&DAT_0380737e)[iVar1] = 1;
            }
            if ((register_value_byte & 0x40) == 0) {
              if (((&DAT_0380734e)[iVar1] != '\0') &&
                 ((&DAT_0380734e)[iVar1] = register_value_byte & 0x40, 1 < (byte)(&DAT_0380734f)[iVar1])) {
                (&DAT_0380734f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380734e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807344 + iVar1) = 0;
              (&DAT_0380734f)[iVar1] = 4;
              (&DAT_0380734e)[iVar1] = 1;
            }
            if ((register_value_byte & 0x80) == 0) {
              if (((&DAT_038073ae)[iVar1] != '\0') &&
                 ((&DAT_038073ae)[iVar1] = register_value_byte & 0x80, 1 < (byte)(&DAT_038073af)[iVar1])) {
                (&DAT_038073af)[iVar1] = 1;
              }
            }
            else if ((&DAT_038073ae)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_038073a4 + iVar1) = 0;
              (&DAT_038073af)[iVar1] = 4;
              (&DAT_038073ae)[iVar1] = 1;
            }
          }
          break;
        case 0x2b:
          ym2612_dac_enable_bit = uVar5 & 0x80;
        }
      }
      else {
        write_ym2612_channel_or_operator_register(register_address,uVar5);
      }
      write_cursor = write_cursor + 2;
    } while ((uint)((int)write_cursor - (int)write_pairs) < byte_count);
  }
  return;
}


// 0x037fbf44  reset_fm_register_state

void reset_fm_register_state(void)

{
  reset_ym2612_registers();
  return;
}


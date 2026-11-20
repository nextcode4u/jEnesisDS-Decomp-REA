/* ARM7 channel rendering — grouped REA pseudocode.
 * Envelope stepping, preparing operator state, and choosing a sample loop.
 */

// 0x037f8a88  step_fm_operator_envelope

int step_fm_operator_envelope(int operator_state,uint envelope_tick,uint end_tick)

{
  uint rate_shift;
  uint tick_mask;
  undefined2 stored_attenuation;
  uint tick_remainder;
  int sustain_level;
  uint envelope_attenuation;
  
  envelope_attenuation = (uint)*(short *)(operator_state + 0x1a);
joined_r0x037f8a9c:
  if (end_tick <= envelope_tick) goto LAB_037f8b94;
  envelope_tick = envelope_tick + 1;
  switch(*(undefined1 *)(operator_state + 0x17)) {
  case 1:
    rate_shift = *(uint *)(operator_state + 0x2c) >> 0x18;
    tick_mask = (1 << rate_shift) - 1;
    for (; tick_remainder = envelope_tick & tick_mask, envelope_tick < end_tick && tick_remainder != 0; envelope_tick = envelope_tick + 1) {
    }
    if (tick_remainder == 0) {
      if (envelope_tick < end_tick && (int)envelope_attenuation < 0x3ff) {
        tick_remainder = 0;
        do {
          if (tick_remainder == 0) {
            envelope_attenuation = envelope_attenuation + ((1 << (*(uint *)(operator_state + 0x2c) >> (envelope_tick >> rate_shift & 7) * 3 & 7)) >>
                            1);
          }
          envelope_tick = envelope_tick + 1;
          tick_remainder = envelope_tick & tick_mask;
        } while (envelope_tick < end_tick && (int)envelope_attenuation < 0x3ff);
      }
      if ((int)envelope_attenuation < 0x3ff) {
LAB_037f8b94:
        stored_attenuation = (undefined2)envelope_attenuation;
      }
      else {
        envelope_attenuation = 0x3ff;
        stored_attenuation = 0x3ff;
        *(undefined1 *)(operator_state + 0x17) = 0;
      }
LAB_037f8ba0:
      *(undefined2 *)(operator_state + 0x1a) = stored_attenuation;
      return *(ushort *)(operator_state + 0x18) + envelope_attenuation;
    }
    break;
  case 2:
    rate_shift = *(uint *)(operator_state + 0x28) >> 0x18;
    tick_mask = (1 << rate_shift) - 1;
    for (; tick_remainder = envelope_tick & tick_mask, envelope_tick < end_tick && tick_remainder != 0; envelope_tick = envelope_tick + 1) {
    }
    if (tick_remainder == 0) {
      if ((int)envelope_attenuation < 0x3ff && envelope_tick < end_tick) {
        tick_remainder = 0;
        do {
          if (tick_remainder == 0) {
            envelope_attenuation = envelope_attenuation + ((1 << (*(uint *)(operator_state + 0x28) >> (envelope_tick >> rate_shift & 7) * 3 & 7)) >>
                            1);
          }
          envelope_tick = envelope_tick + 1;
          tick_remainder = envelope_tick & tick_mask;
        } while ((int)envelope_attenuation < 0x3ff && envelope_tick < end_tick);
      }
      if (0x3fe < (int)envelope_attenuation) {
        envelope_attenuation = 0x3ff;
        stored_attenuation = 0x3ff;
        goto LAB_037f8ba0;
      }
    }
    break;
  case 3:
    rate_shift = *(uint *)(operator_state + 0x24) >> 0x18;
    tick_mask = (1 << rate_shift) - 1;
    for (; tick_remainder = envelope_tick & tick_mask, envelope_tick < end_tick && tick_remainder != 0; envelope_tick = envelope_tick + 1) {
    }
    if (tick_remainder == 0) {
      sustain_level = *(int *)(operator_state + 0x1c);
      if (envelope_tick < end_tick && (int)envelope_attenuation < sustain_level) {
        tick_remainder = 0;
        do {
          if (tick_remainder == 0) {
            envelope_attenuation = envelope_attenuation + ((1 << (*(uint *)(operator_state + 0x24) >> (envelope_tick >> rate_shift & 7) * 3 & 7)) >>
                            1);
          }
          envelope_tick = envelope_tick + 1;
          tick_remainder = envelope_tick & tick_mask;
        } while (envelope_tick < end_tick && (int)envelope_attenuation < sustain_level);
      }
      if (sustain_level <= (int)envelope_attenuation) {
        *(undefined1 *)(operator_state + 0x17) = 2;
      }
    }
    break;
  case 4:
    rate_shift = *(uint *)(operator_state + 0x20) >> 0x18;
    tick_mask = (1 << rate_shift) - 1;
    for (; tick_remainder = envelope_tick & tick_mask, envelope_tick < end_tick && tick_remainder != 0; envelope_tick = envelope_tick + 1) {
    }
    if (tick_remainder != 0) break;
    if (envelope_tick < end_tick && 0 < (int)envelope_attenuation) {
      tick_remainder = 0;
      do {
        if (tick_remainder == 0) {
          envelope_attenuation = envelope_attenuation + ((int)(((1 << (*(uint *)(operator_state + 0x20) >> (envelope_tick >> rate_shift & 7) * 3 & 7
                                        )) >> 1) * ~envelope_attenuation) >> 4);
        }
        envelope_tick = envelope_tick + 1;
        tick_remainder = envelope_tick & tick_mask;
      } while (envelope_tick < end_tick && 0 < (int)envelope_attenuation);
    }
    if ((int)envelope_attenuation < 1) {
      envelope_attenuation = 0;
      *(undefined1 *)(operator_state + 0x17) = 3;
    }
    goto joined_r0x037f8a9c;
  }
  goto joined_r0x037f8a9c;
}


// 0x037f95fc  prepare_and_render_fm_channel

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prepare_and_render_fm_channel(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  DAT_03806e68 = *(undefined4 *)(param_3 + 200);
  DAT_03806e38 = *(short *)(param_3 + 0x18) + *(short *)(param_3 + 0x1a);
  DAT_03806e3a = *(short *)(param_3 + 0x78) + *(short *)(param_3 + 0x7a);
  DAT_03806e78 = DAT_038072fc;
  DAT_03806e6c = DAT_038072f8;
  DAT_03806e80 = (*(byte *)(param_3 + 0xc1) & 0xf) << 0xc;
  DAT_03806e7c = DAT_03807300;
  DAT_03806e70 = DAT_03807304;
  DAT_03806e3c = *(short *)(param_3 + 0x48) + *(short *)(param_3 + 0x4a);
  _DAT_0380b820 = *(undefined4 *)(param_3 + 0xc);
  DAT_03806e3e = *(short *)(param_3 + 0xa8) + *(short *)(param_3 + 0xaa);
  _DAT_0380b824 = *(undefined4 *)(param_3 + 0x6c);
  _DAT_0380b828 = *(undefined4 *)(param_3 + 0x3c);
  _DAT_0380b82c = *(undefined4 *)(param_3 + 0x9c);
  DAT_0380b831 = 0x36;
  DAT_0380b832 = 0x80;
  DAT_0380b835 = 0x26;
  DAT_0380b836 = 0x80;
  DAT_0380b833 = 3;
  DAT_0380b837 = 3;
  DAT_0380b830 = 0xf8;
  DAT_0380b834 = 0xf8;
  _DAT_0380b838 = *(undefined4 *)(param_3 + 0xc4);
  iVar3 = ((uint)*(ushort *)(param_3 + 0x18) + (int)*(short *)(param_3 + 0x1a)) * 0x10;
  DAT_0380b842 = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b843 = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b841 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b840 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0x78) + (int)*(short *)(param_3 + 0x7a)) * 0x10;
  DAT_0380b846 = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b847 = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b845 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b844 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0x48) + (int)*(short *)(param_3 + 0x4a)) * 0x10;
  DAT_0380b84a = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b84b = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b849 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b848 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0xa8) + (int)*(short *)(param_3 + 0xaa)) * 0x10;
  DAT_0380b84e = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b84f = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b84c = (undefined1)iVar3;
  DAT_0380b84d = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b850 = *(undefined1 *)(param_3 + 0x10);
  DAT_0380b851 = *(undefined1 *)(param_3 + 0x11);
  DAT_0380b852 = *(undefined1 *)(param_3 + 0x12);
  DAT_0380b853 = *(undefined1 *)(param_3 + 0x13);
  DAT_0380b854 = *(undefined1 *)(param_3 + 0x70);
  DAT_0380b855 = *(undefined1 *)(param_3 + 0x71);
  DAT_0380b856 = *(undefined1 *)(param_3 + 0x72);
  DAT_0380b857 = *(undefined1 *)(param_3 + 0x73);
  DAT_0380b858 = *(undefined1 *)(param_3 + 0x40);
  DAT_0380b859 = *(undefined1 *)(param_3 + 0x41);
  DAT_0380b85a = *(undefined1 *)(param_3 + 0x42);
  DAT_0380b85b = *(undefined1 *)(param_3 + 0x43);
  DAT_0380b85c = *(undefined1 *)(param_3 + 0xa0);
  DAT_0380b85d = *(undefined1 *)(param_3 + 0xa1);
  DAT_0380b85e = *(undefined1 *)(param_3 + 0xa2);
  DAT_0380b85f = *(undefined1 *)(param_3 + 0xa3);
  DAT_0380b860 = *(byte *)(param_3 + 0xc0) & 7;
  DAT_0380b861 = 0;
  DAT_0380b862 = 0;
  DAT_0380b863 = 0;
  DAT_0380b864 = *(byte *)(param_3 + 0xc1) & 0xf;
  DAT_0380b865 = 0;
  DAT_0380b866 = 0;
  DAT_0380b867 = 0;
  _DAT_0380b83c = *(undefined4 *)(param_3 + 200);
  DAT_03806e74 = param_3;
  if (*(char *)(param_3 + 0x17) == '\0') {
    cVar2 = *(char *)(param_3 + 0x77);
  }
  else {
    DAT_03806e38 = step_fm_operator_envelope(param_3,DAT_038072f8);
    cVar2 = *(char *)(DAT_03806e74 + 0x77);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(DAT_03806e74 + 0x47);
  }
  else {
    DAT_03806e3a = step_fm_operator_envelope(DAT_03806e74 + 0x60,DAT_03806e6c);
    cVar2 = *(char *)(DAT_03806e74 + 0x47);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(DAT_03806e74 + 0xa7);
  }
  else {
    DAT_03806e3c = step_fm_operator_envelope(DAT_03806e74 + 0x30,DAT_03806e6c);
    cVar2 = *(char *)(DAT_03806e74 + 0xa7);
  }
  if (cVar2 != '\0') {
    DAT_03806e3e = step_fm_operator_envelope(DAT_03806e74 + 0x90,DAT_03806e6c);
  }
  if ((DAT_03806e80 & 4) == 0) {
    dispatch_fm_algorithm_and_operator_mask(&DAT_0380b820,param_1,param_2);
  }
  else if (0 < param_2) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar1 + param_1) = 0;
    } while (param_2 != iVar3);
  }
  *(undefined4 *)(param_3 + 0xc4) = _DAT_0380b838;
  *(undefined4 *)(param_3 + 0xc) = _DAT_0380b820;
  *(undefined4 *)(param_3 + 0x6c) = _DAT_0380b824;
  *(undefined4 *)(param_3 + 0x3c) = _DAT_0380b828;
  *(undefined4 *)(param_3 + 0x9c) = _DAT_0380b82c;
  *(undefined4 *)(param_3 + 200) = _DAT_0380b83c;
  return;
}


// 0x037f9d9c  render_six_fm_channels

undefined4 render_six_fm_channels(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *unaff_r4;
  undefined1 *puVar9;
  uint unaff_r11;
  int iVar10;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined1 *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  
  puVar7 = unaff_r4;
  if (DAT_03807318 == 0xffffffff) {
    puVar7 = (undefined1 *)(uint)DAT_038073d4;
    uVar8 = (int)puVar7 >> DAT_0380731c;
    iVar5 = (int)puVar7 * 4;
    DAT_03807318 = DAT_03807310 * (DAT_038073d8 + *(int *)(DAT_03807308 + iVar5)) >> 1;
    if (uVar8 != DAT_0380731d) {
      uVar3 = (uint)DAT_0380730c + (uVar8 & 0xff);
      DAT_0380731d = (byte)uVar8;
      uVar6 = DAT_03807310;
      if (uVar3 < 0x5e) {
        local_2c = (undefined1 *)((uint)(byte)(&DAT_03806b28)[uVar3] << 0x18);
        uVar6 = (uint)(byte)(&DAT_03806ba8)[uVar3];
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar3) {
        unaff_r4 = (undefined1 *)0x0;
      }
      if (0x5d < uVar3) {
        local_2c = unaff_r4;
      }
      if (0x5d < uVar3) {
        uVar6 = 0x11;
      }
      DAT_0380732c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380730d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380730d + uVar8] << 0x18;
      DAT_03807328 = (uint)local_2c | *(uint *)(&DAT_03806c28 + uVar6 * 4);
      DAT_03807330 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380730e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380730e + uVar8] << 0x18;
      DAT_03807334 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380730f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380730f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_0380737c;
    DAT_03807378 = DAT_03807370 * (DAT_038073d8 + *(int *)(iVar5 + DAT_03807368)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_0380737d) {
      uVar6 = (uint)DAT_0380736c + (uVar8 & 0xff);
      DAT_0380737d = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_30 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_30 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_0380738c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380736d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380736d + uVar8] << 0x18;
      DAT_03807388 = local_30 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807390 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380736e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380736e + uVar8] << 0x18;
      DAT_03807394 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380736f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380736f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_0380734c;
    DAT_03807348 = DAT_03807340 * (DAT_038073d8 + *(int *)(iVar5 + DAT_03807338)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_0380734d) {
      uVar6 = (uint)DAT_0380733c + (uVar8 & 0xff);
      DAT_0380734d = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_34 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_34 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_0380735c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380733d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380733d + uVar8] << 0x18;
      DAT_03807358 = local_34 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807360 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380733e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380733e + uVar8] << 0x18;
      DAT_03807364 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380733f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380733f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038073ac;
    DAT_038073a8 = DAT_038073a0 * (DAT_038073d8 + *(int *)(iVar5 + DAT_03807398)) >> 1;
    puVar4 = &DAT_03806ea8;
    unaff_r11 = DAT_038073d8;
    if (uVar8 != DAT_038073ad) {
      uVar6 = (uint)DAT_0380739c + (uVar8 & 0xff);
      DAT_038073ad = (byte)uVar8;
      if (uVar6 < 0x5e) {
        puVar7 = &DAT_03806ba8;
        unaff_r11 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar6];
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      if (0x5d < uVar6) {
        unaff_r11 = 0;
      }
      DAT_038073b8 = unaff_r11 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_038073bc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380739d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380739d + uVar8] << 0x18;
      DAT_038073c0 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380739e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380739e + uVar8] << 0x18;
      puVar7 = (undefined1 *)
               (*(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380739f + uVar8] * 4) |
               (uint)(byte)(&DAT_03806b28)[DAT_0380739f + uVar8] << 0x18);
      DAT_038073c4 = puVar7;
    }
  }
  if (DAT_038073f0 == 0xffffffff) {
    puVar7 = (undefined1 *)(uint)DAT_038074ac;
    uVar8 = (int)puVar7 >> DAT_038073f4;
    iVar5 = (int)puVar7 * 4;
    DAT_038073f0 = DAT_038073e8 * (DAT_038074b0 + *(int *)(DAT_038073e0 + iVar5)) >> 1;
    if (uVar8 != DAT_038073f5) {
      uVar6 = (uint)DAT_038073e4 + (uVar8 & 0xff);
      DAT_038073f5 = (byte)uVar8;
      if (uVar6 < 0x5e) {
        local_38 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        uVar3 = (uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      else {
        local_38 = 0;
        uVar3 = DAT_038073e8;
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar6) {
        uVar3 = 0x11;
      }
      DAT_03807404 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038073e5 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038073e5 + uVar8] << 0x18;
      DAT_03807400 = local_38 | *(uint *)(&DAT_03806c28 + uVar3 * 4);
      DAT_03807408 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038073e6 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038073e6 + uVar8] << 0x18;
      DAT_0380740c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038073e7 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038073e7 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_03807454;
    DAT_03807450 = DAT_03807448 * (DAT_038074b0 + *(int *)(iVar5 + DAT_03807440)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_03807455) {
      uVar6 = (uint)DAT_03807444 + (uVar8 & 0xff);
      DAT_03807455 = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_3c = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_3c = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_03807464 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807445 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807445 + uVar8] << 0x18;
      DAT_03807460 = local_3c | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807468 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807446 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807446 + uVar8] << 0x18;
      DAT_0380746c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807447 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807447 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_03807424;
    DAT_03807420 = DAT_03807418 * (DAT_038074b0 + *(int *)(iVar5 + DAT_03807410)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_03807425) {
      uVar6 = (uint)DAT_03807414 + (uVar8 & 0xff);
      DAT_03807425 = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_40 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_40 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_03807434 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807415 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807415 + uVar8] << 0x18;
      DAT_03807430 = local_40 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807438 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807416 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807416 + uVar8] << 0x18;
      DAT_0380743c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807417 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807417 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_03807484;
    DAT_03807480 = DAT_03807478 * (DAT_038074b0 + *(int *)(iVar5 + DAT_03807470)) >> 1;
    puVar4 = &DAT_03806ea8;
    unaff_r11 = DAT_038074b0;
    if (uVar8 != DAT_03807485) {
      uVar6 = (uint)DAT_03807474 + (uVar8 & 0xff);
      DAT_03807485 = (byte)uVar8;
      if (uVar6 < 0x5e) {
        puVar7 = &DAT_03806ba8;
        unaff_r11 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar6];
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      if (0x5d < uVar6) {
        unaff_r11 = 0;
      }
      DAT_03807490 = unaff_r11 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807494 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807475 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807475 + uVar8] << 0x18;
      DAT_03807498 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807476 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807476 + uVar8] << 0x18;
      puVar7 = (undefined1 *)
               (*(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807477 + uVar8] * 4) |
               (uint)(byte)(&DAT_03806b28)[DAT_03807477 + uVar8] << 0x18);
      DAT_0380749c = puVar7;
    }
  }
  local_44 = DAT_03806eba & 0xc0;
  if ((DAT_03806eba & 0xc0) == 0) {
    if (DAT_038074c8 != 0xffffffff) goto joined_r0x037f9df4;
    puVar7 = (undefined1 *)(uint)DAT_03807584;
    uVar8 = (int)puVar7 >> DAT_038074cc;
    iVar5 = (int)puVar7 * 4;
    DAT_038074c8 = DAT_038074c0 * (DAT_03807588 + *(int *)(DAT_038074b8 + iVar5)) >> 1;
    if (uVar8 != DAT_038074cd) {
      uVar3 = (uint)DAT_038074bc + (uVar8 & 0xff);
      DAT_038074cd = (byte)uVar8;
      uVar6 = DAT_038074c0;
      if (uVar3 < 0x5e) {
        local_44 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
        uVar6 = (uint)(byte)(&DAT_03806ba8)[uVar3];
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar3) {
        uVar6 = 0x11;
      }
      DAT_038074dc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074bd + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074bd + uVar8] << 0x18;
      DAT_038074d8 = local_44 | *(uint *)(&DAT_03806c28 + uVar6 * 4);
      DAT_038074e0 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074be + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074be + uVar8] << 0x18;
      DAT_038074e4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074bf + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074bf + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_0380752c;
    DAT_03807528 = DAT_03807520 * (DAT_03807588 + *(int *)(iVar5 + DAT_03807518)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_0380752d) {
      uVar6 = (uint)DAT_0380751c + (uVar8 & 0xff);
      DAT_0380752d = (byte)uVar8;
      if (uVar6 < 0x5e) {
        local_48 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar4 = (undefined4 *)(uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      else {
        local_48 = 0;
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_0380753c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380751d + uVar8] << 0x18;
      DAT_03807538 = local_48 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807540 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380751e + uVar8] << 0x18;
      DAT_03807544 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380751f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038074fc;
    DAT_038074f8 = DAT_038074f0 * (DAT_03807588 + *(int *)(iVar5 + DAT_038074e8)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038074fd) {
      uVar6 = (uint)DAT_038074ec + (uVar8 & 0xff);
      DAT_038074fd = (byte)uVar8;
      if (uVar6 < 0x5e) {
        local_4c = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar4 = (undefined4 *)(uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      else {
        local_4c = 0;
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_0380750c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ed + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074ed + uVar8] << 0x18;
      DAT_03807508 = local_4c | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807510 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ee + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074ee + uVar8] << 0x18;
      DAT_03807514 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ef + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074ef + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_0380755c;
    DAT_03807558 = (uint)(DAT_03807550 * (DAT_03807588 + *(int *)(iVar5 + DAT_03807548))) >> 1;
    if (uVar8 == DAT_0380755d) goto joined_r0x037f9df4;
    uVar6 = (uint)DAT_0380754c + (uVar8 & 0xff);
    DAT_0380755d = (byte)uVar8;
    if (0x5d < uVar6) goto LAB_037fb994;
    uVar3 = (uint)(byte)(&DAT_03806ba8)[uVar6];
    uVar8 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
  }
  else {
    if (DAT_038074c8 != 0xffffffff) goto joined_r0x037f9df4;
    puVar7 = (undefined1 *)((int)(uint)DAT_038072e6 >> DAT_038074cc);
    DAT_038074c8 = DAT_038074c0 * (DAT_038072dc + *(int *)(DAT_038074b8 + (uint)DAT_038072e6 * 4))
                   >> 1;
    if (puVar7 != (undefined1 *)(uint)DAT_038074cd) {
      uVar6 = (uint)DAT_038074bc + ((uint)puVar7 & 0xff);
      DAT_038074cd = (byte)puVar7;
      uVar8 = DAT_038074c0;
      if (uVar6 < 0x5e) {
        unaff_r11 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        uVar8 = (uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      uVar3 = (uint)puVar7 & 0xff;
      puVar7 = (undefined1 *)(uint)(byte)(&DAT_03806b28)[DAT_038074bd + uVar3];
      if (0x5d < uVar6) {
        uVar8 = 0x11;
      }
      if (0x5d < uVar6) {
        unaff_r11 = 0;
      }
      DAT_038074d8 = unaff_r11 | *(uint *)(&DAT_03806c28 + uVar8 * 4);
      DAT_038074dc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074bd + uVar3] * 4
                              ) | (int)puVar7 << 0x18;
      DAT_038074e0 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074be + uVar3] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074be + uVar3] << 0x18;
      DAT_038074e4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074bf + uVar3] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074bf + uVar3] << 0x18;
    }
    uVar8 = (int)(uint)DAT_038072e7 >> DAT_0380752c;
    DAT_03807528 = DAT_03807520 * (DAT_038072e0 + *(int *)(DAT_03807518 + (uint)DAT_038072e7 * 4))
                   >> 1;
    if (uVar8 != DAT_0380752d) {
      uVar3 = (uint)DAT_0380751c + (uVar8 & 0xff);
      DAT_0380752d = (byte)uVar8;
      uVar6 = DAT_03807520;
      if (uVar3 < 0x5e) {
        uVar6 = (uint)(byte)(&DAT_03806ba8)[uVar3];
        unaff_r11 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      puVar7 = (undefined1 *)(uint)(byte)(&DAT_03806b28)[DAT_0380751d + uVar8];
      if (0x5d < uVar3) {
        uVar6 = 0x11;
      }
      if (0x5d < uVar3) {
        unaff_r11 = 0;
      }
      DAT_03807538 = unaff_r11 | *(uint *)(&DAT_03806c28 + uVar6 * 4);
      DAT_0380753c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751d + uVar8] * 4
                              ) | (int)puVar7 << 0x18;
      DAT_03807540 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380751e + uVar8] << 0x18;
      DAT_03807544 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380751f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380751f + uVar8] << 0x18;
    }
    uVar8 = (int)(uint)DAT_038072e5 >> DAT_038074fc;
    DAT_038074f8 = DAT_038074f0 * (DAT_038072d8 + *(int *)(DAT_038074e8 + (uint)DAT_038072e5 * 4))
                   >> 1;
    if (uVar8 != DAT_038074fd) {
      uVar3 = (uint)DAT_038074ec + (uVar8 & 0xff);
      DAT_038074fd = (byte)uVar8;
      uVar6 = DAT_038074f0;
      if (uVar3 < 0x5e) {
        uVar6 = (uint)(byte)(&DAT_03806ba8)[uVar3];
        unaff_r11 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      puVar7 = (undefined1 *)(uint)(byte)(&DAT_03806b28)[DAT_038074ed + uVar8];
      if (0x5d < uVar3) {
        uVar6 = 0x11;
      }
      if (0x5d < uVar3) {
        unaff_r11 = 0;
      }
      DAT_03807508 = unaff_r11 | *(uint *)(&DAT_03806c28 + uVar6 * 4);
      DAT_0380750c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ed + uVar8] * 4
                              ) | (int)puVar7 << 0x18;
      DAT_03807510 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ee + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074ee + uVar8] << 0x18;
      DAT_03807514 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038074ef + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038074ef + uVar8] << 0x18;
    }
    uVar8 = (int)(uint)DAT_03807584 >> DAT_0380755c;
    DAT_03807558 = (uint)(DAT_03807550 *
                         (DAT_03807588 + *(int *)(DAT_03807548 + (uint)DAT_03807584 * 4))) >> 1;
    if (uVar8 == DAT_0380755d) goto joined_r0x037f9df4;
    uVar6 = (uint)DAT_0380754c + (uVar8 & 0xff);
    DAT_0380755d = (byte)uVar8;
    if (uVar6 < 0x5e) {
      uVar3 = (uint)(byte)(&DAT_03806ba8)[uVar6];
      uVar8 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
    }
    else {
LAB_037fb994:
      uVar3 = 0x11;
      uVar8 = 0;
    }
  }
  uVar6 = (uint)DAT_0380755d;
  puVar7 = (undefined1 *)(uint)(byte)(&DAT_03806b28)[DAT_0380754d + uVar6];
  DAT_03807568 = *(uint *)(&DAT_03806c28 + uVar3 * 4) | uVar8;
  DAT_0380756c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380754d + uVar6] * 4) |
                 (int)puVar7 << 0x18;
  DAT_03807570 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380754e + uVar6] * 4) |
                 (uint)(byte)(&DAT_03806b28)[DAT_0380754e + uVar6] << 0x18;
  DAT_03807574 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380754f + uVar6] * 4) |
                 (uint)(byte)(&DAT_03806b28)[DAT_0380754f + uVar6] << 0x18;
joined_r0x037f9df4:
  if (DAT_038075a0 == 0xffffffff) {
    puVar9 = (undefined1 *)(uint)DAT_0380765c;
    uVar8 = (int)puVar9 >> DAT_038075a4;
    iVar5 = (int)puVar9 * 4;
    DAT_038075a0 = DAT_03807598 * (DAT_03807660 + *(int *)(DAT_03807590 + iVar5)) >> 1;
    if (uVar8 != DAT_038075a5) {
      uVar3 = (uint)DAT_03807594 + (uVar8 & 0xff);
      DAT_038075a5 = (byte)uVar8;
      uVar6 = DAT_03807598;
      if (uVar3 < 0x5e) {
        local_50 = (undefined1 *)((uint)(byte)(&DAT_03806b28)[uVar3] << 0x18);
        uVar6 = (uint)(byte)(&DAT_03806ba8)[uVar3];
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar3) {
        puVar7 = (undefined1 *)0x0;
      }
      if (0x5d < uVar3) {
        local_50 = puVar7;
      }
      if (0x5d < uVar3) {
        uVar6 = 0x11;
      }
      DAT_038075b4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807595 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807595 + uVar8] << 0x18;
      DAT_038075b0 = *(uint *)(&DAT_03806c28 + uVar6 * 4) | (uint)local_50;
      DAT_038075b8 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807596 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807596 + uVar8] << 0x18;
      DAT_038075bc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807597 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807597 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar9 >> DAT_03807604;
    DAT_03807600 = DAT_038075f8 * (DAT_03807660 + *(int *)(iVar5 + DAT_038075f0)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_03807605) {
      uVar6 = (uint)DAT_038075f4 + (uVar8 & 0xff);
      DAT_03807605 = (byte)uVar8;
      puVar7 = puVar9;
      if (uVar6 < 0x5e) {
        local_54 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar7 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_54 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_03807614 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075f5 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075f5 + uVar8] << 0x18;
      DAT_03807610 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | local_54;
      DAT_03807618 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075f6 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075f6 + uVar8] << 0x18;
      DAT_0380761c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075f7 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075f7 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar9 >> DAT_038075d4;
    DAT_038075d0 = DAT_038075c8 * (DAT_03807660 + *(int *)(iVar5 + DAT_038075c0)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038075d5) {
      uVar6 = (uint)DAT_038075c4 + (uVar8 & 0xff);
      DAT_038075d5 = (byte)uVar8;
      puVar7 = puVar9;
      if (uVar6 < 0x5e) {
        local_58 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar7 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_58 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_038075e4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075c5 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075c5 + uVar8] << 0x18;
      DAT_038075e0 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | local_58;
      DAT_038075e8 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075c6 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075c6 + uVar8] << 0x18;
      DAT_038075ec = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038075c7 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038075c7 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar9 >> DAT_03807634;
    DAT_03807630 = DAT_03807628 * (DAT_03807660 + *(int *)(iVar5 + DAT_03807620)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_03807635) {
      uVar3 = (uint)DAT_03807624 + (uVar8 & 0xff);
      DAT_03807635 = (byte)uVar8;
      uVar6 = DAT_03807660;
      if (uVar3 < 0x5e) {
        puVar9 = &DAT_03806ba8;
        uVar6 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar3 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar3];
      }
      if (0x5d < uVar3) {
        puVar4 = (undefined4 *)0x11;
      }
      if (0x5d < uVar3) {
        uVar6 = 0;
      }
      DAT_03807648 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807626 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807626 + uVar8] << 0x18;
      DAT_03807640 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | uVar6;
      DAT_03807644 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807625 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807625 + uVar8] << 0x18;
      DAT_0380764c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807627 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807627 + uVar8] << 0x18;
    }
  }
  if (DAT_03807678 == 0xffffffff) {
    puVar7 = (undefined1 *)(uint)DAT_03807734;
    uVar8 = (int)puVar7 >> DAT_0380767c;
    iVar5 = (int)puVar7 * 4;
    DAT_03807678 = DAT_03807670 * (DAT_03807738 + *(int *)(DAT_03807668 + iVar5)) >> 1;
    if (uVar8 != DAT_0380767d) {
      uVar6 = (uint)DAT_0380766c + (uVar8 & 0xff);
      DAT_0380767d = (byte)uVar8;
      if (uVar6 < 0x5e) {
        local_5c = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        uVar3 = (uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      else {
        local_5c = 0;
        uVar3 = DAT_03807670;
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar6) {
        uVar3 = 0x11;
      }
      DAT_0380768c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380766d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380766d + uVar8] << 0x18;
      DAT_03807688 = *(uint *)(&DAT_03806c28 + uVar3 * 4) | local_5c;
      DAT_03807690 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380766e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380766e + uVar8] << 0x18;
      DAT_03807694 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380766f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380766f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038076dc;
    DAT_038076d8 = DAT_038076d0 * (DAT_03807738 + *(int *)(iVar5 + DAT_038076c8)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038076dd) {
      uVar6 = (uint)DAT_038076cc + (uVar8 & 0xff);
      DAT_038076dd = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_60 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_60 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_038076ec = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076cd + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076cd + uVar8] << 0x18;
      DAT_038076e8 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | local_60;
      DAT_038076f0 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076ce + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076ce + uVar8] << 0x18;
      DAT_038076f4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076cf + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076cf + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038076ac;
    DAT_038076a8 = DAT_038076a0 * (DAT_03807738 + *(int *)(iVar5 + DAT_03807698)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038076ad) {
      uVar6 = (uint)DAT_0380769c + (uVar8 & 0xff);
      DAT_038076ad = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_64 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_64 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_038076bc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380769d + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380769d + uVar8] << 0x18;
      DAT_038076b8 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | local_64;
      DAT_038076c0 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380769e + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380769e + uVar8] << 0x18;
      DAT_038076c4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_0380769f + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_0380769f + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_0380770c;
    DAT_03807708 = DAT_03807700 * (DAT_03807738 + *(int *)(iVar5 + DAT_038076f8)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_0380770d) {
      uVar3 = (uint)DAT_038076fc + (uVar8 & 0xff);
      DAT_0380770d = (byte)uVar8;
      uVar6 = DAT_03807738;
      if (uVar3 < 0x5e) {
        puVar7 = &DAT_03806ba8;
        uVar6 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar3 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar3];
      }
      if (0x5d < uVar3) {
        puVar4 = (undefined4 *)0x11;
      }
      if (0x5d < uVar3) {
        uVar6 = 0;
      }
      DAT_03807720 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076fe + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076fe + uVar8] << 0x18;
      DAT_03807718 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | uVar6;
      DAT_0380771c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076fd + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076fd + uVar8] << 0x18;
      DAT_03807724 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038076ff + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038076ff + uVar8] << 0x18;
    }
  }
  if (DAT_03807750 == 0xffffffff) {
    puVar7 = (undefined1 *)(uint)DAT_0380780c;
    uVar8 = (int)puVar7 >> DAT_03807754;
    iVar5 = (int)puVar7 * 4;
    DAT_03807750 = DAT_03807748 * (DAT_03807810 + *(int *)(DAT_03807740 + iVar5)) >> 1;
    if (uVar8 != DAT_03807755) {
      uVar6 = (uint)DAT_03807744 + (uVar8 & 0xff);
      DAT_03807755 = (byte)uVar8;
      if (uVar6 < 0x5e) {
        local_68 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        uVar3 = (uint)(byte)(&DAT_03806ba8)[uVar6];
      }
      else {
        local_68 = 0;
        uVar3 = DAT_03807748;
      }
      uVar8 = uVar8 & 0xff;
      if (0x5d < uVar6) {
        uVar3 = 0x11;
      }
      DAT_03807764 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807745 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807745 + uVar8] << 0x18;
      DAT_03807760 = *(uint *)(&DAT_03806c28 + uVar3 * 4) | local_68;
      DAT_03807768 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807746 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807746 + uVar8] << 0x18;
      DAT_0380776c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807747 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807747 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038077b4;
    DAT_038077b0 = DAT_038077a8 * (DAT_03807810 + *(int *)(iVar5 + DAT_038077a0)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038077b5) {
      uVar6 = (uint)DAT_038077a4 + (uVar8 & 0xff);
      DAT_038077b5 = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_6c = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_6c = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_038077c4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077a5 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077a5 + uVar8] << 0x18;
      DAT_038077c0 = *(uint *)(&DAT_03806c28 + (int)puVar4 * 4) | local_6c;
      DAT_038077c8 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077a6 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077a6 + uVar8] << 0x18;
      DAT_038077cc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077a7 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077a7 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_03807784;
    DAT_03807780 = DAT_03807778 * (DAT_03807810 + *(int *)(iVar5 + DAT_03807770)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_03807785) {
      uVar6 = (uint)DAT_03807774 + (uVar8 & 0xff);
      DAT_03807785 = (byte)uVar8;
      puVar9 = puVar7;
      if (uVar6 < 0x5e) {
        local_70 = (uint)(byte)(&DAT_03806b28)[uVar6] << 0x18;
        puVar9 = &DAT_03806ba8;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar6 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar9[uVar6];
      }
      uVar3 = uVar6;
      if (0x5d < uVar6) {
        uVar3 = 0;
      }
      if (0x5d < uVar6) {
        local_70 = uVar3;
      }
      if (0x5d < uVar6) {
        puVar4 = (undefined4 *)0x11;
      }
      DAT_03807794 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807775 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807775 + uVar8] << 0x18;
      DAT_03807790 = local_70 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_03807798 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807776 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807776 + uVar8] << 0x18;
      DAT_0380779c = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_03807777 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_03807777 + uVar8] << 0x18;
    }
    uVar8 = (int)puVar7 >> DAT_038077e4;
    DAT_038077e0 = DAT_038077d8 * (DAT_03807810 + *(int *)(iVar5 + DAT_038077d0)) >> 1;
    puVar4 = &DAT_03806ea8;
    if (uVar8 != DAT_038077e5) {
      uVar3 = (uint)DAT_038077d4 + (uVar8 & 0xff);
      DAT_038077e5 = (byte)uVar8;
      uVar6 = DAT_03807810;
      if (uVar3 < 0x5e) {
        puVar7 = &DAT_03806ba8;
        uVar6 = (uint)(byte)(&DAT_03806b28)[uVar3] << 0x18;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar3 < 0x5e) {
        puVar4 = (undefined4 *)(uint)(byte)puVar7[uVar3];
      }
      if (0x5d < uVar3) {
        puVar4 = (undefined4 *)0x11;
      }
      if (0x5d < uVar3) {
        uVar6 = 0;
      }
      DAT_038077f0 = uVar6 | *(uint *)(&DAT_03806c28 + (int)puVar4 * 4);
      DAT_038077f4 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077d5 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077d5 + uVar8] << 0x18;
      DAT_038077f8 = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077d6 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077d6 + uVar8] << 0x18;
      DAT_038077fc = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[DAT_038077d7 + uVar8] * 4
                              ) | (uint)(byte)(&DAT_03806b28)[DAT_038077d7 + uVar8] << 0x18;
    }
  }
  iVar5 = param_2;
  iVar10 = DAT_038072f8;
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else {
    do {
      DAT_03807304 = iVar10;
      for (DAT_038072fc = DAT_038072fc + DAT_03807300; 0x2ffff < DAT_038072fc;
          DAT_038072fc = DAT_038072fc - 0x30000) {
        DAT_03807304 = DAT_03807304 + 1;
      }
      iVar5 = iVar5 + -1;
      iVar10 = DAT_03807304;
    } while (iVar5 != 0);
    prepare_and_render_fm_channel(param_1,param_2,&DAT_03807308);
    prepare_and_render_fm_channel(param_1 + DAT_03806e8c * 2,param_2,&DAT_038073e0);
    prepare_and_render_fm_channel(param_1 + DAT_03806e90 * 2,param_2,&DAT_038074b8);
    prepare_and_render_fm_channel(param_1 + DAT_03806e94 * 2,param_2,&DAT_03807590);
    prepare_and_render_fm_channel(param_1 + DAT_03806e98 * 2,param_2,&DAT_03807668);
    if (DAT_03807818 == 0) {
      prepare_and_render_fm_channel(param_1 + DAT_03806e9c * 2,param_2,&DAT_03807740);
    }
    else {
      puVar2 = (undefined2 *)(param_1 + DAT_03806e9c * 2);
      do {
        param_2 = param_2 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (param_2 != 0);
    }
    DAT_038072f8 = DAT_03807304;
    uVar1 = 1;
  }
  return uVar1;
}


// 0x03800dd0  dispatch_fm_algorithm_and_operator_mask

void dispatch_fm_algorithm_and_operator_mask(int fm_render_state)

{
  uint algorithm_and_operator_mask;
  
  *(undefined1 **)(fm_render_state + 0x48) = &stack0xffffffdc;
  algorithm_and_operator_mask = (*(uint *)(fm_render_state + 0x40) & 7) << 4;
  if (*(int *)(fm_render_state + 0x20) < 0x3400) {
    algorithm_and_operator_mask = algorithm_and_operator_mask | 8;
  }
  if (*(int *)(fm_render_state + 0x28) < 0x3400) {
    algorithm_and_operator_mask = algorithm_and_operator_mask | 4;
  }
  if (*(int *)(fm_render_state + 0x24) < 0x3400) {
    algorithm_and_operator_mask = algorithm_and_operator_mask | 2;
  }
  if (*(int *)(fm_render_state + 0x2c) < 0x3400) {
    algorithm_and_operator_mask = algorithm_and_operator_mask | 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03800e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)arm7_dispatch[algorithm_and_operator_mask])(fm_render_state + 0x20);
  return;
}


/* ARM7 psg — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037f8504  apply_psg_latch_and_data_bytes

void apply_psg_latch_and_data_bytes(int write_bytes,int byte_count)

{
  byte write_byte;
  uint write_value;
  int byte_index;
  
  if (byte_count == 0) {
    return;
  }
  byte_index = 0;
  do {
    write_byte = *(byte *)(byte_index + write_bytes);
    write_value = (uint)write_byte;
    if ((write_byte & 0x80) == 0) {
      if (((psg_latched_register & 1) == 0) && ((int)psg_latched_register < 5)) {
        (&psg_registers)[psg_latched_register] = (&psg_registers)[psg_latched_register] & 0xf | (write_value & 0x3f) << 4;
      }
      else {
        (&psg_registers)[psg_latched_register] = write_value & 0xf;
      }
    }
    else {
      psg_latched_register = write_byte >> 4 & 7;
      (&psg_registers)[psg_latched_register] = (&psg_registers)[psg_latched_register] & 0x3f0 | write_value & 0xf;
    }
    switch(psg_latched_register) {
    case 0:
    case 2:
    case 4:
      if ((&psg_registers)[psg_latched_register] == 0) {
        (&psg_registers)[psg_latched_register] = 1;
      }
    default:
      byte_index = byte_index + 1;
      if (byte_count == byte_index) {
        return;
      }
      break;
    case 6:
      psg_noise_period = 0x10 << (psg_noise_control & 3);
      byte_index = byte_index + 1;
      psg_noise_shift_register = 0x8000;
      if (byte_count == byte_index) {
        psg_noise_shift_register = 0x8000;
        return;
      }
    }
  } while( true );
}


// 0x037f86f4  render_psg_samples

void render_psg_samples(int pcm_buffer,int sample_count)

{
  int polarity_or_pcm_offset;
  uint shifted_noise_bits;
  int ticks_per_sample_q12;
  int noise_period;
  uint noise_feedback_bits;
  int sample_index;
  bool bVar7;
  
  noise_period = psg_noise_period;
  ticks_per_sample_q12 = psg_ticks_per_sample_q12;
  if (0 < sample_count) {
    sample_index = 0;
    do {
      psg_elapsed_ticks = (int)(psg_fractional_ticks + ticks_per_sample_q12) >> 0xc;
      psg_fractional_ticks = psg_fractional_ticks + ticks_per_sample_q12 & 0xfff;
      if (psg_registers < 7) {
        psg_tone_1_output = *(int *)(&psg_attenuation_table + psg_tone_1_attenuation * 4);
        if (6 < psg_tone_2_period) goto LAB_037f8750;
LAB_037f8838:
        psg_tone_2_output = *(int *)(&psg_attenuation_table + psg_tone_2_attenuation * 4);
        if (6 < psg_tone_3_period) goto LAB_037f8778;
LAB_037f8854:
        psg_tone_3_output = *(int *)(&psg_attenuation_table + psg_tone_3_attenuation * 4);
      }
      else {
        psg_tone_1_counter = psg_tone_1_counter - psg_elapsed_ticks;
        if (psg_tone_1_counter < 1) {
          psg_tone_1_output = psg_tone_1_polarity * *(int *)(&psg_attenuation_table + psg_tone_1_attenuation * 4);
          psg_tone_1_polarity = -psg_tone_1_polarity;
          do {
            psg_tone_1_counter = psg_tone_1_counter + psg_registers;
          } while (psg_tone_1_counter < 1);
        }
        if (psg_tone_2_period < 7) goto LAB_037f8838;
LAB_037f8750:
        psg_tone_2_counter = psg_tone_2_counter - psg_elapsed_ticks;
        if (psg_tone_2_counter < 1) {
          psg_tone_2_output = psg_tone_2_polarity * *(int *)(&psg_attenuation_table + psg_tone_2_attenuation * 4);
          psg_tone_2_polarity = -psg_tone_2_polarity;
          do {
            psg_tone_2_counter = psg_tone_2_counter + psg_tone_2_period;
          } while (psg_tone_2_counter < 1);
        }
        if (psg_tone_3_period < 7) goto LAB_037f8854;
LAB_037f8778:
        psg_tone_3_counter = psg_tone_3_counter - psg_elapsed_ticks;
        if (psg_tone_3_counter < 1) {
          psg_tone_3_output = psg_tone_3_polarity * *(int *)(&psg_attenuation_table + psg_tone_3_attenuation * 4);
          polarity_or_pcm_offset = -psg_tone_3_polarity;
          if (psg_noise_period == 0x80) {
            DAT_03806e14 = psg_tone_3_polarity * -2;
          }
          do {
            psg_tone_3_counter = psg_tone_3_counter + psg_tone_3_period;
            psg_tone_3_polarity = polarity_or_pcm_offset;
          } while (psg_tone_3_counter < 1);
        }
      }
      if ((noise_period == 0x80) || (psg_noise_counter = psg_noise_counter - psg_elapsed_ticks, 0 < psg_noise_counter)) {
LAB_037f87b4:
        if (DAT_03806e14 == 2) goto LAB_037f8888;
      }
      else {
        bVar7 = DAT_03806e14 != -1;
        psg_noise_counter = psg_noise_counter + noise_period;
        DAT_03806e14 = -DAT_03806e14;
        if (bVar7) goto LAB_037f87b4;
LAB_037f8888:
        noise_feedback_bits = psg_noise_shift_register;
        if ((psg_noise_control & 4) != 0) {
          noise_feedback_bits = psg_noise_shift_register ^ (int)psg_noise_shift_register >> 3;
        }
        DAT_03806e14 = 1;
        shifted_noise_bits = (int)psg_noise_shift_register >> 1;
        psg_noise_shift_register = (noise_feedback_bits & 1) << 0xf | shifted_noise_bits;
        psg_noise_output = 0;
        if ((shifted_noise_bits & 1) != 0) {
          psg_noise_output = *(int *)(&psg_attenuation_table + psg_noise_attenuation * 4) << 1;
        }
      }
      polarity_or_pcm_offset = sample_index * 2;
      sample_index = sample_index + 1;
      *(short *)(polarity_or_pcm_offset + pcm_buffer) =
           (short)((psg_tone_1_output + psg_tone_2_output + psg_tone_3_output + psg_noise_output) * 0x10000 >> 0x11);
    } while (sample_count != sample_index);
  }
  return;
}


// 0x037f89bc  reset_psg_channel_state

void reset_psg_channel_state(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &psg_ticks_per_sample_q12;
  puVar2 = puVar1;
  do {
    puVar1[7] = 1;
    puVar1[8] = 0xf;
    puVar1 = puVar1 + 2;
    puVar2[0xf] = 0;
    puVar2[0x13] = 1;
    puVar2[0x1b] = 0x20;
    puVar2[0x17] = 0;
    puVar2 = puVar2 + 1;
  } while (puVar1 != &psg_tone_1_attenuation);
  psg_noise_period = 0x10;
  psg_fractional_ticks = 0;
  psg_noise_shift_register = 0x8000;
  psg_latched_register = 0;
  return;
}


// 0x037f8a30  initialize_psg_clock_and_state

void initialize_psg_clock_and_state(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  psg_ticks_per_sample_q12 = __divsi3(param_1 << 8,param_3);
  reset_psg_channel_state(param_1,param_2,param_3);
  DAT_03806db8 = param_4;
  return;
}


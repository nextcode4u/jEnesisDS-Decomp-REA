/* ARM7 dac — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f93d8  read_ym2612_dac_enable

undefined4 read_ym2612_dac_enable(void)

{
  return ym2612_dac_enable_bit;
}


// 0x037fbc10  reset_dac_sample_cursor

void reset_dac_sample_cursor(undefined4 output_sample_count)

{
  dac_source_index = 0;
  dac_source_fraction_q16 = 0;
  dac_source_step_q16 = compiler_udivsi3(dac_staged_byte_count << 0x10,output_sample_count);
  dac_staged_byte_count = 0;
  return;
}


// 0x037fbc68  render_unsigned_dac_to_pcm16

void render_unsigned_dac_to_pcm16(int pcm_destination,int output_sample_count)

{
  int output_byte_offset;
  int source_step_q16;
  short pcm_value;
  int source_index;
  int output_sample_index;
  
  source_step_q16 = dac_source_step_q16;
  if (output_sample_count != 0) {
    pcm_value = (*(byte *)((int)&dac_staged_bytes + dac_source_index) - 0x80) * 0x40;
    output_sample_index = 0;
    source_index = dac_source_index;
    do {
      dac_source_fraction_q16 = dac_source_fraction_q16 + source_step_q16;
      output_byte_offset = output_sample_index * 2;
      output_sample_index = output_sample_index + 1;
      *(short *)(output_byte_offset + pcm_destination) = pcm_value;
      dac_source_index = source_index;
      if (0xffff < dac_source_fraction_q16) {
        dac_source_index = source_index + 1;
        pcm_value = (*(byte *)((int)&dac_staged_bytes + source_index + 1) - 0x80) * 0x40;
        dac_source_fraction_q16 = dac_source_fraction_q16 - 0x10000;
      }
      source_index = dac_source_index;
    } while (output_sample_count != output_sample_index);
  }
  return;
}


// 0x037fbda8  service_dac_buffer

void service_dac_buffer(int output_sample_count)

{
  bool render_dac_audio;
  int iVar2;
  int iVar3;
  undefined2 *pcm_clear_cursor;
  
  if ((dac_staged_byte_count == 0) || (iVar2 = read_ym2612_dac_enable(), iVar2 == 0)) {
    render_dac_audio = false;
  }
  else {
    render_dac_audio = true;
  }
  if (0xfff < output_sample_count) {
    output_sample_count = 0x1000;
  }
  reset_dac_sample_cursor(output_sample_count);
  iVar2 = output_sample_count * 2;
  if (dac_pcm_end < dac_pcm_write_cursor + output_sample_count) {
    iVar2 = (int)dac_pcm_end - (int)dac_pcm_write_cursor >> 1;
    if (render_dac_audio) {
      render_unsigned_dac_to_pcm16(dac_pcm_write_cursor,iVar2);
      output_sample_count = output_sample_count - iVar2;
      dac_pcm_write_cursor = dac_pcm_base;
      iVar2 = output_sample_count * 2;
    }
    else {
      iVar3 = iVar2;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + -1;
          *dac_pcm_write_cursor = 0;
          dac_pcm_write_cursor = dac_pcm_write_cursor + 1;
        } while (iVar3 != 0);
      }
      output_sample_count = output_sample_count - iVar2;
      dac_pcm_write_cursor = dac_pcm_base;
      iVar2 = output_sample_count * 2;
    }
  }
  if (render_dac_audio) {
    render_unsigned_dac_to_pcm16(dac_pcm_write_cursor,output_sample_count);
  }
  else {
    pcm_clear_cursor = dac_pcm_write_cursor;
    if (0 < output_sample_count) {
      do {
        output_sample_count = output_sample_count + -1;
        *pcm_clear_cursor = 0;
        pcm_clear_cursor = pcm_clear_cursor + 1;
      } while (output_sample_count != 0);
    }
  }
  dac_pcm_write_cursor = (undefined2 *)((int)dac_pcm_write_cursor + iVar2);
  return;
}


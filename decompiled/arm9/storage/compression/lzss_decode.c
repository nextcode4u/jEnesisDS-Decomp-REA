/* ARM9 lzss decode — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200ccb4  decode_lzss_from_memory_with_prefix

void decode_lzss_from_memory_with_prefix(int input_buffer,int output_buffer,uint input_size,uint output_capacity,uint prefix_length)

{
  undefined1 match_byte;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint match_high_bits;
  undefined1 *puVar6;
  int iVar8;
  uint ring_write_index;
  uint token_flag_bits;
  undefined1 *puVar7;
  
  if (((output_buffer != 0 && input_buffer != 0) && (output_capacity != 0 && input_size != 0)) && (prefix_length < input_size)) {
    DAT_023ddebc = &DAT_023deed4;
    DAT_023eb2f8 = &DAT_023eb2fc;
    DAT_023deedc = input_size;
    if (input_size <= output_capacity) {
      DAT_023eb308 = 0;
      DAT_023deee0 = 0;
      DAT_023deed4 = input_buffer;
      DAT_023deed8 = input_buffer;
      DAT_023eb2fc = output_buffer;
      DAT_023eb300 = output_buffer;
      DAT_023eb304 = output_capacity;
      if (prefix_length != 0) {
        newlib_memcpy(output_buffer,input_buffer);
        piVar3 = DAT_023eb2f8;
        piVar2 = DAT_023ddebc;
        iVar8 = *DAT_023ddebc;
        DAT_023ddebc[3] = DAT_023ddebc[3] + prefix_length;
        *piVar2 = iVar8 + prefix_length;
        piVar3[3] = piVar3[3] + prefix_length;
        *piVar3 = *piVar3 + prefix_length;
      }
      puVar7 = &lzss_ring_buffer;
      do {
        puVar6 = puVar7 + 1;
        *puVar7 = 0x20;
        puVar7 = puVar6;
      } while (puVar6 != &DAT_023deeae);
      ring_write_index = 0xfee;
      token_flag_bits = 0;
      do {
        token_flag_bits = token_flag_bits >> 1;
        if ((token_flag_bits & 0x100) == 0) goto LAB_0200cc00;
        while ((token_flag_bits & 1) != 0) {
          while( true ) {
            uVar4 = read_bounded_stream_byte(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return;
            }
            write_bounded_stream_byte(uVar4 & 0xff,DAT_023eb2f8);
            token_flag_bits = token_flag_bits >> 1;
            (&lzss_ring_buffer)[ring_write_index] = (char)uVar4;
            ring_write_index = ring_write_index + 1 & 0xfff;
            if ((token_flag_bits & 0x100) != 0) break;
LAB_0200cc00:
            uVar4 = read_bounded_stream_byte(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return;
            }
            token_flag_bits = uVar4 | 0xff00;
            if ((uVar4 & 1) == 0) goto LAB_0200cc20;
          }
        }
LAB_0200cc20:
        iVar8 = 0;
        uVar4 = read_bounded_stream_byte(DAT_023ddebc);
        if ((uVar4 == 0xffffffff) || (match_high_bits = read_bounded_stream_byte(DAT_023ddebc), match_high_bits == 0xffffffff)) {
          return;
        }
        do {
          match_byte = (&lzss_ring_buffer)[(uVar4 | (match_high_bits & 0xf0) << 4) + iVar8 & 0xfff];
          write_bounded_stream_byte(match_byte,DAT_023eb2f8);
          iVar8 = iVar8 + 1;
          (&lzss_ring_buffer)[ring_write_index] = match_byte;
          ring_write_index = ring_write_index + 1 & 0xfff;
        } while (iVar8 <= (int)((match_high_bits & 0xf) + 2));
      } while( true );
    }
  }
  return;
}


// 0x0200cda4  load_file_and_decode_lzss_with_prefix

/* WARNING: Removing unreachable block (ram,0x02080f50) */

uint load_file_and_decode_lzss_with_prefix(int input_buffer,int output_buffer,uint param_3,uint param_4,uint prefix_length)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int source_stream;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar11;
  undefined1 *puVar10;
  
  if (((output_buffer != 0 && input_buffer != 0) && (param_4 != 0 && param_3 != 0)) && (prefix_length < param_4)) {
    DAT_023ddebc = &DAT_023deed4;
    DAT_023eb2f8 = &DAT_023eb2fc;
    source_stream = newlib_fopen(param_3,&binary_read_mode);
    param_3 = 0;
    if (source_stream != 0) {
      newlib_fseek(source_stream,0,2);
      piVar2 = DAT_023ddebc;
      iVar7 = newlib_ftell(source_stream);
      piVar2[2] = iVar7;
      newlib_fseek(source_stream,0,0);
      if ((param_4 < (uint)DAT_023ddebc[2]) || ((uint)DAT_023ddebc[2] < prefix_length)) {
        if (source_stream == 0) {
          uVar8 = 0;
        }
        else {
          newlib_sfp_lock_acquire();
          newlib_sinit(&DAT_0208f3a0);
          uVar8 = 0;
          if (*(short *)(source_stream + 0xc) != 0) {
            uVar8 = newlib_fflush(source_stream);
            if ((*(code **)(source_stream + 0x30) != (code *)0x0) &&
               (iVar7 = (**(code **)(source_stream + 0x30))(*(undefined4 *)(source_stream + 0x20)), iVar7 < 0)) {
              uVar8 = 0xffffffff;
            }
            if ((*(ushort *)(source_stream + 0xc) & 0x80) != 0) {
              newlib_free_r(&DAT_0208f3a0,*(undefined4 *)(source_stream + 0x14));
            }
            if (*(int *)(source_stream + 0x34) != 0) {
              if (*(int *)(source_stream + 0x34) != source_stream + 0x44) {
                newlib_free_r(&DAT_0208f3a0);
              }
              *(undefined4 *)(source_stream + 0x34) = 0;
            }
            if (*(int *)(source_stream + 0x48) != 0) {
              newlib_free_r(&DAT_0208f3a0);
              *(undefined4 *)(source_stream + 0x48) = 0;
            }
            *(undefined2 *)(source_stream + 0xc) = 0;
          }
          newlib_sfp_lock_release();
        }
        return uVar8;
      }
      newlib_fread(input_buffer,1,param_4,source_stream);
      newlib_fclose(source_stream);
      piVar3 = DAT_023eb2f8;
      piVar2 = DAT_023ddebc;
      DAT_023eb2f8[2] = param_4;
      piVar2[1] = input_buffer;
      *piVar2 = input_buffer;
      piVar2[3] = 0;
      *piVar3 = output_buffer;
      piVar3[3] = 0;
      piVar3[1] = output_buffer;
      if (prefix_length != 0) {
        newlib_memcpy(output_buffer,piVar2[1],prefix_length);
        piVar3 = DAT_023eb2f8;
        piVar2 = DAT_023ddebc;
        source_stream = *DAT_023ddebc;
        DAT_023ddebc[3] = DAT_023ddebc[3] + prefix_length;
        *piVar2 = source_stream + prefix_length;
        piVar3[3] = piVar3[3] + prefix_length;
        *piVar3 = *piVar3 + prefix_length;
      }
      puVar10 = &lzss_ring_buffer;
      do {
        puVar9 = puVar10 + 1;
        *puVar10 = 0x20;
        puVar10 = puVar9;
      } while (puVar9 != &DAT_023deeae);
      uVar11 = 0xfee;
      uVar8 = 0;
      do {
        uVar8 = uVar8 >> 1;
        if ((uVar8 & 0x100) == 0) goto LAB_0200cc00;
        while ((uVar8 & 1) != 0) {
          while( true ) {
            uVar4 = read_bounded_stream_byte(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return 0xffffffff;
            }
            write_bounded_stream_byte(uVar4 & 0xff,DAT_023eb2f8);
            uVar8 = uVar8 >> 1;
            (&lzss_ring_buffer)[uVar11] = (char)uVar4;
            uVar11 = uVar11 + 1 & 0xfff;
            if ((uVar8 & 0x100) != 0) break;
LAB_0200cc00:
            uVar4 = read_bounded_stream_byte(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return 0xffffffff;
            }
            uVar8 = uVar4 | 0xff00;
            if ((uVar4 & 1) == 0) goto LAB_0200cc20;
          }
        }
LAB_0200cc20:
        source_stream = 0;
        uVar5 = read_bounded_stream_byte(DAT_023ddebc);
        uVar4 = uVar5;
        if ((uVar5 == 0xffffffff) || (uVar4 = read_bounded_stream_byte(DAT_023ddebc), uVar4 == 0xffffffff)) {
          return uVar4;
        }
        do {
          uVar1 = (&lzss_ring_buffer)[(uVar5 | (uVar4 & 0xf0) << 4) + source_stream & 0xfff];
          write_bounded_stream_byte(uVar1,DAT_023eb2f8);
          source_stream = source_stream + 1;
          (&lzss_ring_buffer)[uVar11] = uVar1;
          uVar11 = uVar11 + 1 & 0xfff;
        } while (source_stream <= (int)((uVar4 & 0xf) + 2));
      } while( true );
    }
  }
  return param_3;
}


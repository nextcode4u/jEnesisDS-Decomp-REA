/* ARM9 port access — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200aaf8  write_vdp_control_port_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_vdp_control_port_word(uint control_word)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uStack_44;
  uint uStack_2c;
  
  uVar9 = vdp_dma_source_address;
  uVar6 = vdp_address_increment;
  if (vdp_control_word_pending == '\0') {
    uVar9 = control_word & 0xff;
    uVar6 = control_word >> 8 & 0x1f;
    if ((control_word & 0xc000) != 0x8000) {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c | control_word >> 0xe;
      vdp_address = vdp_address & 0xc000 | control_word & 0x3fff;
      return;
    }
    vdp_access_code = 0;
    iVar10 = 1 - (uint)vdp_mode_5_bit;
    if (1 < vdp_mode_5_bit) {
      iVar10 = 0;
    }
    if (uVar6 < 0xc) {
      iVar10 = 0;
    }
    bVar13 = (byte)control_word;
    (&vdp_registers)[uVar6] = bVar13;
    if (iVar10 == 0) {
      switch(uVar6) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar9 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar9 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar13 & 4;
        DAT_0b00362f = (byte)(uVar9 >> 6) & 1;
        uVar6 = uVar9 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar9 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar9 >> 4) & 1;
        DAT_023ddb06 = (char)uVar6;
        if (uVar6 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (control_word & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (control_word & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (control_word & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        DAT_023dc8bc = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (control_word & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (control_word & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar10 = (control_word & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar10;
        vdp_sprite_attribute_table_base = iVar10;
        return;
      case 7:
        DAT_0b003640 = control_word & 0x3f;
        vdp_backdrop_color_index = (char)(control_word & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar9;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar9 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar9 >> 2) & 1;
        DAT_023dcdb0 = bVar13 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar13 & 3) {
          case 0:
            DAT_023dcea8 = (code *)&LAB_0200bbd0;
            return;
          case 1:
            DAT_023dcea8 = (code *)&LAB_0200c0cc;
            return;
          case 2:
            DAT_023dcea8 = (code *)&LAB_0200bf18;
            return;
          case 3:
            DAT_023dcea8 = (code *)&LAB_0200bd6c;
            return;
          }
        }
        return;
      case 0xc:
        uVar6 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (control_word & 0x81) != 0;
        if ((uVar6 != (uVar9 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar6)) {
          DAT_020b4bf4 = 0;
        }
        if ((bool)DAT_023ddb05) {
          DAT_023dc8bc = vdp_window_name_table_base + 0x1000;
          DAT_020b4c0c = 0xf000;
          DAT_020b4c0a = 0x50;
          DAT_023ddeb2 = 0x28;
          DAT_023dc8ae = 0x140;
          DAT_023dc8c8 = 0x40;
        }
        else {
          DAT_020b4c0c = 0xf800;
          DAT_023dc8bc = vdp_window_name_table_base + 0x800;
          DAT_020b4c14 = 1;
          DAT_020b4c0a = 0x40;
          DAT_023ddeb2 = 0x20;
          DAT_023dc8ae = 0x100;
          DAT_023dc8c8 = 0x20;
        }
        if (DAT_023ddeb4 == '\0') {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
        }
        else {
          DAT_023dcfa8 = 1 - DAT_023ddb04;
          if (1 < DAT_023ddb04) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0xd:
        DAT_023dcea4 = (ushort)((control_word << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar9;
        return;
      case 0x10:
        uVar9 = uVar9 >> 4 & 3;
        control_word = control_word & 3;
        uVar6 = uVar9 | control_word << 4;
        if (uVar6 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar6;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar9 + control_word * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[control_word];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)control_word;
        DAT_023dd372._0_1_ = (char)uVar9;
        return;
      case 0x11:
        uVar6 = (control_word & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar9 >> 7);
        DAT_023ddb04 = (char)uVar6;
        if (uVar9 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar6);
        }
        else {
          DAT_023dcfa8 = (control_word & 0x1f) * -2 + 1;
          if (1 < uVar6) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar9 >> 7);
        DAT_020b4c10 = (control_word & 0x1f) << 3;
        DAT_023ddeb0 = (char)(control_word & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar9;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar9 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar9 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar9 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (control_word & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar9 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | control_word >> 2 & 0x3c;
  uVar12 = vdp_address & 0x3fff | (control_word & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar12;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((control_word >> 2 & 0x20) == 0) {
    return;
  }
  uVar7 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar7 = 0xffff;
  }
  vdp_dma_remaining = uVar7;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar12 = vdp_dma_source_address & 0xfffffe;
    puVar4 = (ushort *)get_vdp_dma_backing_pointer(uVar12);
    uVar8 = vdp_address;
    uVar14 = vdp_dma_remaining;
    uVar15 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[vdp_scanline];
      uVar12 = uVar12 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar14 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar4;
        uVar8 = (vdp_address & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar12 = uVar12 + 0x8000;
        vdp_address = vdp_address + uVar6;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar8]) {
          (&vdp_cram)[uVar8] = (short)(uVar11 & 0xeee);
          if ((uVar8 != 0) && (uVar15 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar8] = uVar1;
          if (uVar8 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar4 = puVar4 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar12 = uVar12 << 0xf;
      do {
        uVar14 = vdp_address & 0x7f;
        uVar15 = vdp_address & 0x7e;
        vdp_address = uVar14;
        if (0x4f < uVar14) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar12 = uVar12 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar15) = *puVar4;
        puVar4 = puVar4 + 1;
        vdp_address = uVar6 + uVar14;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar12;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar15 = uVar6 & 0xffff;
      uVar12 = uVar12 << 0xf;
      uStack_44 = 0;
      puVar5 = puVar4;
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&vdp_vram + uVar11);
        uVar2 = *puVar5;
        if (uVar2 != uVar1) {
          *(ushort *)(&vdp_vram + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar12 = uVar12 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar15 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      uVar16 = uVar11;
      if (uVar11 <= uVar8) {
        uVar16 = uVar11 + 0x10000;
      }
      uVar12 = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar12;
        return;
      }
      if (uVar8 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar17 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar9 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar17)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar16) {
            if (DAT_023dc8b4 < uVar16) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
          }
          else {
            bVar17 = false;
          }
        }
        else {
          bVar17 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar16) {
            if (DAT_023dc8b8 < uVar16) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = true;
        }
        if (bVar17) {
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar3)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar12;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar17 = (int)uVar7 < 0;
          puVar5 = puVar4;
          if (bVar17) {
            puVar5 = (ushort *)((int)puVar4 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar17) {
            uVar7 = 0;
          }
          uVar14 = uVar16 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar16 - vdp_plane_a_name_table_base) {
            uVar14 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar5,uVar7,uVar6,uVar14);
          puVar5 = (ushort *)&vdp_address;
          bVar17 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar5 = (ushort *)0x0;
          bVar17 = false;
        }
        if (bVar3) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar12;
            return;
          }
          iVar10 = uStack_2c - vdp_plane_b_name_table_base;
          bVar17 = iVar10 < 0;
          if (bVar17) {
            iVar10 = 0;
            puVar5 = (ushort *)((int)puVar4 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar17) {
            puVar5 = puVar4;
          }
          uVar7 = uVar16 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar16 - vdp_plane_b_name_table_base) {
            uVar7 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar5,iVar10,uVar6,uVar7);
          bVar17 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar4,uStack_2c - vdp_window_name_table_base & 0xffff,uVar6,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar17) {
          uVar6 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar6) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar4);
              uStack_2c = uStack_2c + uVar15 & 0xffff;
              uVar6 = uVar6 - 1 & 0xffff;
              puVar4 = puVar4 + 1;
            } while (uVar6 != 0);
            uVar9 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar4);
              }
              uStack_2c = uStack_2c + uVar15 & 0xffff;
              uVar6 = uVar6 - 1 & 0xffff;
              uVar9 = 0;
              puVar4 = puVar4 + 1;
            } while (uVar6 != 0);
          }
        }
      }
    }
    else {
      uVar6 = uVar6 & 0xffff;
      puVar5 = puVar4;
      uVar15 = uVar7;
      uVar16 = uStack_2c;
      do {
        uVar1 = *puVar5;
        uVar15 = uVar15 - 1 & 0xffff;
        (&vdp_vram)[uVar16] = (char)(uVar1 >> 8);
        uVar12 = uVar12 + 2 & 0x1ffff | uVar9 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar16] = (char)uVar1;
        uVar16 = uVar16 + uVar6 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar15 != 0);
      if (uVar8 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar8) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar17 = iVar10 + vdp_sprite_attribute_table_base < uVar16;
        DAT_020b4c15 = 1;
      }
      uVar9 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) && (bVar17)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar17 = false;
          uVar9 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
          bVar17 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar9 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar9 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar9) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar9 != 0);
          bVar17 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar9 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar9 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar9) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar9 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar9 = 0;
        }
        if (!bVar17) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar4 << 8 | (uint)(*puVar4 >> 8));
            uStack_2c = uStack_2c + uVar6 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar9 = 0;
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar16 & 0xffff;
    vdp_dma_length_register = uVar9;
    vdp_dma_remaining = uVar9;
    vdp_dma_source_address = uVar12;
    break;
  case 2:
    vdp_dma_fill_pending = 1;
    break;
  case 3:
    uVar9 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar14 = uVar9 + uVar7;
    uVar15 = vdp_address_increment & 0xffff;
    do {
      uVar8 = uVar9 ^ 1;
      uVar9 = uVar9 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar8];
      vdp_address = vdp_address + uVar15 & 0xffff;
    } while (uVar9 != (uVar14 & 0xffff));
    if (uVar6 == 1) {
      uVar7 = uVar7 >> 1;
      uVar15 = 2;
    }
    do {
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
            bVar17 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar17 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar17 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar17) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar15;
    } while( true );
  }
  return;
}


// 0x0200ac7c  write_vdp_data_port_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_vdp_data_port_word(uint data_word)

{
  ushort uVar1;
  undefined1 data_low_byte;
  uint fill_next_address;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *fill_word_pointer;
  uint uVar9;
  int iVar10;
  uint fill_address;
  uint fill_step;
  bool bVar13;
  undefined1 data_high_byte;
  
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar6 = vdp_address_increment;
  uVar5 = vdp_dma_remaining;
  data_low_byte = (undefined1)data_word;
  data_high_byte = (undefined1)(data_word >> 8);
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    fill_address = vdp_address & 0xffff;
    if (bVar13) {
      fill_word_pointer = &vdp_vram + fill_address;
    }
    else {
      fill_word_pointer = (undefined1 *)(vdp_address & 0xfffe);
    }
    fill_step = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)fill_word_pointer] = data_low_byte;
    }
    uVar5 = uVar5 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[fill_address] = data_high_byte;
      fill_word_pointer[1] = data_low_byte;
    }
    if (!bVar13) {
      (&vdp_vram)[fill_address] = data_high_byte;
    }
    fill_next_address = fill_address + fill_step & 0xffff;
    uVar9 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&vdp_vram)[fill_next_address] = data_low_byte;
        fill_next_address = fill_next_address + fill_step & 0xffff;
      } while (uVar9 != 0);
      fill_address = vdp_address;
      if (uVar5 == 0xffff && (data_word & 0xff) == 0) {
        vdp_address = fill_next_address;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = fill_next_address;
    fill_address = fill_address & 0xfffe;
    if (uVar6 == 1) {
      uVar5 = uVar5 >> 1;
      fill_step = 2;
    }
    do {
      if (fill_address < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((fill_address < DAT_023dcea4) || (DAT_023dcdaa <= fill_address)) {
          if ((fill_address < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= fill_address)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,fill_address - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + fill_address));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= fill_address) && (fill_address < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,fill_address - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + fill_address));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= fill_address) && (fill_address < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(fill_address - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + fill_address));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(fill_address,*(undefined2 *)(&vdp_vram + fill_address));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= fill_address) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar5 = uVar5 - 1 & 0xffff;
      if (uVar5 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      fill_address = fill_address + fill_step & 0xfffe;
    } while( true );
  }
  uVar5 = vdp_access_code & 0xf;
  uVar1 = (ushort)data_word;
  if (uVar5 == 3) {
    uVar5 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar5] = uVar1 & 0xeee;
    uVar1 = (ushort)((data_word & 0xe0) << 2) | (ushort)((data_word & 0xe00) << 3) | 0x8000 |
            (ushort)((data_word & 0xe) << 1);
    if ((uVar5 != 0) && (vdp_scanline < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar5 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar6 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar5] = uVar1;
    DAT_0208f354 = 1;
    if (uVar5 == uVar6) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar5 == 5) {
    uVar5 = vdp_address & 0x7f;
    if (0x4f < uVar5) {
      vdp_address = uVar5;
      return;
    }
    uVar6 = vdp_address & 0x7e;
    vdp_address = uVar5;
    *(ushort *)((int)&vdp_vsram + uVar6) = uVar1;
  }
  else if (uVar5 == 1) {
    uVar5 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar5) == data_word) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar5) = uVar1;
    }
    else {
      (&vdp_vram)[uVar5] = data_high_byte;
      (&vdp_vram_odd_byte_base)[uVar5] = data_low_byte;
      data_word = (data_word >> 8 | data_word << 8) & 0xffff;
    }
    if (vdp_sprite_attribute_table_base <= uVar5) {
      if (DAT_023ddb05 == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar5 < iVar10 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar5 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar5)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar5 - vdp_plane_a_name_table_base,data_word);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar5) && (uVar5 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar5 - vdp_plane_b_name_table_base,data_word);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar5) && (uVar5 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar5 - vdp_window_name_table_base,data_word);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar5,data_word);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


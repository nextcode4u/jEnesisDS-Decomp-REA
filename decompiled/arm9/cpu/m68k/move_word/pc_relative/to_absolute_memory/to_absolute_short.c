/* ARM9 to absolute short — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201b088  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_0201b088(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  short *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar17 = vdp_dma_source_address;
  uVar11 = vdp_address_increment;
  uVar16 = uVar7 & 0xffff;
  uVar8 = (uint)unaff_r10[1];
  uVar1 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uint)(ushort)unaff_r10[1]) = uVar1;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar17 = vdp_address_increment;
    uVar11 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar16 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar19 = (vdp_address & 1) == 0;
      uVar16 = vdp_address & 0xffff;
      if (bVar19) {
        puVar14 = &vdp_vram + uVar16;
      }
      else {
        puVar14 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar8 = vdp_address_increment & 0xffff;
      if (!bVar19) {
        (&vdp_vram)[(int)puVar14] = bVar12;
      }
      uVar11 = uVar11 & 0xffff;
      if (bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
        puVar14[1] = bVar12;
      }
      if (!bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
      }
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&vdp_vram)[uVar9] = bVar12;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = vdp_address;
        if (uVar11 == 0xffff && (uVar7 & 0xff) == 0) {
          vdp_address = uVar9;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar9;
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar16 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar16 < DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar16 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar16) && (uVar16 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar16 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_window_name_table_base <= uVar16) && (uVar16 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar16 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
            }
            if (!bVar19) {
              update_cached_ds_pattern_from_vdp_word(uVar16,*(undefined2 *)(&vdp_vram + uVar16));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar15 = 0x200;
          }
          else {
            iVar15 = 0x280;
          }
          if (iVar15 + vdp_sprite_attribute_table_base <= uVar16) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = vdp_access_code & 0xf;
    if (uVar11 == 3) {
      uVar11 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar11] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (vdp_scanline < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
      }
      uVar16 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar11] = uVar1;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar11 == 5) {
      uVar11 = vdp_address & 0x7f;
      if (0x4f < uVar11) {
        vdp_address = uVar11;
        return;
      }
      uVar16 = vdp_address & 0x7e;
      vdp_address = uVar11;
      *(ushort *)((int)&vdp_vsram + uVar16) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar11) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar11) = uVar1;
      }
      else {
        (&vdp_vram)[uVar11] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar11] = bVar12;
        uVar16 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar11) {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (uVar11 < iVar15 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar11 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar11)) {
        bVar19 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar11 - vdp_plane_a_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar11) && (uVar11 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar11 - vdp_plane_b_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_window_name_table_base <= uVar11) && (uVar11 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar11 - vdp_window_name_table_base,uVar16);
      }
      if (!bVar19) {
        update_cached_ds_pattern_from_vdp_word(uVar11,uVar16);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar16 = (uVar7 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar16 = uVar7 & 0xff;
    uVar11 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c | (uVar7 & 0xffff) >> 0xe;
      vdp_address = vdp_address & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    vdp_access_code = 0;
    iVar15 = 1 - (uint)vdp_mode_5_bit;
    if (1 < vdp_mode_5_bit) {
      iVar15 = 0;
    }
    if (uVar11 < 0xc) {
      iVar15 = 0;
    }
    (&vdp_registers)[uVar11] = bVar12;
    if (iVar15 == 0) {
      switch(uVar11) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar16 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar16 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar12 & 4;
        DAT_0b00362f = (byte)(uVar16 >> 6) & 1;
        uVar11 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar16 >> 4) & 1;
        DAT_023ddb06 = (char)uVar11;
        if (uVar11 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar7 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x800;
        }
        else {
          iVar15 = 0x1000;
        }
        DAT_023dc8bc = iVar15 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar15 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar15;
        vdp_sprite_attribute_table_base = iVar15;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar16;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar16 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar16 >> 2) & 1;
        DAT_023dcdb0 = bVar12 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar12 & 3) {
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
        uVar11 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar11 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar11)) {
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
        DAT_023dcea4 = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar11 = uVar16 | uVar7 << 4;
        if (uVar11 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar11;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar11 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar11;
        if (uVar16 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar11);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar11) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar16 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar16;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar16 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar16 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar16 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar16 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar16 & 0x3c;
  uVar7 = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar7;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar16 & 0x20) == 0) {
    return;
  }
  uVar16 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar16 = 0xffff;
  }
  vdp_dma_remaining = uVar16;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar16 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar16);
    uVar9 = vdp_address;
    uVar13 = vdp_dma_remaining;
    uVar8 = vdp_scanline;
    uVar10 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[vdp_scanline];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar13 = (uint)vdp_backdrop_color_index;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (vdp_address & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        vdp_address = vdp_address + uVar11;
        if ((uVar10 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar9]) {
          (&vdp_cram)[uVar9] = (short)(uVar10 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar9] = uVar1;
          if (uVar9 == uVar13) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = vdp_address & 0x7f;
        uVar8 = vdp_address & 0x7e;
        vdp_address = uVar13;
        if (0x4f < uVar13) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar11 + uVar13;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar16;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar10 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&vdp_vram + uVar10);
        uVar2 = *puVar6;
        if (uVar2 != uVar1) {
          *(ushort *)(&vdp_vram + uVar10) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar9) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar16;
        return;
      }
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + vdp_sprite_attribute_table_base < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar18) {
            if (DAT_023dc8b4 < uVar18) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
          }
          else {
            bVar19 = false;
          }
        }
        else {
          bVar19 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar18) {
            if (DAT_023dc8b8 < uVar18) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = true;
        }
        if (bVar19) {
          if ((DAT_023dc8a0 >> 1 <= uVar13) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar13 = uVar18 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar18 - vdp_plane_a_name_table_base) {
            uVar13 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar7,uVar11,uVar13);
          puVar6 = (ushort *)&vdp_address;
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar19 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          iVar15 = uStack_2c - vdp_plane_b_name_table_base;
          bVar19 = iVar15 < 0;
          if (bVar19) {
            iVar15 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar7 = uVar18 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar18 - vdp_plane_b_name_table_base) {
            uVar7 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar15,uVar11,uVar7);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar11,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar19) {
          uVar11 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar11) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
    else {
      uVar11 = uVar11 & 0xffff;
      puVar6 = puVar5;
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar18] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + vdp_sprite_attribute_table_base < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar18 & 0xffff;
    vdp_dma_length_register = uVar17;
    vdp_dma_remaining = uVar17;
    vdp_dma_source_address = uVar16;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar17 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar13 = uVar17 + uVar16;
    uVar8 = vdp_address_increment & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar9];
      vdp_address = vdp_address + uVar8 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar19) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x0201baf4  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_0201baf4(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  bool bVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int unaff_r6;
  int unaff_r8;
  uint uVar20;
  ushort *unaff_r10;
  bool bVar21;
  uint uStack_44;
  uint uStack_2c;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar14 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar12 = (int)*(short *)(unaff_r6 + uVar14);
  }
  else {
    iVar12 = *(int *)(unaff_r6 + uVar14);
  }
  uVar9 = read_m68k_bus_word(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar4 + iVar12);
  uVar19 = vdp_dma_source_address;
  uVar14 = vdp_address_increment;
  uVar18 = uVar9 & 0xffff;
  uVar10 = (uint)(short)unaff_r10[1];
  uVar4 = (ushort)uVar9;
  if (0xdfffff < (uVar10 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uint)unaff_r10[1]) = uVar4;
    return;
  }
  if ((uVar10 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar10 & 0xffffff) >> 0x10])(uVar10 & 0xffffff);
    return;
  }
  bVar15 = (byte)uVar9;
  if ((uVar10 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar19 = vdp_address_increment;
    uVar14 = vdp_dma_remaining;
    uVar5 = (undefined1)(uVar18 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar21 = (vdp_address & 1) == 0;
      uVar18 = vdp_address & 0xffff;
      if (bVar21) {
        puVar17 = &vdp_vram + uVar18;
      }
      else {
        puVar17 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar10 = vdp_address_increment & 0xffff;
      if (!bVar21) {
        (&vdp_vram)[(int)puVar17] = bVar15;
      }
      uVar14 = uVar14 & 0xffff;
      if (bVar21) {
        (&vdp_vram)[uVar18] = uVar5;
        puVar17[1] = bVar15;
      }
      if (!bVar21) {
        (&vdp_vram)[uVar18] = uVar5;
      }
      uVar11 = uVar18 + uVar10 & 0xffff;
      uVar16 = uVar14;
      if (uVar14 != 0) {
        do {
          uVar16 = uVar16 - 1 & 0xffff;
          (&vdp_vram)[uVar11] = bVar15;
          uVar11 = uVar11 + uVar10 & 0xffff;
        } while (uVar16 != 0);
        uVar18 = vdp_address;
        if (uVar14 == 0xffff && (uVar9 & 0xff) == 0) {
          vdp_address = uVar11;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar11;
      uVar18 = uVar18 & 0xfffe;
      if (uVar19 == 1) {
        uVar14 = uVar14 >> 1;
        uVar10 = 2;
      }
      do {
        if (uVar18 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar18 < DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) {
            if ((uVar18 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar18)) {
              bVar21 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar18 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar18));
              bVar21 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar18) && (uVar18 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar18 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar18));
              bVar21 = true;
            }
            if ((vdp_window_name_table_base <= uVar18) && (uVar18 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar18 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar18));
            }
            if (!bVar21) {
              update_cached_ds_pattern_from_vdp_word(uVar18,*(undefined2 *)(&vdp_vram + uVar18));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar12 = 0x200;
          }
          else {
            iVar12 = 0x280;
          }
          if (iVar12 + vdp_sprite_attribute_table_base <= uVar18) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar14 = uVar14 - 1 & 0xffff;
        if (uVar14 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar18 = uVar18 + uVar10 & 0xfffe;
      } while( true );
    }
    uVar14 = vdp_access_code & 0xf;
    if (uVar14 == 3) {
      uVar14 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar14] = uVar4 & 0xeee;
      uVar4 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar9 & 0xe) << 1);
      if ((uVar14 != 0) && (vdp_scanline < 0xdf)) {
        bVar15 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar14 + (uint)(bVar15 >> 5) * 0x40] = uVar4;
      }
      uVar18 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar14] = uVar4;
      DAT_0208f354 = 1;
      if (uVar14 == uVar18) {
        _DAT_05000200 = uVar4;
      }
    }
    else if (uVar14 == 5) {
      uVar14 = vdp_address & 0x7f;
      if (0x4f < uVar14) {
        vdp_address = uVar14;
        return;
      }
      uVar18 = vdp_address & 0x7e;
      vdp_address = uVar14;
      *(ushort *)((int)&vdp_vsram + uVar18) = uVar4;
    }
    else if (uVar14 == 1) {
      uVar14 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar14) == uVar18) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar14) = uVar4;
      }
      else {
        (&vdp_vram)[uVar14] = uVar5;
        (&vdp_vram_odd_byte_base)[uVar14] = bVar15;
        uVar18 = (uVar9 & 0xffff) >> 8 | (uVar9 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar14) {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (uVar14 < iVar12 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar14 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar14)) {
        bVar21 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar14 - vdp_plane_a_name_table_base,uVar18);
        bVar21 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar14) && (uVar14 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar14 - vdp_plane_b_name_table_base,uVar18);
        bVar21 = true;
      }
      if ((vdp_window_name_table_base <= uVar14) && (uVar14 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar14 - vdp_window_name_table_base,uVar18);
      }
      if (!bVar21) {
        update_cached_ds_pattern_from_vdp_word(uVar14,uVar18);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar18 = (uVar9 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar18 = uVar9 & 0xff;
    uVar14 = (uVar9 & 0xffff) >> 8 & 0x1f;
    if ((uVar9 & 0xc000) != 0x8000) {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c | (uVar9 & 0xffff) >> 0xe;
      vdp_address = vdp_address & 0xc000 | uVar9 & 0x3fff;
      return;
    }
    vdp_access_code = 0;
    iVar12 = 1 - (uint)vdp_mode_5_bit;
    if (1 < vdp_mode_5_bit) {
      iVar12 = 0;
    }
    if (uVar14 < 0xc) {
      iVar12 = 0;
    }
    (&vdp_registers)[uVar14] = bVar15;
    if (iVar12 == 0) {
      switch(uVar14) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar18 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar18 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar15 & 4;
        DAT_0b00362f = (byte)(uVar18 >> 6) & 1;
        uVar14 = uVar18 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar18 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar18 >> 4) & 1;
        DAT_023ddb06 = (char)uVar14;
        if (uVar14 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar9 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar9 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (uVar9 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x800;
        }
        else {
          iVar12 = 0x1000;
        }
        DAT_023dc8bc = iVar12 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar9 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar9 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar12 = (uVar9 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar12;
        vdp_sprite_attribute_table_base = iVar12;
        return;
      case 7:
        DAT_0b003640 = uVar9 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar9 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar18;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar18 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar18 >> 2) & 1;
        DAT_023dcdb0 = bVar15 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar15 & 3) {
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
        uVar14 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar9 & 0x81) != 0;
        if ((uVar14 != (uVar18 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar14)) {
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
        DAT_023dcea4 = (ushort)((uVar9 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar18;
        return;
      case 0x10:
        uVar18 = uVar18 >> 4 & 3;
        uVar9 = uVar9 & 3;
        uVar14 = uVar18 | uVar9 << 4;
        if (uVar14 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar14;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar18 + uVar9 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar9];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar9;
        DAT_023dd372._0_1_ = (char)uVar18;
        return;
      case 0x11:
        uVar14 = (uVar9 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar18 >> 7);
        DAT_023ddb04 = (char)uVar14;
        if (uVar18 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar14);
        }
        else {
          DAT_023dcfa8 = (uVar9 & 0x1f) * -2 + 1;
          if (1 < uVar14) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar18 >> 7);
        DAT_020b4c10 = (uVar9 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar9 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar18;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar18 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar18 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar18 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar9 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar18 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar18 & 0x3c;
  uVar9 = vdp_address & 0x3fff | (uVar9 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar9;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar18 & 0x20) == 0) {
    return;
  }
  uVar18 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar18 = 0xffff;
  }
  vdp_dma_remaining = uVar18;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar18 = vdp_dma_source_address & 0xfffffe;
    puVar7 = (ushort *)get_vdp_dma_backing_pointer(uVar18);
    uVar11 = vdp_address;
    uVar16 = vdp_dma_remaining;
    uVar10 = vdp_scanline;
    uVar13 = vdp_access_code & 0xf;
    uVar9 = vdp_dma_remaining & 0xffff;
    if (uVar13 == 3) {
      bVar15 = (&DAT_0208ebb0)[vdp_scanline];
      uVar18 = uVar18 << 0xf;
      if (bVar15 == 200) {
        bVar15 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar16 = (uint)vdp_backdrop_color_index;
      do {
        uVar13 = (uint)*puVar7;
        uVar11 = (vdp_address & 0x7e) >> 1;
        uVar4 = (ushort)((uVar13 & 0xe0) << 2) | (ushort)((uVar13 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar13 & 0xe) << 1);
        uVar18 = uVar18 + 0x8000;
        vdp_address = vdp_address + uVar14;
        if ((uVar13 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar11]) {
          (&vdp_cram)[uVar11] = (short)(uVar13 & 0xeee);
          if ((uVar11 != 0) && (uVar10 < 0xdf)) {
            (&DAT_023dc8ca)[uVar11 + (uint)(bVar15 >> 5) * 0x40] = uVar4;
            (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar11] = uVar4;
          if (uVar11 == uVar16) {
            _DAT_05000200 = uVar4;
          }
        }
        uVar9 = uVar9 - 1 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      return;
    }
    if (uVar13 == 5) {
      uVar18 = uVar18 << 0xf;
      do {
        uVar16 = vdp_address & 0x7f;
        uVar10 = vdp_address & 0x7e;
        vdp_address = uVar16;
        if (0x4f < uVar16) break;
        uVar9 = uVar9 - 1 & 0xffff;
        uVar18 = uVar18 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar10) = *puVar7;
        puVar7 = puVar7 + 1;
        vdp_address = uVar14 + uVar16;
      } while (uVar9 != 0);
      vdp_dma_length_register = uVar9;
      vdp_dma_remaining = uVar9;
      vdp_dma_source_address = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      return;
    }
    if (uVar13 != 1) {
      vdp_dma_length_register = uVar9;
      vdp_dma_remaining = uVar9;
      vdp_dma_source_address = uVar18;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar10 = uVar14 & 0xffff;
      uVar18 = uVar18 << 0xf;
      uStack_44 = 0;
      puVar8 = puVar7;
      uVar13 = uStack_2c;
      do {
        uVar4 = *(ushort *)(&vdp_vram + uVar13);
        uVar3 = *puVar8;
        if (uVar3 != uVar4) {
          *(ushort *)(&vdp_vram + uVar13) = uVar3;
          uStack_44 = uStack_44 + 1;
        }
        uVar9 = uVar9 - 1 & 0xffff;
        uVar18 = uVar18 + 0x8000;
        (&DAT_020acbec)[uVar13 >> 1] = uVar3 != uVar4;
        uVar13 = uVar13 + uVar10 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
      uVar20 = uVar13;
      if (uVar13 <= uVar11) {
        uVar20 = uVar13 + 0x10000;
      }
      uVar18 = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar18;
        return;
      }
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        bVar21 = iVar12 + vdp_sprite_attribute_table_base < uVar13;
        DAT_020b4c15 = 1;
      }
      uVar19 = 0;
      if (((uVar11 != DAT_023dcea4) || (DAT_023dcdaa < uVar13)) && (bVar21)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar20) {
            if (DAT_023dc8b4 < uVar20) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
          }
          else {
            bVar21 = false;
          }
        }
        else {
          bVar21 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar20) {
            if (DAT_023dc8b8 < uVar20) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
          }
          else {
            bVar6 = false;
          }
        }
        else {
          bVar6 = true;
        }
        if (bVar21) {
          if ((DAT_023dc8a0 >> 1 <= uVar16) && (DAT_023dc8a4 = 1, !bVar6)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar18;
            return;
          }
          uVar9 = uStack_2c - vdp_plane_a_name_table_base;
          bVar21 = (int)uVar9 < 0;
          puVar8 = puVar7;
          if (bVar21) {
            puVar8 = (ushort *)((int)puVar7 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar9 = uStack_2c;
          }
          if (bVar21) {
            uVar9 = 0;
          }
          uVar16 = uVar20 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar20 - vdp_plane_a_name_table_base) {
            uVar16 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar8,uVar9,uVar14,uVar16);
          puVar8 = (ushort *)&vdp_address;
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar8 = (ushort *)0x0;
          bVar21 = false;
        }
        if (bVar6) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar18;
            return;
          }
          iVar12 = uStack_2c - vdp_plane_b_name_table_base;
          bVar21 = iVar12 < 0;
          if (bVar21) {
            iVar12 = 0;
            puVar8 = (ushort *)((int)puVar7 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar8 = puVar7;
          }
          uVar9 = uVar20 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar20 - vdp_plane_b_name_table_base) {
            uVar9 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar8,iVar12,uVar14,uVar9);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar7,uStack_2c - vdp_window_name_table_base & 0xffff,uVar14,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar21) {
          uVar14 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar14) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar7);
              uStack_2c = uStack_2c + uVar10 & 0xffff;
              uVar14 = uVar14 - 1 & 0xffff;
              puVar7 = puVar7 + 1;
            } while (uVar14 != 0);
            uVar19 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar7);
              }
              uStack_2c = uStack_2c + uVar10 & 0xffff;
              uVar14 = uVar14 - 1 & 0xffff;
              uVar19 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar14 != 0);
          }
        }
      }
    }
    else {
      uVar14 = uVar14 & 0xffff;
      puVar8 = puVar7;
      uVar10 = uVar9;
      uVar20 = uStack_2c;
      do {
        uVar4 = *puVar8;
        uVar10 = uVar10 - 1 & 0xffff;
        (&vdp_vram)[uVar20] = (char)(uVar4 >> 8);
        uVar18 = uVar18 + 2 & 0x1ffff | uVar19 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar20] = (char)uVar4;
        uVar20 = uVar20 + uVar14 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        bVar21 = iVar12 + vdp_sprite_attribute_table_base < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar19 = 0;
      if (((uVar11 != DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar21 = false;
          uVar19 = uVar9;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar9) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar9 != 0);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar19 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar19 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar19) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar19 = uVar19 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar19 != 0);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar19 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar19 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar9 = 0x400;
          }
          else {
            uVar9 = 0x800;
          }
          if (uVar9 <= uVar19) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar19 = uVar19 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar19 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar19 = 0;
        }
        if (!bVar21) {
          uVar9 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = uStack_2c + uVar14 & 0xffff;
            uVar9 = uVar9 - 1 & 0xffff;
            uVar19 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar9 != 0);
        }
      }
    }
    vdp_address = uVar20 & 0xffff;
    vdp_dma_length_register = uVar19;
    vdp_dma_remaining = uVar19;
    vdp_dma_source_address = uVar18;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar19 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar16 = uVar19 + uVar18;
    uVar10 = vdp_address_increment & 0xffff;
    do {
      uVar11 = uVar19 ^ 1;
      uVar19 = uVar19 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar11];
      vdp_address = vdp_address + uVar10 & 0xffff;
    } while (uVar19 != (uVar16 & 0xffff));
    if (uVar14 == 1) {
      uVar18 = uVar18 >> 1;
      uVar10 = 2;
    }
    do {
      uVar9 = uVar9 & 0xfffe;
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar21 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar21 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar21 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar21) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar18 = uVar18 - 1 & 0xffff;
      if (uVar18 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar10;
    } while( true );
  }
  return;
}


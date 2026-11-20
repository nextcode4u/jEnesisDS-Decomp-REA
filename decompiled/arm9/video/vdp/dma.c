/* ARM9 dma — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02009e3c  execute_vdp_dma_command

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void execute_vdp_dma_command(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_44;
  uint local_2c;
  
  uVar12 = vdp_dma_source_address;
  uVar13 = vdp_address_increment;
  uVar16 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar16 = 0xffff;
  }
  vdp_dma_remaining = uVar16;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar16 = vdp_dma_source_address & 0xfffffe;
    puVar4 = (ushort *)get_vdp_dma_backing_pointer(uVar16);
    uVar7 = vdp_address;
    uVar10 = vdp_dma_remaining;
    uVar14 = vdp_scanline;
    uVar8 = vdp_access_code & 0xf;
    uVar6 = vdp_dma_remaining & 0xffff;
    if (uVar8 == 3) {
      bVar9 = (&DAT_0208ebb0)[vdp_scanline];
      uVar16 = uVar16 << 0xf;
      if (bVar9 == 200) {
        bVar9 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar10 = (uint)vdp_backdrop_color_index;
      do {
        uVar8 = (uint)*puVar4;
        uVar7 = (vdp_address & 0x7e) >> 1;
        uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar8 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        vdp_address = vdp_address + uVar13;
        if ((uVar8 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar7]) {
          (&vdp_cram)[uVar7] = (short)(uVar8 & 0xeee);
          if ((uVar7 != 0) && (uVar14 < 0xdf)) {
            (&DAT_023dc8ca)[uVar7 + (uint)(bVar9 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar9] = &DAT_023dc8ca + (uint)(bVar9 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar7] = uVar1;
          if (uVar7 == uVar10) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar6 = uVar6 - 1 & 0xffff;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar8 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar10 = vdp_address & 0x7f;
        uVar14 = vdp_address & 0x7e;
        vdp_address = uVar10;
        if (0x4f < uVar10) break;
        uVar6 = uVar6 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar14) = *puVar4;
        puVar4 = puVar4 + 1;
        vdp_address = uVar13 + uVar10;
      } while (uVar6 != 0);
      vdp_dma_length_register = uVar6;
      vdp_dma_remaining = uVar6;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar8 != 1) {
      vdp_dma_length_register = uVar6;
      vdp_dma_remaining = uVar6;
      vdp_dma_source_address = uVar16;
      return;
    }
    local_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar14 = uVar13 & 0xffff;
      uVar16 = uVar16 << 0xf;
      local_44 = 0;
      puVar5 = puVar4;
      uVar8 = local_2c;
      do {
        uVar1 = *(ushort *)(&vdp_vram + uVar8);
        uVar2 = *puVar5;
        if (uVar2 != uVar1) {
          *(ushort *)(&vdp_vram + uVar8) = uVar2;
          local_44 = local_44 + 1;
        }
        uVar6 = uVar6 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar8 >> 1] = uVar2 != uVar1;
        uVar8 = uVar8 + uVar14 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
      uVar15 = uVar8;
      if (uVar8 <= uVar7) {
        uVar15 = uVar8 + 0x10000;
      }
      uVar16 = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      if (local_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar16;
        return;
      }
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar17 = iVar11 + vdp_sprite_attribute_table_base < uVar8;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa < uVar8)) && (bVar17)) {
        if ((local_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= local_2c)) {
          if (vdp_plane_a_name_table_base < uVar15) {
            if (DAT_023dc8b4 < uVar15) {
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
        if ((local_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= local_2c)) {
          if (vdp_plane_b_name_table_base < uVar15) {
            if (DAT_023dc8b8 < uVar15) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar10) && (DAT_023dc8a4 = 1, !bVar3)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          uVar6 = local_2c - vdp_plane_a_name_table_base;
          bVar17 = (int)uVar6 < 0;
          puVar5 = puVar4;
          if (bVar17) {
            puVar5 = (ushort *)((int)puVar4 + (vdp_plane_a_name_table_base - local_2c & 0xfffffffe));
            uVar6 = local_2c;
          }
          if (bVar17) {
            uVar6 = 0;
          }
          uVar10 = uVar15 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar15 - vdp_plane_a_name_table_base) {
            uVar10 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar5,uVar6,uVar13,uVar10);
          puVar5 = (ushort *)&vdp_address;
          bVar17 = true;
          local_2c = vdp_address & 0xfffe;
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
            vdp_dma_source_address = uVar16;
            return;
          }
          iVar11 = local_2c - vdp_plane_b_name_table_base;
          bVar17 = iVar11 < 0;
          if (bVar17) {
            iVar11 = 0;
            puVar5 = (ushort *)((int)puVar4 + (vdp_plane_b_name_table_base - local_2c & 0xfffffffe));
          }
          if (!bVar17) {
            puVar5 = puVar4;
          }
          uVar6 = uVar15 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar15 - vdp_plane_b_name_table_base) {
            uVar6 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar5,iVar11,uVar13,uVar6);
          bVar17 = true;
          local_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= local_2c) && (local_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar4,local_2c - vdp_window_name_table_base & 0xffff,uVar13,vdp_dma_remaining & 0xffff);
          local_2c = vdp_address & 0xfffe;
        }
        if (!bVar17) {
          uVar13 = vdp_dma_remaining & 0xffff;
          if (local_44 == uVar13) {
            do {
              update_cached_ds_pattern_from_vdp_word(local_2c,*puVar4);
              local_2c = local_2c + uVar14 & 0xffff;
              uVar13 = uVar13 - 1 & 0xffff;
              puVar4 = puVar4 + 1;
            } while (uVar13 != 0);
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[local_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(local_2c,*puVar4);
              }
              local_2c = local_2c + uVar14 & 0xffff;
              uVar13 = uVar13 - 1 & 0xffff;
              uVar12 = 0;
              puVar4 = puVar4 + 1;
            } while (uVar13 != 0);
          }
        }
      }
    }
    else {
      uVar13 = uVar13 & 0xffff;
      puVar5 = puVar4;
      uVar14 = uVar6;
      uVar15 = local_2c;
      do {
        uVar1 = *puVar5;
        uVar14 = uVar14 - 1 & 0xffff;
        (&vdp_vram)[uVar15] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar15] = (char)uVar1;
        uVar15 = uVar15 + uVar13 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar14 != 0);
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar17 = iVar11 + vdp_sprite_attribute_table_base < uVar15;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa <= uVar15)) && (bVar17)) {
        if ((local_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= local_2c)) {
          bVar17 = false;
          uVar12 = uVar6;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar6) {
            reset_background_tile_cache_at_capacity(0);
          }
          local_2c = local_2c - vdp_plane_a_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_background_tilemap_word)(0,local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar6 = uVar6 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
          bVar17 = true;
          local_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_plane_b_name_table_base <= local_2c) && (local_2c < DAT_023dc8b8)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            reset_background_tile_cache_at_capacity(1);
          }
          local_2c = local_2c - vdp_plane_b_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_background_tilemap_word)(1,local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar12 != 0);
          bVar17 = true;
          local_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_window_name_table_base <= local_2c) && (local_2c < DAT_023dc8bc)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar6 = 0x400;
          }
          else {
            uVar6 = 0x800;
          }
          if (uVar6 <= uVar12) {
            reset_background_tile_cache_at_capacity(2);
          }
          local_2c = local_2c - vdp_window_name_table_base;
          puVar5 = puVar4;
          do {
            (*write_ds_window_tilemap_word)(local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar12 != 0);
          local_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar17) {
          uVar6 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(local_2c,(uint)*puVar4 << 8 | (uint)(*puVar4 >> 8));
            local_2c = local_2c + uVar13 & 0xffff;
            uVar6 = uVar6 - 1 & 0xffff;
            uVar12 = 0;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
      }
    }
    vdp_address = uVar15 & 0xffff;
    vdp_dma_length_register = uVar12;
    vdp_dma_remaining = uVar12;
    vdp_dma_source_address = uVar16;
    break;
  case 2:
    vdp_dma_fill_pending = 1;
    break;
  case 3:
    uVar12 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar10 = uVar12 + uVar16;
    uVar6 = vdp_address & 0xffff;
    uVar14 = vdp_address_increment & 0xffff;
    do {
      uVar7 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&vdp_vram)[uVar6 ^ 1] = (&vdp_vram)[uVar7];
      uVar6 = uVar6 + uVar14 & 0xffff;
    } while (uVar12 != (uVar10 & 0xffff));
    uVar12 = vdp_address;
    if (uVar13 == 1) {
      uVar16 = uVar16 >> 1;
      uVar14 = 2;
    }
    do {
      vdp_address = uVar6;
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
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar14;
      uVar6 = vdp_address;
    } while( true );
  }
  return;
}


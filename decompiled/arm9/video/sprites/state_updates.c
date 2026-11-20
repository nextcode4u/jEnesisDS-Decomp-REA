/* ARM9 state updates — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020085b4  update_ds_sprite_position_from_genesis_attributes

void update_ds_sprite_position_from_genesis_attributes(ushort *genesis_sprite_words,int ds_sprite_index)

{
  short viewport_relative_x;
  ushort ds_sprite_y;
  ushort ds_sprite_x;
  uint uVar3;
  
  viewport_relative_x = (genesis_sprite_words[3] & 0x1ff) - (short)DAT_020993a4;
  ds_sprite_x = viewport_relative_x - 0x80;
  uVar3 = ((*genesis_sprite_words & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((emulator_option_flags & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  ds_sprite_y = (ushort)uVar3;
  if (((genesis_sprite_words[1] >> 10 & 3) == 2) && ((genesis_sprite_words[2] & 0x800) != 0)) {
    ds_sprite_x = viewport_relative_x - 0x88;
  }
  if (((genesis_sprite_words[1] >> 8 & 3) == 2) && ((genesis_sprite_words[2] & 0x1000) != 0)) {
    ds_sprite_y = ds_sprite_y - 8;
  }
  (&DAT_023dc1a8)[ds_sprite_index * 4] = (&DAT_023dc1a8)[ds_sprite_index * 4] & 0xff00;
  (&DAT_023dc1aa)[ds_sprite_index * 4] = (&DAT_023dc1aa)[ds_sprite_index * 4] & 0xfe00;
  (&DAT_023dc1a8)[ds_sprite_index * 4] = (&DAT_023dc1a8)[ds_sprite_index * 4] | ds_sprite_y & 0xff;
  (&DAT_023dc1aa)[ds_sprite_index * 4] = (&DAT_023dc1aa)[ds_sprite_index * 4] | ds_sprite_x & 0x1ff;
  return;
}


// 0x02008914  copy_sprite_attribute_buffer_to_ds_oam

/* WARNING: Removing unreachable block (ram,0x02008974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_sprite_attribute_buffer_to_ds_oam(uint sprite_count)

{
  int attribute_bytes;
  
  if (DAT_020993c0 <= sprite_count) {
    DAT_020993c0 = sprite_count;
  }
  attribute_bytes = DAT_020993c0 << 3;
  DAT_020993c0 = sprite_count;
  clean_and_invalidate_arm9_data_cache_range(&DAT_023dc1a8,attribute_bytes);
  do {
  } while( true );
}


// 0x02008984  build_ds_sprite_attributes_from_genesis_sprite_table

void build_ds_sprite_attributes_from_genesis_sprite_table(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined2 *puVar11;
  undefined *puVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 *puVar10;
  
  uVar17 = 0;
  puVar18 = &DAT_023dc1aa;
  cVar4 = DAT_023dc5b4 + '\x01';
  if ((char)(DAT_023dc5b4 + '\x01') == '\0') {
    cVar4 = DAT_023dc5b4 + '\x02';
  }
  DAT_023dc5b4 = cVar4;
  uVar14 = 0;
  do {
    puVar15 = (ushort *)(DAT_023dcdac + uVar14 * 8);
    uVar3 = puVar15[1];
    uVar20 = (uint)uVar3;
    uVar2 = puVar15[2] & 0x7ff;
    puVar16 = &DAT_023dcfb0 + uVar14 * 6;
    uVar19 = uVar2 + (byte)(&UNK_0208e528)[(uVar3 >> 8 & 3) + (uVar3 >> 8 & 0xc)];
    if (DAT_020993bc == 0) {
      if ((uVar20 & 0x7f) != ((ushort)(&DAT_023dcfb2)[uVar14 * 6] & 0x7f)) {
        DAT_020993bc = 1;
      }
      if (uVar17 != (ushort)(&DAT_023dcfb8)[uVar14 * 6]) goto LAB_02008a40;
      if (uVar2 < uVar19) {
        if ((&DAT_0209c3e0)[uVar2] == '\0') {
          pcVar8 = &DAT_0209c3e0 + uVar2;
          do {
            if (pcVar8 == (char *)((int)&DAT_0209c3dc + uVar19 + 3)) goto LAB_02008d14;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar8 == '\0');
        }
        goto LAB_02008a40;
      }
LAB_02008d14:
      if ((*(int *)puVar15 != *(int *)puVar16) ||
         (*(int *)(puVar15 + 2) != *(int *)(&DAT_023dcfb4 + uVar14 * 6))) {
        if (((&DAT_023dcfba)[uVar14 * 6] == 0) ||
           ((uVar20 != (ushort)(&DAT_023dcfb2)[uVar14 * 6] ||
            ((uint)(ushort)(&DAT_023dcfb4)[uVar14 * 6] != (uint)puVar15[2])))) goto LAB_02008a40;
        *puVar16 = *puVar15;
        (&DAT_023dcfb6)[uVar14 * 6] = puVar15[3];
        if ((((int)((puVar15[3] & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8b2) &&
            ((((puVar15[3] & 0xffff01ff) + ((puVar15[1] >> 10 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
           && (((int)((*puVar15 & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8ac &&
               ((((*puVar15 & 0xffff01ff) + ((puVar15[1] >> 8 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
              )) {
          update_ds_sprite_position_from_genesis_attributes(puVar15,uVar17);
          uVar20 = (uint)puVar15[1];
        }
        else {
          (&DAT_023dcfba)[uVar14 * 6] = 0;
          puVar18[-1] = 0x200;
          uVar20 = (uint)puVar15[1];
        }
      }
    }
    else {
LAB_02008a40:
      *puVar16 = *puVar15;
      (&DAT_023dcfb2)[uVar14 * 6] = puVar15[1];
      (&DAT_023dcfb4)[uVar14 * 6] = puVar15[2];
      uVar3 = puVar15[3];
      (&DAT_023dcfb8)[uVar14 * 6] = (short)uVar17;
      (&DAT_023dcfb6)[uVar14 * 6] = uVar3;
      uVar2 = emulator_option_flags;
      if ((int)((puVar15[3] & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8b2) {
        uVar20 = puVar15[1] >> 10 & 3;
        if ((((((puVar15[3] & 0xffff01ff) + (uVar20 + 1) * 8) - 0x80 & 0x8000) == 0) &&
            ((int)((*puVar15 & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8ac)) &&
           (uVar7 = puVar15[1] >> 8 & 3,
           (((*puVar15 & 0xffff01ff) + (uVar7 + 1) * 8) - 0x80 & 0x8000) == 0)) {
          iVar1 = (uVar7 + uVar20 * 4) * 2;
          puVar18[-1] = *(ushort *)(&DAT_0208e538 + iVar1);
          uVar3 = puVar15[2];
          if ((uVar3 & 0x8000) == 0) {
            uVar13 = 0x800;
          }
          else {
            uVar13 = 0;
          }
          *puVar18 = (ushort)((uVar3 & 0x1800) << 1) ^ 0x1000 | *(ushort *)(&DAT_0208e558 + iVar1);
          puVar18[1] = uVar13 | (ushort)((uVar3 & 0x6000) >> 1) | (ushort)((uVar17 & 0xffff) << 3);
          copy_sprite_tiles_for_sprite_shape(puVar15,param_1,uVar17);
          if ((puVar15[2] & 0x7ff) < uVar19) {
            puVar10 = &DAT_0209c3e0 + (puVar15[2] & 0x7ff);
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = 0;
              puVar10 = puVar9;
            } while (puVar9 != &DAT_0209c3e0 + uVar19);
          }
          (&DAT_023dcfba)[uVar14 * 6] = 1;
          uVar20 = (uint)puVar15[1];
          goto LAB_02008b90;
        }
      }
      uVar19 = emulator_option_flags & 0x100;
      (&DAT_023dcfba)[uVar14 * 6] = 0;
      puVar18[-1] = 0x200;
      cVar4 = DAT_023dc5b4;
      if (((uVar19 != 0) && (uVar17 < 0xc)) &&
         (((puVar15[3] & 0x1ff) == 0 && (uVar14 = *puVar15 & 0x1ff, uVar14 - 0x80 < 0xe0)))) {
        uVar20 = (uint)puVar15[1];
        puVar5 = (undefined *)(uint)(byte)(&DAT_0208eb30)[uVar14];
        iVar1 = ((puVar15[1] >> 8 & 3) + 1) * 8;
        if (puVar5 == (undefined *)0xc8) {
          puVar5 = (undefined *)(uint)(byte)(&DAT_0208eb2f)[uVar14];
        }
        bVar21 = (uVar2 & 4) != 0;
        puVar12 = puVar5;
        if (bVar21) {
          puVar12 = &DAT_0208eaf0;
        }
        puVar6 = puVar5 + iVar1;
        if (bVar21) {
          puVar6 = puVar6 + -(uint)(byte)puVar12[iVar1];
        }
        if ((undefined *)0xbe < puVar6) {
          puVar6 = (undefined *)0xbf;
        }
        if (puVar6 <= puVar5) goto LAB_02008b90;
        pcVar8 = &DAT_023dc5bc + (int)puVar5;
        do {
          puVar5 = puVar5 + 1;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
        } while (puVar5 < puVar6);
      }
      uVar20 = (uint)puVar15[1];
    }
LAB_02008b90:
    uVar2 = DAT_020993c0;
    uVar17 = uVar17 + 1;
    puVar18 = puVar18 + 4;
    uVar14 = uVar20 & 0x7f;
    if (param_2 <= uVar17 || (uVar20 & 0x7f) == 0) {
      if (uVar17 < DAT_020993c0) {
        puVar11 = &DAT_023dc1a8 + uVar17 * 4;
        uVar14 = uVar17;
        do {
          uVar14 = uVar14 + 1;
          *puVar11 = 0x200;
          puVar11 = puVar11 + 4;
        } while (uVar14 < uVar2);
      }
      copy_sprite_attribute_buffer_to_ds_oam(uVar17);
      DAT_020993bc = 0;
      return;
    }
  } while( true );
}


// 0x02008edc  initialize_ds_sprite_attribute_buffer

/* WARNING: Removing unreachable block (ram,0x02008ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_ds_sprite_attribute_buffer(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_023dc1a8;
  do {
    puVar2 = puVar1;
    *(undefined2 *)puVar2 = 0x200;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    puVar1 = puVar2 + 2;
  } while (puVar2 + 2 != &write_ds_window_tilemap_word);
  *(undefined2 *)((int)puVar2 + -0x3f2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x3ba) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ea) = 0;
  *(undefined2 *)((int)puVar2 + -0x3e2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3da) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ca) = 0;
  *(undefined2 *)((int)puVar2 + -0x3c2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3d2) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x3b2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x37a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x3aa) = 0;
  *(undefined2 *)((int)puVar2 + -0x3a2) = 0;
  *(undefined2 *)((int)puVar2 + -0x39a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x392) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x38a) = 0;
  *(undefined2 *)((int)puVar2 + -0x382) = 0;
  clean_and_invalidate_arm9_data_cache_range(&DAT_023dc1a8,0x400);
  do {
  } while( true );
}


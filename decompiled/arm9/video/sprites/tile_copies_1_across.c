/* ARM9 tile copies 1 across — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x010042c0  copy_sprite_tiles_1x1

void copy_sprite_tiles_1x1(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  *destination_obj_tile_words = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x010044d0  copy_sprite_tiles_1x2

void copy_sprite_tiles_1x2(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  *destination_obj_tile_words = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[8] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x010048c0  copy_sprite_tiles_1x3

void copy_sprite_tiles_1x3(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  *destination_obj_tile_words = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[8] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x11];
  uVar2 = source_pattern_words[0x12];
  uVar3 = source_pattern_words[0x13];
  uVar4 = source_pattern_words[0x14];
  uVar5 = source_pattern_words[0x15];
  uVar6 = source_pattern_words[0x16];
  uVar7 = source_pattern_words[0x17];
  destination_obj_tile_words[0x10] = source_pattern_words[0x10] >> 0x10 | source_pattern_words[0x10] << 0x10;
  destination_obj_tile_words[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  destination_obj_tile_words[0x18] = 0;
  destination_obj_tile_words[0x19] = 0;
  destination_obj_tile_words[0x1a] = 0;
  destination_obj_tile_words[0x1b] = 0;
  destination_obj_tile_words[0x1c] = 0;
  destination_obj_tile_words[0x1d] = 0;
  destination_obj_tile_words[0x1e] = 0;
  destination_obj_tile_words[0x1f] = 0;
  return;
}


// 0x01004f30  copy_sprite_tiles_1x4

void copy_sprite_tiles_1x4(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  *destination_obj_tile_words = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[8] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x11];
  uVar2 = source_pattern_words[0x12];
  uVar3 = source_pattern_words[0x13];
  uVar4 = source_pattern_words[0x14];
  uVar5 = source_pattern_words[0x15];
  uVar6 = source_pattern_words[0x16];
  uVar7 = source_pattern_words[0x17];
  destination_obj_tile_words[0x10] = source_pattern_words[0x10] >> 0x10 | source_pattern_words[0x10] << 0x10;
  destination_obj_tile_words[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x19];
  uVar2 = source_pattern_words[0x1a];
  uVar3 = source_pattern_words[0x1b];
  uVar4 = source_pattern_words[0x1c];
  uVar5 = source_pattern_words[0x1d];
  uVar6 = source_pattern_words[0x1e];
  uVar7 = source_pattern_words[0x1f];
  destination_obj_tile_words[0x18] = source_pattern_words[0x18] >> 0x10 | source_pattern_words[0x18] << 0x10;
  destination_obj_tile_words[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


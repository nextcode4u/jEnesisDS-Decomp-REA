// rea decompile_all
// name: FUN_02008984
// address: 0x2008984
// body: available
// range: 0x2008984-0x2008e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02008984(undefined4 param_1,uint param_2)

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
          FUN_020085b4(puVar15,uVar17);
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
      uVar2 = DAT_023cb610;
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
          FUN_020086d8(puVar15,param_1,uVar17);
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
      uVar19 = DAT_023cb610 & 0x100;
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
      FUN_02008914(uVar17);
      DAT_020993bc = 0;
      return;
    }
  } while( true );
}


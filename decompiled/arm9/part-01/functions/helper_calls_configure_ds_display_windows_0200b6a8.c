// Analysis annotation
// Role — helper calls configure ds display windows
// Basis — call context
// Calls configure ds display windows at 0x02008F7C. This file's full role is still open.

// rea decompile_all
// name: FUN_0200b6a8
// address: 0x200b6a8
// body: available
// range: 0x200b6a8-0x200baaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200b6a8(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined2 *puVar12;
  
  puVar5 = &DAT_0209cbec;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != &DAT_020acbec);
  puVar4 = (undefined4 *)&DAT_020acbec;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4bec);
  puVar8 = &DAT_023dc6b0;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_023dc7b0);
  puVar8 = &DAT_0b00364c;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)0xb0036ec);
  DAT_023ddeac = 0;
  DAT_023ddea0 = 0;
  DAT_023ddea4 = 0;
  DAT_023ddea8 = 0;
  puVar4 = (undefined4 *)&DAT_020b4c18;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4c38);
  puVar1 = &DAT_023dc8ca;
  puVar12 = &DAT_023dc94a;
  puVar3 = &DAT_023dcaca;
  puVar8 = &DAT_023dc730;
  do {
    puVar1 = puVar1 + 1;
    puVar12[-0x40] = 0x8000;
    *puVar12 = 0x8000;
    puVar12[0x40] = 0x8000;
    *puVar8 = 0x8000;
    puVar3[-0x40] = 0x8000;
    *puVar3 = 0x8000;
    puVar3[0x40] = 0x8000;
    puVar12 = puVar12 + 1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar1 != &DAT_023dc94a);
  puVar4 = &DAT_023ddb0c;
  do {
    puVar7 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_023dde8c);
  DAT_023dde90 = 0;
  DAT_023dde8c = 0;
  puVar5 = &DAT_023dde95;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x23dde9d);
  DAT_0b000084 = 0x200;
  DAT_020b4c14 = 0;
  DAT_0b000098 = 0x10;
  DAT_020b4bf5 = 0;
  DAT_020b4bf4 = 0;
  DAT_020b4bf0 = 0;
  DAT_020b4bf1 = 0;
  DAT_0b003644 = 0;
  DAT_0b00362c = 0;
  DAT_023ddeb4 = 0;
  DAT_0b000074 = &DAT_0209cbec;
  DAT_0b0000a0 = 0;
  DAT_0b000044 = 0;
  DAT_0b000054 = 0;
  DAT_0b000064 = 0;
  DAT_0b000048 = 0;
  DAT_0b000058 = 0;
  DAT_0b000068 = 0;
  DAT_0b00004c = 0;
  DAT_0b00005c = 0;
  DAT_0b00006c = 0;
  DAT_0b000050 = 0;
  DAT_0b000060 = 0;
  DAT_0b000070 = 0;
  DAT_0b000078 = 0;
  DAT_0b00007c = 0;
  DAT_0b000080 = 0;
  DAT_0b000088 = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  DAT_0b00009c = 0;
  DAT_023dde94 = 0;
  DAT_023ddb05 = 0;
  DAT_0b003630 = 2;
  DAT_023ddb06 = 0;
  DAT_020b4bf2 = 0;
  DAT_0b00362f = 0;
  DAT_020b4c05 = 0;
  DAT_020b4c04 = 0;
  DAT_023dcdb0 = 0;
  DAT_023dcfac = 0;
  DAT_023ddeb0 = 0;
  DAT_023ddb04 = 0;
  DAT_020b4bfc = 0;
  DAT_0b003638 = 0;
  DAT_0b003634 = 0;
  DAT_023dcea6 = 0;
  DAT_023dd372._0_1_ = 0;
  DAT_023dcdaa = 0;
  DAT_023dcea4 = 0;
  DAT_020b4bf8 = 0;
  DAT_020b4bf7 = 0;
  DAT_020b4bf6 = 0;
  DAT_020b4c08 = 0;
  DAT_0b00363c = 0;
  DAT_020b4c0a = 0;
  DAT_023dc8ae = 0x140;
  DAT_023dc8b2 = 0x140;
  DAT_023dd370 = 0xf0;
  DAT_023dc8ac = 0xf0;
  DAT_023dc8c8 = 0;
  DAT_023dc8b0 = 0;
  DAT_023dcfa8 = 0;
  DAT_023dceac = 0;
  DAT_023ddb08 = 0;
  DAT_020b4c07 = 0;
  DAT_020b4c00 = 0;
  DAT_020b4c06 = 0;
  DAT_023dceb0 = &DAT_020acbec;
  DAT_023dcdac = &DAT_0209cbec;
  DAT_0b003648 = &DAT_0209cbec;
  DAT_023dc8c4 = 0;
  FUN_02008f7c();
  puVar1 = &DAT_023dd744;
  puVar3 = &DAT_023dd384;
  DAT_023dc8a0 = 0x800;
  DAT_023dc8a8 = 0;
  DAT_023dc8a4 = 0;
  DAT_023dcfa4 = 0;
  puVar8 = &DAT_023dcbca;
  puVar5 = &DAT_023dceb4;
  do {
    *puVar1 = 0;
    puVar12 = puVar1 + 0xf0;
    puVar1 = puVar1 + 1;
    *puVar3 = 0;
    *puVar12 = 0;
    puVar3[0xf0] = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar1 != &DAT_023dd924);
  iVar9 = 0;
  do {
    *(undefined4 *)((int)&DAT_023dd372 + iVar9 + 2) = 0;
    *(undefined4 *)((int)&DAT_023dc8b4 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x10);
  uVar2 = 0;
  cVar11 = '\0';
  DAT_023dcdb4 = 0;
  do {
    cVar11 = cVar11 + '\x01';
    pcVar10 = &DAT_023dcdb4 + uVar2;
    do {
      uVar2 = uVar2 + 1;
      if (0xef < uVar2) {
        return;
      }
      pcVar10 = pcVar10 + 1;
      *pcVar10 = cVar11;
    } while (uVar2 % 7 != 0);
  } while( true );
}


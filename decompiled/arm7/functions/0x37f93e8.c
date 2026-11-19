// rea decompile_all
// name: FUN_037f93e8
// address: 0x37f93e8
// body: available
// range: 0x37f93e8-0x37f95e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f93e8(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_2c;
  
  iVar7 = 0;
  piVar9 = &DAT_03806e88;
  DAT_03806ea0 = param_3;
  do {
    piVar10 = piVar9 + 1;
    *piVar9 = iVar7;
    iVar7 = iVar7 + param_3;
    piVar9 = piVar10;
  } while (piVar10 != &DAT_03806ea0);
  FUN_03802648(&DAT_03807308,0,0x978);
  DAT_03806ea8 = param_1;
  DAT_03806eac = param_2;
  if (param_2 == 0) {
    uVar12 = 0;
    DAT_03807300 = 0;
  }
  else {
    uVar12 = FUN_03801eb0(param_1);
    uVar13 = FUN_03801eb0(param_2);
    uVar13 = FUN_03801f8c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x40620000);
    uVar12 = FUN_0380221c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    FUN_03801f8c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40f00000);
    DAT_03807300 = FUN_03802484();
  }
  local_2c = 0;
  do {
    iVar7 = 0;
    piVar9 = (int *)(&DAT_038070d4 + local_2c * 0x80);
    piVar10 = (int *)(&DAT_03806ed4 + local_2c * 0x80);
    do {
      DAT_03806eb4 = (undefined4)((ulonglong)uVar12 >> 0x20);
      DAT_03806eb0 = (undefined4)uVar12;
      cVar1 = (&DAT_03806cb4)[iVar7 + local_2c * 0x20];
      uVar12 = FUN_03801eb0((int)cVar1);
      iVar7 = iVar7 + 1;
      if (cVar1 < 0) {
        uVar12 = FUN_03801b7c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40700000);
      }
      uVar13 = FUN_03801f8c(0,0x40500000,DAT_03806eb0,DAT_03806eb4);
      FUN_03801f8c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                   (int)((ulonglong)uVar13 >> 0x20));
      iVar4 = FUN_03802428();
      *piVar10 = iVar4;
      *piVar9 = -iVar4;
      uVar12 = CONCAT44(DAT_03806eb4,DAT_03806eb0);
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 != 0x20);
    local_2c = local_2c + 1;
  } while (local_2c != 4);
  uVar12 = FUN_03801f8c(0,0x40a00000,DAT_03806eb0,DAT_03806eb4);
  iVar7 = 0;
  puVar2 = &DAT_03807820;
  do {
    uVar13 = FUN_03801eb0(iVar7);
    FUN_03801f8c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
    uVar5 = FUN_03802484();
    iVar7 = iVar7 + 1;
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 0x1000);
  puVar11 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar2 = &DAT_03807768;
  do {
    puVar2[-0xe4] = 0;
    iVar7 = 0;
    puVar6 = puVar11;
    do {
      iVar4 = iVar7;
      iVar7 = iVar4 + 1;
      *(undefined1 *)((int)puVar6 + 0x17) = 0;
      *(undefined2 *)((int)puVar6 + 0x1a) = 0x3ff;
      puVar6 = puVar6 + 0xc;
    } while (iVar7 != 4);
    puVar11 = puVar11 + 0x36;
    puVar2 = puVar2 + 0x36;
  } while (puVar11 != &DAT_03807818);
  FUN_037f8e1c(0xb6,iVar4 + 0xbd);
  FUN_037f8e1c(0x1b6,0xc0);
  FUN_037f8e1c(0xb5,0xc0);
  FUN_037f8e1c(0x1b5,0xc0);
  FUN_037f8e1c(0xb4,0xc0);
  FUN_037f8e1c(0x1b4,0xc0);
  uVar8 = 0xb2;
  do {
    FUN_037f8e1c(uVar8,0);
    uVar3 = uVar8 | 0x100;
    uVar8 = uVar8 - 1;
    FUN_037f8e1c(uVar3,0);
  } while (uVar8 != 0x2f);
  FUN_037f8e1c(0x26,0);
  FUN_037f8e1c(0x25,0);
  FUN_037f8e1c(0x24,0);
  FUN_037f8e1c(0x23,0);
  FUN_037f8e1c(0x22,0);
  FUN_037f8e1c(0x21,0);
  FUN_037f8e1c(0x20,0);
  DAT_03807818 = 0;
  return;
}


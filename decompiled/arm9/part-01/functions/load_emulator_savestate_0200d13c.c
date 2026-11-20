// Analysis annotation
// Role — load emulator savestate
// Basis — reviewed
// Reads the numbered savestate and restores serialized emulator state.

// rea decompile_all
// name: FUN_0200d13c
// address: 0x200d13c
// body: available
// range: 0x200d13c-0x200d4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d13c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  
  if (DAT_020b4c4c == 0) {
    FUN_0200d03c();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  local_2c = 0;
  uVar3 = FUN_0200d0b8(param_1);
  iVar4 = FUN_02081588(uVar3,&DAT_0208f074);
  if (iVar4 != 0) {
    thunk_FUN_0208024c(3);
    FUN_02008f7c();
    FUN_020059f0();
    FUN_02081788(&DAT_023eb314,4,1,iVar4);
    FUN_02081788(iVar1,4,8,iVar4);
    FUN_02081788(iVar1 + 0x20,4,8,iVar4);
    FUN_02081788(iVar1 + 0x40,4,1,iVar4);
    FUN_02081788(iVar1 + 0x44,4,1,iVar4);
    FUN_02081788(iVar1 + 0x48,4,1,iVar4);
    FUN_02081788(iVar1 + 0x4c,4,1,iVar4);
    FUN_02081788(iVar1 + 0x50,4,1,iVar4);
    FUN_02081788(iVar1 + 0x8c,4,1,iVar4);
    FUN_02081788(iVar1 + 0x90,4,1,iVar4);
    FUN_02081788(iVar1 + 0x94,4,1,iVar4);
    if (1 < (byte)DAT_023eb314) {
      FUN_02081788(iVar1 + 0x98,4,1,iVar4);
    }
    FUN_02081788(iVar1 + 0x9c,4,1,iVar4);
    FUN_02081788(&local_2c,4,1,iVar4);
    *(undefined1 *)(iVar1 + 0xa0) = local_2c._3_1_;
    *(char *)(iVar1 + 0xa1) = (char)((uint)local_2c >> 0x10);
    *(char *)(iVar1 + 0xa2) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa3) = (char)local_2c;
    FUN_02081788(&local_2c,4,1,iVar4);
    *(char *)(iVar1 + 0xa4) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa5) = (char)local_2c;
    FUN_02081788(DAT_023eb31c,1,0x10000,iVar4);
    FUN_02081788(DAT_023eb320,1,0x18,iVar4);
    FUN_02081788(DAT_023eb324,2,0x40,iVar4);
    FUN_02081788(DAT_023eb328,2,0x28,iVar4);
    FUN_02081788(DAT_023eb32c,1,0x10000,iVar4);
    if (1 < (byte)DAT_023eb314) {
      FUN_02081788(DAT_023eb338,1,0x2000,iVar4);
      FUN_02081788(iVar2 + 0x404,1,0x5c,iVar4);
      FUN_02081788(DAT_023eb33c,1,0x100,iVar4);
      FUN_02081788(DAT_023eb340,1,0x100,iVar4);
      FUN_02081788(DAT_023eb344,1,0x20,iVar4);
      FUN_02081788(&local_2c,4,1,iVar4);
      DAT_02099000 = (undefined1)((uint)local_2c >> 0x10);
      DAT_02099001 = (undefined1)((uint)local_2c >> 8);
      DAT_0208f349 = (undefined1)local_2c;
      FUN_02081788(&local_2c,4,1,iVar4);
      FUN_02004448(local_2c);
      FUN_02081788(&local_2c,4,1,iVar4);
      *(undefined1 *)(iVar2 + 0x4a4) = (undefined1)local_2c;
      *(undefined1 *)(iVar2 + 0x4a5) = local_2c._1_1_;
      *(undefined1 *)(iVar2 + 0x4a6) = local_2c._2_1_;
      *(undefined1 *)(iVar2 + 0x4a7) = local_2c._3_1_;
    }
    FUN_02081020(iVar4);
    FUN_02009cf0();
    FUN_02005164(iVar1);
    if (1 < (byte)DAT_023eb314) {
      FUN_0200500c(iVar2);
      FUN_020063e8();
    }
    thunk_FUN_020801fc(3);
  }
  return;
}


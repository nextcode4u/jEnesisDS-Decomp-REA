// rea decompile_all
// name: FUN_0200d4c8
// address: 0x200d4c8
// body: available
// range: 0x200d4c8-0x200d80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d4c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_1c;
  
  if (DAT_020b4c4c == 0) {
    FUN_0200d03c();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  uVar3 = FUN_0200d0b8(param_1);
  DAT_023eb314 = 0x4a530003;
  iVar4 = FUN_02081588(uVar3,&DAT_0208f070);
  if (iVar4 != 0) {
    thunk_FUN_0208024c(3);
    FUN_0200526c(iVar1);
    FUN_02004f70(iVar2);
    FUN_020822e0(&DAT_023eb314,4,1,iVar4);
    FUN_020822e0(iVar1,4,8,iVar4);
    FUN_020822e0(iVar1 + 0x20,4,8,iVar4);
    FUN_020822e0(iVar1 + 0x40,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x44,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x48,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x4c,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x50,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x8c,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x90,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x94,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x98,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x9c,4,1,iVar4);
    local_1c = (uint)*(byte *)(iVar1 + 0xa1) << 0x10 | (uint)*(byte *)(iVar1 + 0xa0) << 0x18 |
               (uint)*(byte *)(iVar1 + 0xa3) | (uint)*(byte *)(iVar1 + 0xa2) << 8;
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0xa4),*(undefined1 *)(iVar1 + 0xa5));
    FUN_020822e0(&local_1c,4,1,iVar4);
    FUN_020822e0(DAT_023eb31c,1,0x10000,iVar4);
    FUN_020822e0(DAT_023eb320,1,0x18,iVar4);
    FUN_020822e0(DAT_023eb324,2,0x40,iVar4);
    FUN_020822e0(DAT_023eb328,2,0x28,iVar4);
    FUN_020822e0(DAT_023eb32c,1,0x10000,iVar4);
    FUN_020822e0(DAT_023eb338,1,0x2000,iVar4);
    FUN_020822e0(iVar2 + 0x404,1,0x5c,iVar4);
    FUN_020822e0(DAT_023eb33c,1,0x100,iVar4);
    FUN_020822e0(DAT_023eb340,1,0x100,iVar4);
    FUN_020822e0(DAT_023eb344,1,0x20,iVar4);
    local_1c = (uint)DAT_0208f349 | (uint)DAT_02099000 << 0x10 | (uint)DAT_02099001 << 8;
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = FUN_02004438();
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = *(uint *)(iVar2 + 0x4a4);
    FUN_020822e0(&local_1c,4,1,iVar4);
    FUN_02081020(iVar4);
    FUN_02005164(iVar1);
    FUN_0200500c(iVar2);
    thunk_FUN_020801fc(3);
  }
  return;
}


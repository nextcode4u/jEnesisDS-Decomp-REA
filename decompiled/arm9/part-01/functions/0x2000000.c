// rea decompile_all
// name: arm9_entry
// address: 0x2000000
// body: available
// range: 0x2000000-0x2000157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm9_entry(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  _DAT_04000208 = 0x4000000;
  _DAT_04000304 = 0x8203;
  coproc_moveto_Control(0x2078);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_Entire_Data_cache(0);
  coproc_moveto_Data_Synchronization(0);
  coprocessor_moveto(0xf,0,0,0xb00000a,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,1,0x20,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,0,0x4000033,in_cr6,in_cr0);
  coprocessor_moveto(0xf,0,0,0x200002b,in_cr6,in_cr1);
  coprocessor_moveto(0xf,0,0,0x37f801d,in_cr6,in_cr2);
  coprocessor_moveto(0xf,0,0,0x8000035,in_cr6,in_cr3);
  coprocessor_moveto(0xf,0,0,0xb00001b,in_cr6,in_cr4);
  coprocessor_moveto(0xf,0,0,0x100001d,in_cr6,in_cr5);
  coprocessor_moveto(0xf,0,0,0xffff001d,in_cr6,in_cr6);
  coprocessor_moveto(0xf,0,0,0x240002b,in_cr6,in_cr7);
  coproc_moveto_Domain_Access_Control(6);
  coproc_moveto_Translation_table_base_0(0x42);
  coproc_moveto_Translation_table_base_1(0x42);
  coprocessor_moveto(0xf,0,3,0x36636333,in_cr5,in_cr0);
  coprocessor_moveto(0xf,0,2,0x36333333,in_cr5,in_cr0);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x51005);
  uVar2 = FUN_02000180(0x1f,&DAT_020936f0,0x1000000);
  FUN_02000180(uVar2,&DAT_02090004,&DAT_0b000000);
  FUN_0200015c(&DAT_02098f70,0x3523e0);
  FUN_0200015c(0xb0036ec,0);
  DAT_020b4ce0 = 0x23ff000;
  thunk_FUN_020805e8();
  thunk_FUN_020805e8(0,0);
  _LAB_027ffe78 = 0xeafffffe;
  (*(code *)&LAB_027ffe78)();
  return;
}


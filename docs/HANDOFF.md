# jEnesisDS 0.7.4 analysis handoff

Use `descriptive-decomp` to trace the released Nintendo DS emulator by subsystem. The annotation pass identified 2,336 ARM9 opcode dispatch targets and 128 ARM7 dispatch targets. The branch preserves the REA pseudocode for all 3,083 indexed routines. A separate reference rebuild uses the original DS ROM as input. The source-only emulator work lives on the [BlocksDS port branch](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/blocksds-port).

Follow the [reading guide](READING-GUIDE.md) to understand a feature. Use the [worked trace](VERIFYING-A-TRACE.md) to check a routine against the dispatch table and ARM instructions.

## Folder map

```text
decompiled/
  arm9/
    cpu/
      m68k/        Instruction families, addressing modes, and bus access
        shifts_and_bits/  Shifts, rotates, bit tests, and bit changes
      z80/         Base and prefixed instructions, bus control, and timing
        ed_prefix/          ED operands and operations
        indexed/            IX and IY addressing and register transfers
        indexed_bit_set_and_reset/  SET and RES folders with a file per bit
    frontend/      ROM browser, settings, UI, and input
    platform/      DS services, runtime, and interworking veneers
    storage/       Cartridge loading, FAT, SRAM, save states, and LZSS
    system/        Startup, emulator control, and IPC
    video/         VDP registers, timing, and DS graphics
      vdp/         Display setup, port access, DMA, and background tilemaps
      sprites/     Genesis tile copies and DS sprite attribute updates
  arm7/
    audio/         Service, timers, PSG, DAC, and YM2612
      ym2612/
        render/    One file per FM algorithm, including its silent variants
    platform/      Startup, IPC, interrupts, BIOS, runtime, and peripherals
```

The 256 module files group routines by processor and subsystem. The largest 68000 word and long MOVE groups also use the destination addressing mode from a representative opcode. Z80 modules use instruction family and operand type. Routines are in ascending address order within each module. The branch keeps working names in short headers and detailed annotations in two processor indexes.

The latest review replaced 186 provisional labels with observed behavior or branch destinations. Open questions about callers, original symbols, and library versions are recorded below.

## Remaining questions

| Address or area | Confirmed behavior | Open question |
| --- | --- | --- |
| `0x02000310` | Returns the emulated 68000 PC as the difference between the host PC pointer and mapped base. | Find a caller or address reference that establishes when this accessor runs. [PC accessor](../decompiled/arm9/cpu/m68k/cycle_budget.c#L5) |
| `0x020737b8` | Selects a fixed ATA register map and calls the probe. | Identify the exact slot-2 adapter from the register table or period library sources. |
| DS runtime | ARM and Thumb branch entries now link to their observed destinations. The startup and cache routines have documented machine behavior. | Identify the exact libnds revision and recover original symbol names where the library match is still missing. |

The index records the behavior supported by the available evidence. An entry can have a verified operation and still have an unknown caller, original symbol, or hardware revision.

## Trace a routine

1. Run `python3 scripts/find_routine.py 0x0200d13c` to locate the save-state loader. The command accepts working names and Ghidra symbols as well as addresses. You can also browse the [ARM9 index](../decompiled/arm9/functions.tsv) or [ARM7 index](../decompiled/arm7/functions.tsv).
2. Open `module` relative to that processor’s folder and go to `line`. The preceding line contains the address and working name. The `line_count` column gives the extent of the original REA body in the module.
3. Use `ghidra_symbol` and the address to find the listing in Ghidra. For a dispatch handler, check caller entries for aliases and confirm operand behavior against the listing.

| Area | Entry points |
| --- | --- |
| ARM9 boot and emulator | `0x02000000` · `0x020011e4` · [Startup](../decompiled/arm9/system/startup.c#L5) · [Emulator](../decompiled/arm9/system/emulator.c#L343) |
| Browser and ROM loading | `0x020034b0` · `0x02001d40` · [Browser loop](../decompiled/arm9/frontend/rom_browser.c#L187) · [Cartridge loader](../decompiled/arm9/storage/cartridge.c#L260) |
| Save states | `0x0200d13c` · `0x0200d4c8` · [Load](../decompiled/arm9/storage/save_states.c#L356) · [Write](../decompiled/arm9/storage/save_states.c#L438) |
| CPU dispatch examples | `0x01003d00` · `0x01000020` · [68000 NOP](../decompiled/arm9/cpu/m68k/exceptions_and_control.c#L157) · [Z80 NOP](../decompiled/arm9/cpu/z80/control_and_io/flags_io_and_cpu_control.c#L5) |
| ARM7 startup and audio | `0x037f8000` · `0x037f81f4` · [Startup](../decompiled/arm7/platform/startup.c#L5) · [Audio service](../decompiled/arm7/audio/service.c#L5) |
| Sound generation | `0x037f86f4` · `0x037f95fc` · [PSG](../decompiled/arm7/audio/psg.c#L59) · [FM channel](../decompiled/arm7/audio/ym2612/channel_rendering.c#L127) |
| ARM7 IPC | `0x037fc218` · `0x037fc468` · [Audio command](../decompiled/arm7/platform/ipc.c#L16) · [FIFO interrupt](../decompiled/arm7/platform/ipc.c#L190) |

| Index basis | What it tells you |
| --- | --- |
| `reviewed` | The description comes from inspecting the routine or related code. Read the note for any remaining unknowns. |
| `dispatch table` | One or more table slots identify the incoming opcode or selector. Several slots can share a handler. |
| `library match` | The routine was matched to a known library implementation. |
| `control flow`, `call context`, `pseudocode clue` | The label is a working interpretation based on the available evidence. |
| `unresolved` | The role still needs investigation. |

Use the ARM listing to resolve machine flags, indirect branches, and overlapping symbols. Opcode decoding references are available in the original manuals. [Motorola M68000 reference](https://www.nxp.com/docs/en/reference-manual/M68000PRM.pdf) · [Zilog Z80 manual](https://www.zilog.com/docs/z80/um0080.pdf)

## ROM and memory layout

| Processor | ROM offset | Load and entry | Image size |
| --- | --- | --- | --- |
| ARM9 | `0x00000200` | `0x02000000` | `0x98f70` bytes |
| ARM7 | `0x00099200` | `0x037f8000` | `0xed94` bytes |

ARM9 startup copies from `0x020936f0` to `0x01000000` for ITCM and from `0x02090004` to `0x0b000000` for DTCM. ARM7 BSS spans `0x03806d94` through `0x0380becc` exclusive. See the [NDS layout and hashes](../extracted/nds-layout.json) and [header evidence](../evidence/nds-header.txt).

The ARM9 68000 table starts at `0x02032c28` and has 65,536 little-endian pointers. Entry `0x4e71` resolves to the NOP handler at `0x01003d00`. The Z80 analysis seeds 1,328 contiguous pointers at `0x020153f0`. The ARM7 table at `0x03800e50` contains 128 pointers followed by a literal referring to the table.

## Validate and reproduce

Run these checks from the repository root. See the [build instructions](../README.md#matching-rom-rebuild-in-wsl) for the original ROM and the r20 toolchain.

```bash
python3 scripts/check_pseudocode.py
python3 rebuild/build.py --tool-prefix /path/to/devkitARM/bin/arm-eabi-
cmp input/jEnesisDS.nds build/jEnesisDS-0.7.4-rebuilt.nds
```

The checker validates the address labels, index coverage, and `body_sha256` against the grouped bytes. `rea_sha256` records the complete original per-function REA export, including the provider header. The earlier named snapshot contains the per-function files and original export metadata, including provider fingerprints, code ranges, and limitations. The grouping removes the repeated provider and annotation headers while preserving the indexed pseudocode bytes. [Named snapshot and original export metadata](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/ab34a829297fb07158fcfd40cae203aae76f6512/decompiled)

The recovered ARM9 startup matches the devkitARM r20 startup object. Several runtime routines match r20’s GCC 4.1.1 libraries. Eighteen object sections match libfat-nds 20070127 after accounting for relocations. The exact libnds revision remains open. The reference ROM booted in melonDS 1.1 and ran a red-and-cyan Genesis VDP diagnostic through DLDI. [Period devkitPro build configuration](https://github.com/devkitPro/buildscripts/blob/dbc4d7d1aa052767680e73f3604f6ae1d486ac31/build-devkit.sh)

To create a fresh raw analysis, use WSL with Python 3, ripgrep, GNU ARM binutils, JDK 21, Ghidra 12.1.4, and REA 6.9.0 with Node.js 24.22.3. Set `GHIDRA_INSTALL_DIR` or `ARM_TOOL_PREFIX` for custom installs. The scripts use compatible cached tools in `~/.cache/jenesisds-decomp` or REA on `PATH`. The default GNU ARM binutils prefix is `/opt/devkitpro/devkitARM/bin/arm-none-eabi-`.

```bash
bash scripts/build_ghidra.sh
bash scripts/decompile.sh
```

Keep each local Ghidra `.gpr` file beside its `.rep` directory. The build stops when the project already exists. Both scripts accept `arm9` or `arm7`. The export resumes when a matching journal exists and writes raw files beneath `build/rea-decompiled/` and logs beneath `build/rea-evidence/`. Set `REA_OUTPUT_DIR` and `REA_EVIDENCE_DIR` to override those destinations. Fresh raw exports include the address slices used for parallel REA jobs.

For subsequent analysis, keep working annotations in the processor indexes and use the existing subsystem modules. Run the checker after changes to module locations or index line ranges. Capture any changes to a bootable rebuild or to the BlocksDS port on the corresponding branch.

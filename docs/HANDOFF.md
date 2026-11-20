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

The 256 module files group routines by processor and subsystem. The largest 68000 word and long MOVE groups also use the destination addressing mode from a representative opcode. Z80 modules use instruction family and operand type. Routines are in ascending address order within each module. Names appear in the pseudocode declarations and references. The processor indexes record their original Ghidra symbols, and each `variables.tsv` records renamed variables with evidence and scope.

The classification review replaced 186 provisional labels with observed behavior or branch destinations. The indexes distinguish documented operations from symbol matches.

## Standalone 68000 PC accessor

The routine at `0x02000310` computes the guest PC from the host fetch pointer, mapped base, and retained guest page bits. Ghidra shows no reference to the entry. A scan of the ARM9 and ARM7 images and the ARM9 ITCM copy found no address literal or direct call. The word at `0x02000308` decodes as a branch if treated as ARM code, but `0x020002e4` loads that word as the DTCM base and returns before it. An indirect call built at runtime remains possible. The interrupt entry at `0x01002ff0` and the save-state encoder calculate the guest PC themselves. [Accessor](../decompiled/arm9/cpu/m68k/cycle_budget.c#L5) · [Save-state encoder](../decompiled/arm9/storage/save_states.c#L209)

## Nintendo DS SDK provenance

The released ROM uses routines from several points in libnds history. The evidence below identifies source and object matches. The original project configuration and exact checkout used to assemble the linked SDK remain unavailable.

| Routines | ROM locations | Match |
| --- | --- | --- |
| ARM7 touchscreen | `0x03801244`, `0x03801310`, `0x03801360`, `0x0380152c` | April 2006 `touch.c`, built with r20 `-O2`. The four functions match after relocation masking. The December 2006 replacement changes the sampling and coordinate routines. [April touchscreen source](https://github.com/devkitPro/libnds/blob/79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a/source/arm7/touch.c) · [December change](https://github.com/devkitPro/libnds/commit/6a053841ce53e4bb52262f1ffe67bf7bcbfbc2b6) |
| ARM7 RTC | `0x03801060` through `0x03801200` | Four routines match April 2006 `clock.c` with r20 `-O2`. The transaction code differs from the October 2007 source. [April RTC source](https://github.com/devkitPro/libnds/blob/79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a/source/arm7/clock.c) |
| ARM9 Slot-1 card | `0x0207fda8`, `0x0207fdcc`, `0x0207fe0c` | Three routines match April 2006 `card.c` with r20 `-O2`. The October 2007 object differs at one byte of `cardWriteCommand` within that symbol's range. [April card source](https://github.com/devkitPro/libnds/blob/79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a/source/common/card.c) |
| IRQ setup | ARM9 `0x02080098` through `0x0208024c`, ARM7 `0x03801564` through `0x038016d8` | The February and October 2007 source snapshots reproduce the identified functions with r20, using `-O2` for the setup functions and `-Os` for `irqEnable`. The December 2007 consolidation changes `irqSet` and `irqClear`. [October IRQ source](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/common/interrupts.c) · [December change](https://github.com/devkitPro/libnds/commit/f959258b2e37af19d61161ee07b481c0a59796b9) |
| BIOS, video, and data cache | ARM9 `0x02080310`, `0x0207fc98`, `0x02080298`, ARM7 `0x03801780` | Matching code sections in the 20071023 archives are ARM9 `biosCalls.o`, `video.o`, and `dcache.o`, and ARM7 `biosCalls.o`. The 20060201 archive also matches the ARM9 data-cache code. [Period libnds archives](https://wii.leseratte10.de/devkitPro/libnds/) |
| ARM9 IRQ dispatcher | ITCM `0x010057a8` | Related to the October 2007 dispatcher. The ROM saves the interrupt-enable register, masks the active source before invoking the callback, and restores the enable mask afterward. These instructions differ from the archived object. [October dispatcher source](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/common/interruptDispatcher.s) |

For the source comparisons, use GCC 4.1.1 from devkitARM r20. Compile the historical files with `-Iinclude -fomit-frame-pointer -ffast-math -mthumb -mthumb-interwork` and the optimization above. Use `-DARM7 -mcpu=arm7tdmi -mtune=arm7tdmi` or `-DARM9 -march=armv5te -mtune=arm946e-s`. In the object listing, compare each symbol's instruction bytes and account for the relocations shown by `arm-none-eabi-objdump -dr`. For archived sections, extract members with `arm-none-eabi-ar x` and inspect the code and relocations the same way.

The r20 startup objects also close two runtime symbol questions. The bytes at ARM9 `0x02000220` and ARM7 `0x037f80d0` are the concatenated `.init` sections of `crti.o` and `crtn.o`, establishing both entries as `_init`. The `isatty` relocation from newlib's `__smakebuf` resolves to ARM9 `0x020850a0`, where the ROM returns zero.

## CompactFlash driver identification

The original ARM9 image contains three CompactFlash startup entries from libfat-nds 20070127. In each case, the descriptor's startup pointer selects the Thumb entry, the nine register addresses match the object's table, and the instructions match after accounting for relocation fields. MPCF and SCCF share the same register addresses. The descriptor IDs and the SuperCard mode change distinguish their startup paths. [Period libfat-nds archive](https://sourceforge.net/projects/ndslibris/files/tool/devkitpro/r23b/libfat-nds-20070127.tar.bz2/download)

| Driver | Thumb entry | ATA register table | Library object |
| --- | --- | --- | --- |
| M3CF | `0x02073274` | `0x0208ed0c` | `io_m3cf.o` |
| MPCF | `0x020737b8` | `0x0208ed70` | `io_mpcf.o` |
| SCCF | `0x0207478c` | `0x0208ee04` | `io_sccf.o` |

To check MPCF, extract `lib/libfat.a` from the archive. Use `arm-none-eabi-ar x lib/libfat.a io_mpcf.o` to get the driver object, then `arm-none-eabi-objdump -dr -j .text io_mpcf.o` to see the call and table relocations. Compare the Thumb listing at `0x020737b8` in the reference ARM9 ELF using `-m armv5te -M force-thumb -D`. [MPCF routine](../decompiled/arm9/storage/fat/drivers/cf.c#L5)

## Trace a routine

1. Run `python3 scripts/find_routine.py 0x0200d13c` to locate the save-state loader. The command accepts working names and Ghidra symbols as well as addresses. You can also browse the [ARM9 index](../decompiled/arm9/functions.tsv) or [ARM7 index](../decompiled/arm7/functions.tsv).
2. Open `module` relative to that processor’s folder and go to `line`. The preceding line contains the address and working name. The `line_count` column gives the extent of the body in the module. Use `--show --raw` to see the original identifiers.
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

The checker validates the address labels and index coverage, reverses the documented identifier substitutions, and checks the result against the original `body_sha256`. It also reapplies the substitutions to check the displayed file. `rea_sha256` records the complete original per-function REA export, including the provider header. The earlier named snapshot contains the per-function files and original export metadata, including provider fingerprints, code ranges, and limitations. The grouping removes repeated provider and annotation headers. The remaining original bytes can be recovered by reversing the documented renames. [Named snapshot and original export metadata](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/ab34a829297fb07158fcfd40cae203aae76f6512/decompiled)

The recovered ARM9 startup matches the devkitARM r20 startup object. Several runtime routines match r20’s GCC 4.1.1 libraries. Eighteen object sections match libfat-nds 20070127 after accounting for relocations. The libnds matches and dispatcher differences are documented above. The reference ROM booted in melonDS 1.1 and ran a red-and-cyan Genesis VDP diagnostic through DLDI. [Period devkitPro build configuration](https://github.com/devkitPro/buildscripts/blob/dbc4d7d1aa052767680e73f3604f6ae1d486ac31/build-devkit.sh)

To create a fresh raw analysis, use WSL with Python 3, ripgrep, GNU ARM binutils, JDK 21, Ghidra 12.1.4, and REA 6.9.0 with Node.js 24.22.3. Set `GHIDRA_INSTALL_DIR` or `ARM_TOOL_PREFIX` for custom installs. The scripts use compatible cached tools in `~/.cache/jenesisds-decomp` or REA on `PATH`. The default GNU ARM binutils prefix is `/opt/devkitpro/devkitARM/bin/arm-none-eabi-`.

```bash
bash scripts/build_ghidra.sh
bash scripts/decompile.sh
```

Keep each local Ghidra `.gpr` file beside its `.rep` directory. The build stops when the project already exists. Both scripts accept `arm9` or `arm7`. The export resumes when a matching journal exists and writes raw files beneath `build/rea-decompiled/` and logs beneath `build/rea-evidence/`. Set `REA_OUTPUT_DIR` and `REA_EVIDENCE_DIR` to override those destinations. Fresh raw exports include the address slices used for parallel REA jobs.

Record each displayed function identifier in the processor index's `symbol` column. Where several entries have the same working role, the displayed identifier includes the native address. ARM and Thumb entry pairs that shared one Ghidra symbol share one displayed identifier. Record each variable rename in the appropriate `variables.tsv`, using `processor` for a shared variable or the routine address for a local. Run the checker after editing names, moving routines, or changing line ranges. Capture any changes to a bootable rebuild or to the BlocksDS port on the corresponding branch.

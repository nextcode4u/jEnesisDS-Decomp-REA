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
| ARM9 IRQ dispatcher | ITCM `0x010057a8–0x01005880` | The April 26, 2006 `IntrMain` reproduces all 216 bytes with r20, including the linked IRQ flags and handler-table addresses. It masks the active source during the callback and acknowledges it on return. The December 2006 revision moves the acknowledgment before the callback. [April dispatcher source](https://github.com/devkitPro/libnds/blob/544a72e71ac59ef7a593d72096a8d62d12d464dd/source/common/interruptDispatcher.s) · [December change](https://github.com/devkitPro/libnds/commit/42771ddf0e2613a631a6414754865c0c5914c1cd) |
| ARM9 key input | `0x0207fb70–0x0207fc24` | The October 2007 `keysHeld`, `keysDown`, and `scanKeys` reproduce all 180 code bytes and three initialized repeat bytes after positioning `IPC->buttons` at offset `0x18`. The ROM does not establish the purpose of the extra four bytes in this layout. [October keys source](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/arm9/keys.c) |

For the source comparisons, use GCC 4.1.1 from devkitARM r20. Compile the historical files with `-Iinclude -fomit-frame-pointer -ffast-math -mthumb -mthumb-interwork` and the optimization above. Use `-DARM7 -mcpu=arm7tdmi -mtune=arm7tdmi` or `-DARM9 -march=armv5te -mtune=arm946e-s`. In the object listing, compare each symbol's instruction bytes and account for the relocations shown by `arm-none-eabi-objdump -dr`. For archived sections, extract members with `arm-none-eabi-ar x` and inspect the code and relocations the same way.

The r20 startup objects also close two runtime symbol questions. The bytes at ARM9 `0x02000220` and ARM7 `0x037f80d0` are the concatenated `.init` sections of `crti.o` and `crtn.o`, establishing both entries as `_init`. The `isatty` relocation from newlib's `__smakebuf` resolves to ARM9 `0x020850a0`, where the ROM returns zero.

## Build and test the period devkitPro SDK

Install the three packages in the [SDK setup table](../README.md#build-with-the-period-devkitpro-sdk), then run `make r20-homebrew` from the repository root. The top-level Makefile follows the period combined ARM7 and ARM9 template. Each processor includes the installed `ds_rules`, uses its own DS specs, and builds a recovered C archive before linking the test program. ARM7 links `-lnds7`. ARM9 links `-lfat -lnds9`. The compiler and linker read the installed headers and archives directly. [Combined template](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/templates/combined/Makefile) · [Processor Makefile](../rebuild/devkitpro/cpu.mk)

The target writes `sdk-check.nds` and per-processor ELF, archive, and linker map files under `build/r20-homebrew/`. Open the test ROM in melonDS as ordinary DS homebrew. The test prints `ARM7 FIFO: OK` after a round trip through the recovered ARM9 FIFO code and ARM7 PSG table. With DLDI enabled and a FAT image, it prints `libfat: mounted`. Add a file named `sdkcheck.txt` to the root of that image with `R` as its first byte to exercise a read through newlib and libfat. Both the FIFO round trip and the FAT file read passed in melonDS 1.1. [ARM9 check](../rebuild/devkitpro/sdk_check_arm9.c) · [ARM7 check](../rebuild/devkitpro/sdk_check_arm7.c)

The test ROM exercises a subset of the recovered code. The complete emulator still requires unrecovered code and data. The byte-matching targets below use the original layout and compare those independent regions with the release.

## Compile the recovered ARM9 C

Run `make recovered-c` with the complete r20 toolchain. It compiles the sources in ARM mode with `-O2` and places each region at its original address. The output consists of ELF and binary files under `build/recovered-c/`. Run `make compare-recovered-c ROM=/path/to/jEnesisDS.nds` to compare the saved binaries with the original 0.7.4 ROM, including address literals and branch destinations. `make check-c` runs both steps in one command. The stream decoder uses `-fno-tree-vrp` to return the last read value in r0 with the original instructions. [Build setup](../README.md#compile-recovered-c-with-devkitarm-r20)

| Area | Address range (end exclusive) | Verified C |
| --- | --- | --- |
| Cartridge region and byte order | `0x020002e4–0x0200030c`, `0x0200157c–0x020015c0` | Set the Genesis version register and NTSC flag, and swap adjacent bytes while preserving an odd trailing byte. [Region](../rebuild/source/cartridge_region.c) · [Byte order](../rebuild/source/cartridge_byte_order.c) |
| 68000 timing | `0x020004e0–0x02000538` | Queue an interrupt level, return the current cycle counter, and calculate cycles per scanline. Before the first completed frame, the average-cycle routine returns the startup setting. [Source](../rebuild/source/m68k_timing.c) |
| 68000 context | `0x02000310–0x0200037c`, `0x020050cc–0x02005164` | Derive the guest PC from the mapped pointer and page bits, update the pending IRQ, and read the cycle counter and selected status flags. [Guest PC](../rebuild/source/m68k_program_counter.c) · [Context](../rebuild/source/m68k_context.c) |
| Z80 cartridge bank and work RAM | `0x02004438–0x02004484`, `0x02004c18–0x02004c44` | Preserve the bank latch, read the banked ROM in 68000 word order, and access work RAM directly. [Cartridge bank](../rebuild/source/z80_bank_state.c) · [Work RAM](../rebuild/source/z80_work_ram.c) |
| Z80 bus mapping and reset | `0x02004c50–0x02004d94`, `0x02004d94–0x02004dcc` | Route byte and word accesses to work RAM, sound, the bank latch, and cartridge space. Clear the 8 KiB work RAM and two associated reset words. [Memory mapping](../rebuild/source/z80_memory.c) · [Reset](../rebuild/source/z80_clear.c) |
| Z80 initialization and YM2612 status | `0x020050a8–0x020050cc`, `0x02005b7c–0x02005b94` | Clear the Z80 execution context before installing its dispatch tables. Read the two YM2612 timer status flags through the ARM9 context. [Z80 initialization](../rebuild/source/z80_context.c) · [Timer status](../rebuild/source/ym2612_status.c) |
| Z80 and sound save-state fields | `0x02004f70–0x020050a8`, `0x02005aac–0x02005ad0` | Convert packed Z80 PC and SP fields between host addresses and serialized offsets. Return the FM and PSG mirror pointers. [Z80 pointers](../rebuild/source/savestate_z80_pointers.c) · [Sound mirrors](../rebuild/source/sound_state.c) |
| VDP timing and serialization | `0x020090e8–0x02009214`, `0x02009cb0–0x02009cf0` | Tick and reload H-INT, enter vertical blanking, and bind the four VDP save-state memory regions. [Scanline timing](../rebuild/source/vdp_interrupts.c) · [Region binding](../rebuild/source/savestate_vdp.c) |
| ARM9 IPC FIFO | `0x0200c4a8–0x0200c5d8` | Receive and dispatch messages, send with or without waiting, and initialize the interrupt through `irqSet` and `irqEnable`. [Source](../rebuild/source/arm9_fifo.c) |
| LZSS match tree | `0x0200c5d8–0x0200c82c` | Initialize the first-byte roots, insert and record the longest prefix, and remove outgoing window entries. [Source](../rebuild/source/lzss_match_tree.c) |
| Bounded streams | `0x0200c82c–0x0200c87c` | Read and write without advancing past stream capacity. [Source](../rebuild/source/bounded_stream.c) |
| LZSS stream decoder | `0x0200cb78–0x0200ccb4` | Decode literal bytes and overlapping ring-buffer matches using the bounded streams. [Source](../rebuild/source/lzss_decode.c) |
| LZSS memory decoder | `0x0200ccb4–0x0200cda4` | Initialize input and output streams, copy any literal prefix, and enter the shared decoder. [Source](../rebuild/source/lzss_memory.c) |
| Cartridge bus | `0x02003ca4–0x02003cf8` | Return the ROM, work RAM, and Z80 bank-latch addresses, and select backing storage for VDP DMA. [Source](../rebuild/source/cartridge_bus.c) |
| Default DLDI area | `0x02074dc0–0x0207cdc0` | Emit the libfat placeholder, its shared callback that reports no device, and the zero-filled reservation for flashcart drivers. [Recovered C](../rebuild/source/dldi_placeholder.c) · [DLDI format and patching](https://www.chishm.com/DLDI/) |
| Save-state setup | `0x0200d03c–0x0200d13c` | Populate the version 3 region table and build the numbered `.jst` path. [Source](../rebuild/source/savestate_layout.c) |

Run `make reference-c` to link all verified C regions into their processor images. The linker maps in `build/reference-c/` record the input objects and original addresses. The linker emits the 14,060-byte zero-filled ARM9 DTCM load image. The r20 `ndstool` emits the header, empty file name table, and alignment padding. The target compares the complete ROM with the release and still reads the launcher banner and unrecovered processor code and data from the release. [Build setup](../README.md#compile-recovered-c-with-devkitarm-r20)

In the SDK reference build, the linker maps account for 551,177 ARM9 bytes and 55,416 ARM7 bytes still supplied by the release. The ARM9 count includes 22,440 ITCM bytes. These ranges contain the remaining CPU engines and dispatch tables, graphics and audio code, frontend code, and initialized data. The launcher banner adds 2,112 bytes outside the processor images. [ROM gap placement](../rebuild/recovered.py) · [ROM packaging](../rebuild/build.py)

The FIFO receive ISR reads `REG_IPC_FIFO_RX` once per message and splits that word into a command and a payload. The nonblocking sender clears the send FIFO and returns zero when full. The waiting sender at `0x0200c530` was identified from ARM instructions between the indexed callback setter and nonblocking sender. [Indexed pseudocode](../decompiled/arm9/system/ipc.c#L449) · [Verified C](../rebuild/source/arm9_fifo.c)

### ARM7 and runtime initialization

The ARM7 PSG clock and ring setup at `0x037f8a30–0x037f8a88` matches all 88 bytes. It calculates the fixed-point clock step, calls the channel reset, and records the ring length. The PSG attenuation table at `0x03806d4c–0x03806d8c` matches all 64 bytes. Its first 15 entries follow a 2 dB step rounded from a starting amplitude of 6553. The last entry is mute. [Attenuation table](../rebuild/source/arm7_psg_attenuation.c)

The matched builds also link the `.init` sections from r20's own `crti.o` and `crtn.o` at ARM9 `0x02000220` and ARM7 `0x037f80d0`. [ARM7 source](../rebuild/source/arm7_psg_clock.c)

The SDK reference build uses matching ARM code from the r20 `libc.a` and `libgcc.a` archives for both processors, including the ARM9 `memset` called by the Z80 reset and the ARM7 floating-point routines. [ARM9 ranges](../rebuild/sdk_arm9.py) · [ARM7 ranges](../rebuild/sdk_arm7.py)

## Verify LZSS behavior

The encoder and buffer and file entries pass 135 behavioral comparisons against the original ARM9 code. The memory entry now matches the ROM bytes. The encoder at `0x0200c87c` and the file entries at `0x0200cda4` and `0x0200cf28` still generate different instructions with r20. Both prefix-aware read paths transfer control to the shared stream decoder at `0x0200cb78`. The file writer copies the prefix, encodes the remainder, and writes the output stream to a file. [Encoder](../rebuild/source/lzss_encode.c) · [Memory decoder](../rebuild/source/lzss_memory.c) · [File entry points](../rebuild/source/lzss_buffers.c)


Install the Python `unicorn` package in the interpreter used for this check, then run:

```sh
make check-lzss R20_ROOT="$DEVKITARM"
```

The check links all recovered codec routines together and executes the resulting ARM code and the released routines on the same inputs. It compares output bytes, stream state, dictionary state, and counters. The file tests also compare call order, output written, and return values using simulated stdio calls. Cases include ring wraparound, output exhaustion, truncated input, and failed file operations. [Behavior checker](../rebuild/check_lzss.py)

```sh
make check-codec-rom R20_ROOT="$DEVKITARM"
```

The codec ROM uses `-Os` for the encoder and both file wrappers so their C objects fit at the original ARM9 entry addresses. The build checks that every other byte in the ARM9 and ARM7 images matches the release. `check-codec-rom` runs the 135 comparisons with those entries in place. The ROM booted Sonic into Green Hill Zone Act 1 in melonDS 1.1. Moving after saving and loading slot 1 restored Sonic's earlier position and timer. The original emulator's save-state UI uses the uncompressed version 3 format. The codec itself is exercised by the Unicorn checks. [Codec entry locations](../rebuild/recovered.py)

```sh
make check-lzss-standalone
```

The standalone check links the same codec sources with definitions for the streams, dictionary arrays, and counters. It uses a C99 host compiler and the host C library. The tests cover a known encoded literal, an overlapping back-reference, and an 8 KiB file round trip with its prefix intact. It runs without a DS ROM or the r20 toolchain. [Storage definitions](../rebuild/source/lzss_state.c) · [Host tests](../rebuild/check_lzss_host.c)

## Reproduce the SDK comparison

`make check-sdk` runs the recovered C checks and recompiles selected SDK sources from July 2005, April 2006, and October 2007 with GCC 4.1.1 from devkitARM r20. The object comparison excludes relocations. The separate linked checks for `IntrMain` and ARM9 keys include relocations. The keys check applies the IPC offset change in a temporary copy of the October 2007 header. [Build setup](../README.md#compile-recovered-c-with-devkitarm-r20)

Clone both SDK histories and point the Makefile at the complete r20 toolchain. The default repository paths used here keep the checkouts under the ignored build directory.

```sh
mkdir -p build/sdk-sources
git clone https://codeberg.org/SkyLyrac/ndslib-archive.git build/sdk-sources/ndslib-archive
git clone https://github.com/devkitPro/libnds.git build/sdk-sources/libnds
make check-sdk R20_ROOT="$DEVKITARM"
```

The Codeberg mirror keeps its CVS import on the `history` branch. The July 2005 checkout matches `keysHeld`, `keysDown`, and `touchReadTemperature`. April 2006 reproduces all four tested ARM7 touch routines and the tested RTC and Slot-1 routines. October 2007 reproduces the IRQ setup functions, including `irqEnable` with `-Os`. The unmodified October 2007 `scanKeys` differs by four instruction bytes at the two shared button reads. [SourceForge ndslib project](https://sourceforge.net/projects/ndslib/) · [CVS mirror snapshot](https://codeberg.org/SkyLyrac/ndslib-archive/src/commit/eafb2703db6e2b6b414a2fa15107212522666bff) · [April 2006 libnds](https://github.com/devkitPro/libnds/tree/79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a) · [October 2007 libnds](https://github.com/devkitPro/libnds/tree/8ea06b95fe716cfceff0bce34232217a61e0e6c9)

### Link the period libnds sources

```sh
make arm7-sdk R20_ROOT="$DEVKITARM" LIBNDS_REPO=build/sdk-sources/libnds
make check-arm7-sdk R20_ROOT="$DEVKITARM" LIBNDS_REPO=build/sdk-sources/libnds
make reference-c-sdk R20_ROOT="$DEVKITARM" LIBNDS_REPO=build/sdk-sources/libnds
```

`arm7-sdk` builds the seven ranges below from libnds source, r20 runtime objects, and the reconstructed interworking entry and division-by-zero hook. It writes an ELF, a linker map, and one file per range under `build/arm7-sdk/`. `check-arm7-sdk` opens the original ROM after the build to compare all 5,012 bytes, including calls, pointer literals, and padding. [ARM7 SDK build](../rebuild/sdk_arm7.py)

| ARM7 range (end exclusive) | Contents |
| --- | --- |
| `0x037f8144–0x037f814c` | Thumb entry for the ARM division routine. |
| `0x03801060–0x03801560` | April 2006 libnds RTC and touchscreen code, with calibration state at `0x0380bb0c`. |
| `0x03801780–0x03801800` | October 2007 libnds BIOS calls. |
| `0x03801800–0x038018d8` | April 2006 libnds interrupt dispatcher, linked to the ARM7 flags and handler table. |
| `0x038018d8–0x03801b34` | Signed and unsigned division and remainder from the r20 runtime, with the recovered `__div0` hook. |
| `0x03801b34–0x038024d8` | r20 interworking and double-precision arithmetic. |
| `0x038025ac–0x038026e0` | r20 newlib memory operations. |

`reference-c-sdk` links those ARM7 ranges and the ARM9 key routines, ITCM dispatcher, Slot-1 code, video bank control, data-cache maintenance, BIOS calls, and r20 runtime objects. It also links 20 members of libfat-nds 20070127, replacing 16,896 bytes of code and initialized data with the archived objects. Thumb calls use the original entry points, including the veneers for ARM newlib functions. The directory object's pooled strings and code still come from the release in the byte-matching build. [ARM9 SDK staging](../rebuild/sdk_arm9.py) · [libfat placement and imports](../rebuild/sdk_libfat.py)

The `LIBFAT` path defaults to the `libfat` directory beside devkitARM. The output ROM and linker maps are under `build/reference-c-sdk/`. The reference build still uses the original ROM for the remaining regions.

Compiler selection, source revision, and per-file optimization can each affect a match. The ROM's libnds routines have matching code from different points in SDK history. The reconstructed C check isolates functions so each match demonstrates what the compiler produced from source.

## Use the period SDK names

Use the function name and capitalization from the matching libnds source or object. Use the matching devkitARM r20 and period libfat symbols for runtime and filesystem functions. The ROM browser now calls `scanKeys`, `keysHeld`, and `swiWaitForVBlank`. The May 2008 libnds sprite example uses those same names. The period ARM7 template also calls `touchReadXY`, which differs from the later `touchRead` API. [Browser calls](../decompiled/arm9/frontend/rom_browser.c#L187) · [May 2008 sprite example](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/Graphics/2D/SimpleSprite/source/template.c#L44) · [May 2008 ARM7 template](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/templates/combined/arm7/source/template.c#L63)

The ARM and Thumb entries of an SDK function can both display the same library name. `functions.tsv` records each native entry and its original Ghidra symbol. The processor's `symbol_aliases.json` records the raw symbol that a shared name represents in each affected routine. For example, `swiWaitForVBlank` in the ARM9 browser reaches the veneer at `0x020858a4`, which branches to the Thumb implementation at `0x0208031c`. Use the address with `--show --raw` to inspect either entry's original representation.

The r20 newlib relocations also distinguish `_fstat_r` at `0x0208201c` from `_lseek_r` at `0x020846c0`. Their ROM calls reach `_fstat` at `0x0208502c` and `_lseek` at `0x020851cc`, respectively. [Runtime entry points](../decompiled/arm9/platform/runtime/device_io.c)

Use descriptive working names for emulator-specific routines and retain direct BIOS instructions as REA exported them. Compare machine code or linked symbols before assigning an SDK name to an apparent wrapper.

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
| LZSS compression | `0x0200c87c` · `0x0200cb78` · [Recovered encoder](../rebuild/source/lzss_encode.c) · [Recovered stream decoder](../rebuild/source/lzss_decode.c) |
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

Record each displayed function identifier in the processor index's `symbol` column. Where several entries have the same working role, the displayed identifier includes the native address. ARM and Thumb entries for the same confirmed library function share the original library name. Update the raw alias information when an additional entry uses that name. Record each variable rename in the appropriate `variables.tsv`, using `processor` for a shared variable or the routine address for a local. Run the checker after editing names, moving routines, or changing line ranges. Capture any changes to a bootable rebuild or to the BlocksDS port on the corresponding branch.

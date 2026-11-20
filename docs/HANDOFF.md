# jEnesisDS 0.7.4 analysis handoff

Use `descriptive-decomp` to trace the released Nintendo DS emulator by subsystem. The annotation pass identified 2,336 ARM9 opcode dispatch targets and 128 ARM7 dispatch targets. The branch preserves the REA pseudocode for all 3,083 indexed routines. This branch builds the complete emulator with devkitARM r20 and the period SDK. The original DS ROM is used in a separate comparison.

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
| ARM9 key input | `0x0207fb70–0x0207fc24` | Six key routines from October 2007 reproduce all 256 code bytes and three initialized repeat bytes after positioning `IPC->buttons` at offset `0x18`. The ROM does not establish the purpose of the extra four bytes in this layout. [October keys source](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/arm9/keys.c) |

For the source comparisons, use GCC 4.1.1 from devkitARM r20. Compile the historical files with `-Iinclude -fomit-frame-pointer -ffast-math -mthumb -mthumb-interwork` and the optimization above. Use `-DARM7 -mcpu=arm7tdmi -mtune=arm7tdmi` or `-DARM9 -march=armv5te -mtune=arm946e-s`. In the object listing, compare each symbol's instruction bytes and account for the relocations shown by `arm-none-eabi-objdump -dr`. For archived sections, extract members with `arm-none-eabi-ar x` and inspect the code and relocations the same way.

The bytes at ARM9 `0x02000220` and ARM7 `0x037f80d0` are the concatenated `.init` sections of r20’s `crti.o` and `crtn.o`. Their matching `.fini` sections are at ARM9 `0x020859f0` and ARM7 `0x038026e0`. The `isatty` relocation from newlib's `__smakebuf` resolves to ARM9 `0x020850a0`, where the ROM returns zero.

## Build and test the period devkitPro SDK

Install the three packages in the [SDK setup table](../README.md#build-with-the-period-devkitpro-sdk), then run `make r20-homebrew` from the repository root. The top-level Makefile follows the period combined ARM7 and ARM9 template. Each processor includes the installed `ds_rules`, uses its own DS specs, and builds a recovered C archive before linking the test program. ARM7 links `-lnds7`. ARM9 links `-lfat -lnds9`. The compiler and linker read the installed headers and archives directly. [Combined template](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/templates/combined/Makefile) · [Processor Makefile](../rebuild/devkitpro/cpu.mk)

The target writes `sdk-check.nds` and per-processor ELF, archive, and linker map files under `build/r20-homebrew/`. Open the test ROM in melonDS as ordinary DS homebrew. The test prints `ARM7 FIFO: OK` after a round trip through the recovered ARM9 FIFO code and ARM7 PSG table. With DLDI enabled and a FAT image, it prints `libfat: mounted`. Add a file named `sdkcheck.txt` to the root of that image with `R` as its first byte to exercise a read through newlib and libfat. Both the FIFO round trip and the FAT file read passed in melonDS 1.1. [ARM9 check](../rebuild/devkitpro/sdk_check_arm9.c) · [ARM7 check](../rebuild/devkitpro/sdk_check_arm7.c)

The test ROM exercises a subset of the recovered code. The complete emulator build below uses the release memory layout and the historical SDK sources.

## Build the complete source ROM

Install the archived r20 toolchain, libnds headers, and libfat archive from the [SDK setup table](../README.md#build-with-the-period-devkitpro-sdk). Set `DEVKITARM` to the installed r20 directory and clone the full libnds history for the specific historical revisions listed above.

```sh
mkdir -p build/sdk-sources
git clone https://github.com/devkitPro/libnds.git build/sdk-sources/libnds
make source-rom R20_ROOT="$DEVKITARM" LIBNDS_REPO=build/sdk-sources/libnds
```

The ARM7 and ARM9 ELF files, linker maps, and packaged ROM are written under `build/source-rom/`. The linker fails if any load range is uncovered. The r20 `ndstool` packages the linked images and generated launcher banner. A clean checkout of this branch built successfully without the original ROM present. A separate comparison of the packaged result matched 0.7.4 with SHA-256 `cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104`. [Build entry point](../rebuild/build.py)

```sh
make compare-source-rom ROM=input/jEnesisDS.nds
```

The last 43,940 ARM9 bytes came from 7,696 bytes of frontend assembly, 756 bytes of C messages and initial state, and 35,488 bytes of generated graphics. The assembly is organized by ROM browser, input, settings, graphics, panels, and text. [Frontend assembly](../rebuild/source/native/arm9/frontend) · [Messages](../rebuild/source/frontend_messages.c) · [Initial state](../rebuild/source/frontend_initial_state.c)

The graphics source uses indexed PGM sheets, RGB555 palette entries, and numeric tilemaps. The generator packs each sheet into 8×8 DS tiles and emits the asset structure as C. Edit the pixel indices and palettes together to change colors. The menu map uses 16-bit DS text background entries. The startup map uses one byte per affine tile index. [Editable assets](../rebuild/assets/frontend) · [Graphics generator](../rebuild/generate_frontend_assets.py)

| ARM9 address | Asset |
| --- | --- |
| `0x02085a88` | Font palette |
| `0x02085aa8` | Font sheet, 96 tiles |
| `0x020872a8` | Menu palette |
| `0x020874a8` | Menu sheet, 156 tiles |
| `0x02089ba8` | Menu map, 32×24 entries |
| `0x0208a1a8` | Startup palette |
| `0x0208a3a8` | Startup sheet, 250 tiles |
| `0x0208e228` | Startup map, 32×24 entries, ending at `0x0208e528` |

## Compile the recovered ARM9 C

Run `make recovered-c` with the complete r20 toolchain. It compiles the sources in ARM mode with `-O2` and places each region at its original address. The output consists of ELF and binary files under `build/recovered-c/`. Run `make compare-recovered-c ROM=/path/to/jEnesisDS.nds` to compare the saved binaries with the original 0.7.4 ROM, including address literals and branch destinations. `make check-c` runs both steps in one command. The stream decoder uses `-fno-tree-vrp` to return the last read value in r0 with the original instructions. [Build setup](../README.md#compile-recovered-c-with-devkitarm-r20)

| Area | Address range (end exclusive) | Verified C |
| --- | --- | --- |
| Cartridge region and byte order | `0x020002e4–0x0200030c`, `0x0200157c–0x020015c0` | Set the Genesis version register and NTSC flag, and swap adjacent bytes while preserving an odd trailing byte. [Region](../rebuild/source/cartridge_region.c) · [Byte order](../rebuild/source/cartridge_byte_order.c) |
| Controller I/O | `0x0200037c–0x020004e0`, `0x020037b4–0x02003828`, `0x02003a48–0x02003af0` | Decode both directions of the Genesis I/O window, reset the port, and apply output writes and six-button TH handshake transitions. The pin read core at `0x02003828` remains a ROM dependency. [Register reads](../rebuild/source/controller_io.c) · [Register writes](../rebuild/source/controller_io_write.c) · [Port state](../rebuild/source/controller_port.h) · [Handshake](../rebuild/source/controller_write.c) |
| 68000 dispatch table | `0x02032c28–0x02072c28` | Generate all 65,536 ARM handler pointers from opcode fields, representative handler entries in the analysis index, and release-specific aliases. The linked table matches all 262,144 bytes. [Branch and exception slots](../rebuild/source/m68k_dispatch.c) · [Operand decoder](../rebuild/generate_m68k_operand_dispatch.py) |
| 68000 condition and rotate tables | `0x020168b0–0x02016a70` | Compute all 16 condition predicates over the NZVC bits and reduce rotation counts modulo 9, 17, and 33 for byte, word, and long operands with extend. [Source](../rebuild/source/m68k_condition_tables.c) |
| 68000 execution | `0x02000538–0x02000588` | Run a 68000 cycle budget, with VDP timing updates where the caller needs them. [Execution wrappers](../rebuild/source/m68k_execute.c) |
| 68000 timing | `0x020004e0–0x02000538` | Queue an interrupt level, return the current cycle counter, and calculate cycles per scanline. Before the first completed frame, the average-cycle routine returns the startup setting. [Source](../rebuild/source/m68k_timing.c) |
| 68000 instruction fetch and save-state PC | `0x02003c88–0x02003ca4`, `0x0200526c–0x020052ec` | Select the cartridge or work RAM instruction-fetch mapping and serialize the live 68000 byte offset as a guest PC. [Mapping](../rebuild/source/m68k_fetch_mapping.c) · [Save-state PC](../rebuild/source/savestate_m68k_encode.c) |
| 68000 longword predecrement store | `0x02003d98–0x02003de0` | Dispatch the low and high 16-bit transfers in predecrement order using the original page table. [Source](../rebuild/source/m68k_predecrement_write.c) |
| 68000 context | `0x02000310–0x0200037c`, `0x020050cc–0x02005164` | Derive the guest PC from the mapped pointer and page bits, update the pending IRQ, and read the cycle counter and selected status flags. [Guest PC](../rebuild/source/m68k_program_counter.c) · [Context](../rebuild/source/m68k_context.c) |
| Z80 cycle scheduler and interrupt state | `0x02000588–0x02000868`, `0x02004ef4–0x02004f70` | Accrue and account for Z80 cycles, split batches at the engine's cycle limit, honor reset and bus ownership, and update the pending interrupt word. [Cycle driver](../rebuild/source/z80_cycle_driver.c) · [Interrupt word](../rebuild/source/z80_interrupt.c) |
| Z80 dispatch pages | `0x020153f0–0x020168b0` | Generate all 1,328 pointers for the alternate tables and the base, CB, ED, DD/FD, and indexed CB opcode pages. [Generator](../rebuild/generate_z80_dispatch.py) |
| 68000 memory reads | `0x02003b34–0x02003c58` | Dispatch 24-bit addresses through the byte and word page tables and read cartridge ROM directly when the address allows it. The indirect handlers are ARM entries, so these wrappers compile without Thumb interworking. [Memory reads](../rebuild/source/m68k_loads.c) |
| 68000 bus page tables and reset | `0x02003de0–0x02003e38`, `0x0200412c–0x02004368`, `0x02004b7c–0x02004c18` | Supply the release's fallback handlers, install byte and word write routes, refresh the cartridge pages, and reset the bus state and 64 KiB work RAM. The read selectors still come from the ROM. [Page defaults](../rebuild/source/m68k_page_defaults.c) · [Page setup](../rebuild/source/m68k_bus_pages.c) · [Reset](../rebuild/source/m68k_bus_reset.c) |
| 68000 VDP and I/O bus access | `0x02004484–0x020045c8`, `0x020046c0–0x02004908`, `0x02004aa8–0x02004b7c` | Decode the VDP and Genesis I/O windows, route Z80 RAM and sound writes, and apply cartridge mapper, Z80 reset, and bus request changes. [Read decoder](../rebuild/source/m68k_io_read.c) · [Write decoder](../rebuild/source/m68k_io_write.c) · [Bus request and reset](../rebuild/source/z80_bus_lines.c) |
| 68000 and Z80 unmapped bus | `0x02004368–0x020043cc` | Return the default 68000 bus bytes and words, return zero for unmapped Z80 VDP access, and ignore unmapped writes. [Source](../rebuild/source/m68k_default_bus.c) |
| Z80 cartridge bank and work RAM | `0x02004438–0x02004484`, `0x02004c18–0x02004c44` | Preserve the bank latch, read the banked ROM in 68000 word order, and access work RAM directly. [Cartridge bank](../rebuild/source/z80_bank_state.c) · [Work RAM](../rebuild/source/z80_work_ram.c) |
| Z80 bus mapping and reset | `0x02004c50–0x02004d94`, `0x02004d94–0x02004dcc` | Route byte and word accesses to work RAM, sound, the bank latch, and cartridge space. Clear the 8 KiB work RAM and two associated reset words. [Memory mapping](../rebuild/source/z80_memory.c) · [Reset](../rebuild/source/z80_clear.c) |
| Z80 initialization, reset line and YM2612 status | `0x02000bfc–0x02000c08`, `0x020050a8–0x020050cc`, `0x02005b7c–0x02005b94` | Invoke the Z80 reset on the shared context and clear the context before installing its dispatch tables. Read the two YM2612 timer status flags through the ARM9 context. [Z80 initialization](../rebuild/source/z80_context.c) · [Reset line](../rebuild/source/z80_reset_line.c) · [Timer status](../rebuild/source/ym2612_status.c) |
| Z80 and sound save-state fields | `0x02004f70–0x020050a8`, `0x02005aac–0x02005ad0` | Convert packed Z80 PC and SP fields between host addresses and serialized offsets. Return the FM and PSG mirror pointers. [Z80 pointers](../rebuild/source/savestate_z80_pointers.c) · [Sound mirrors](../rebuild/source/sound_state.c) |
| VDP counters, sprite geometry and scanline translation | `0x0208e528–0x0208ec90` | Build the DS background and OAM tables using libnds definitions. Generate the Genesis H32, H40 and vertical counter values and the 224-to-192 scanline map from their timing and scaling rules. [Layout](../rebuild/source/vdp_render_layout.c) · [Timing tables](../rebuild/generate_vdp_timing_tables.py) |
| Frame timing and callbacks | `0x02000a2c–0x02000bfc`, `0x02000d10–0x02000dac` | Run the per-scanline H-INT frame driver, select the CPU timing callback, apply viewport settings, and refresh the background caches. [H-INT frame driver](../rebuild/source/frame_h_int_on.c) · [Frame option](../rebuild/source/frame_callback_setup.c) · [Dynamic selection](../rebuild/source/frame_callback_select.c) |
| Cartridge reset | `0x02000c08–0x02000d10` | Initialize frame timing and reset the CPU, controllers, VDP, and ARM7 audio. The libnds `swiWaitForVBlank` calls link through the original ARM veneer. [Cartridge reset](../rebuild/source/emulator_reset.c) |
| DS display IRQ and Genesis VDP counter reads | `0x02000f3c–0x02000fdc`, `0x02009274–0x020092e0`, `0x02009570–0x02009614`, `0x02085a08–0x02085a10` | Advance the DS display compare phases, combine the emulated H and V counters, and select the scanline recorder for the current scroll mode. [DS compare IRQ](../rebuild/source/display_compare_irq.c) · [VCOUNT targets](../rebuild/source/display_compare_lines.c) · [VDP counter read](../rebuild/source/vdp_counter_read.c) · [Recorder selection](../rebuild/source/scanline_callback.c) |
| VDP interrupt delivery | `0x0200b284–0x0200b438` | Track the current cycle and deliver horizontal or vertical 68000 interrupts through the timed and immediate callbacks. The immediate routines use the ARM926EJ-S scheduler in GCC 4.1.1 to reproduce the original instruction order. [Timed callback](../rebuild/source/vdp_line_cycles.c) · [Immediate callbacks](../rebuild/source/vdp_line_cycles_immediate.c) |
| VDP timing and serialization | `0x020090e8–0x02009214`, `0x02009cb0–0x02009cf0` | Tick and reload H-INT, enter vertical blanking, and bind the four VDP save-state memory regions. [Scanline timing](../rebuild/source/vdp_interrupts.c) · [Region binding](../rebuild/source/savestate_vdp.c) |
| ARM9 sound queue and controls | `0x02005ad0–0x02005b7c`, `0x020061a8–0x02006228`, `0x020062c4–0x02006308`, `0x020063dc–0x020063e8` | Stage PSG writes, update the PSG register mirror, publish the DAC buffer through libnds IPC and cache maintenance, and send ARM7 start, stop, reset, mute, and unmute commands. [PSG queue](../rebuild/source/psg_queue.c) · [DAC submission](../rebuild/source/arm9_dac_submit.c) · [Audio controls](../rebuild/source/arm9_audio_controls.c) · [Audio start](../rebuild/source/arm9_audio_start.c) |
| ARM9 IPC FIFO | `0x0200c4a8–0x0200c5d8` | Receive and dispatch messages, send with or without waiting, and initialize the interrupt through `irqSet` and `irqEnable`. [Source](../rebuild/source/arm9_fifo.c) |
| LZSS match tree | `0x0200c5d8–0x0200c82c` | Initialize the first-byte roots, insert and record the longest prefix, and remove outgoing window entries. [Source](../rebuild/source/lzss_match_tree.c) |
| Bounded streams | `0x0200c82c–0x0200c87c` | Read and write without advancing past stream capacity. [Source](../rebuild/source/bounded_stream.c) |
| LZSS stream decoder | `0x0200cb78–0x0200ccb4` | Decode literal bytes and overlapping ring-buffer matches using the bounded streams. [Source](../rebuild/source/lzss_decode.c) |
| LZSS memory decoder | `0x0200ccb4–0x0200cda4` | Initialize input and output streams, copy any literal prefix, and enter the shared decoder. [Source](../rebuild/source/lzss_memory.c) |
| Cartridge bus | `0x02003af0–0x02003b34`, `0x02003ca4–0x02003cf8` | Initialize the cartridge and RAM mapping masks and backing pointers, expose the ROM, RAM, and Z80 bank-latch addresses, and select VDP DMA storage. [Source](../rebuild/source/cartridge_bus.c) |
| Default DLDI area | `0x02074dc0–0x0207cdc0` | Emit the libfat placeholder, its shared callback that reports no device, and the zero-filled reservation for flashcart drivers. [Recovered C](../rebuild/source/dldi_placeholder.c) · [DLDI format and patching](https://www.chishm.com/DLDI/) |
| Save-state setup | `0x0200d03c–0x0200d13c` | Populate the version 3 region table and build the numbered `.jst` path. [Source](../rebuild/source/savestate_layout.c) |

Run `make reference-c` to link the verified C and assembly regions into their processor images. The linker maps in `build/reference-c/` record the input objects and original addresses. The linker emits the 14,060-byte zero-filled ARM9 DTCM load image. The launcher banner builds from a 32-pixel-square indexed icon, its RGB555 palette, and UTF-16LE titles, with a generated CRC. The r20 `ndstool` emits the header, empty file name table, and alignment padding. The target compares the complete ROM with the release and still reads the unrecovered processor code and data from the release. [Build setup](../README.md#compile-recovered-c-with-devkitarm-r20) · [Launcher banner source](../rebuild/banner.py)

The original author described the 68000 engine as his own ARM assembly and described the Z80 engine as assembly in the release thread. The recovered assembly retains the original register conventions and dispatch layout. [Lordus’s development and release thread](https://gbadev.net/forum-archive/thread/23/13632.html)

The FIFO receive ISR reads `REG_IPC_FIFO_RX` once per message and splits that word into a command and a payload. The nonblocking sender clears the send FIFO and returns zero when full. The waiting sender at `0x0200c530` was identified from ARM instructions between the indexed callback setter and nonblocking sender. [Indexed pseudocode](../decompiled/arm9/system/ipc.c#L449) · [Verified C](../rebuild/source/arm9_fifo.c)

### ARM7 and runtime initialization

The ARM7 PSG register writers match all 496 bytes at `0x037f8504–0x037f86f4`. They handle latch and data bytes, normalize zero tone periods, and reseed noise. The batch and single-write entries preserve their respective order for updating the noise period and shift register. Clock and ring setup at `0x037f8a30–0x037f8a88` matches all 88 bytes. The PSG attenuation table at `0x03806d4c–0x03806d8c` matches all 64 bytes. Its first 15 entries follow a 2 dB step rounded from a starting amplitude of 6553. The last entry is mute. [Batch writer](../rebuild/source/arm7_psg_batch.c) · [Single writer](../rebuild/source/arm7_psg_write.c) · [Clock source](../rebuild/source/arm7_psg_clock.c) · [PSG attenuation](../rebuild/source/arm7_psg_attenuation.c)

The ARM7 YM2612 bank 1 packet reader matches 60 bytes at `0x037f9394–0x037f93d0`. The DAC enable read and resampling cursor setup match 16 and 88 bytes respectively. The FM reset wrapper matches 24 bytes at `0x037fbf44–0x037fbf5c`. [Bank 1 packet reader](../rebuild/source/arm7_ym2612_bank1.c) · [DAC enable](../rebuild/source/arm7_dac_enable.c) · [DAC cursor](../rebuild/source/arm7_dac_cursor.c) · [FM reset](../rebuild/source/arm7_fm_reset.c)

The ARM7 FIFO setup and transfer code at `0x037fc0cc–0x037fc0f0` and `0x037fc468–0x037fc590` match all 332 bytes. One FIFO read supplies both the command and payload. The receiver signals readiness through `REG_IPC_SYNC` after draining the FIFO. `irqSet` and `irqEnable` link through the original ARM veneers. [FIFO implementation](../rebuild/source/arm7_ipc_fifo.c) · [Audio callback setup](../rebuild/source/arm7_ipc_init.c)

The PCM clear and chip reset at `0x037fc0f0–0x037fc218` match 296 bytes. The routines clear the VRAM rings, reset both chips, restore the write cursors and timer bookkeeping, and notify ARM9. The two initial VRAM base pointers also build from C. [PCM reset](../rebuild/source/arm7_audio_reset.c) · [Base pointers](../rebuild/source/arm7_pcm_bases.c)

The YM2612 sample-loop selector at `0x03800e50–0x03801054` builds from the 128 named algorithm and operator-mask entries in the analysis index. The linked table and its base pointer match all 516 bytes. Its destination routines assemble from the algorithm-specific PCM loops. [Dispatch generator](../rebuild/generate_ym2612_dispatch.py) · [PCM loops](../rebuild/source/native/arm7/ym2612)

The ARM7 YM2612 lookup data at `0x038026f8–0x03806d34` generates during the build. It contains the 1,024-entry half-step logarithmic sine, 3,328 packed attenuation-to-sample entries, and the envelope, pitch, and pan tables. All 17,980 bytes match. The generator has no ROM input. [YM2612 table generator](../rebuild/generate_ym2612_tables.py)

The r20 compiler and newlib objects supply the startup callbacks, constructor and destructor arrays, and `_init` and `_fini` routines for both processors. [Runtime placement](../rebuild/recovered.py)

The SDK reference build uses matching ARM code from the r20 `libc.a` and `libgcc.a` archives for both processors, including the ARM9 `memset` called by the Z80 reset and the ARM7 floating-point routines. [ARM9 ranges](../rebuild/sdk_arm9.py) · [ARM7 ranges](../rebuild/sdk_arm7.py)


## Assemble the recovered native regions

Run `make recovered-native R20_ROOT="$DEVKITARM"` to assemble and link the 62 native ranges, totaling 248,184 bytes. It writes one ELF per processor and one binary per range under `build/recovered-native/`. Run `make compare-recovered-native ROM=/path/to/jEnesisDS.nds` separately. The comparison checks instructions, literal data, and branch destinations. The ITCM comparison reads the ROM bytes at the load address while the linker uses the address at which the code runs. [Assembler and comparison](../rebuild/check_native.py) · [Region definitions](../rebuild/native.py)

| Selected range (end exclusive) | Bytes | Contents |
| --- | ---: | --- |
| ARM9 `0x0200b438–0x0200c4a8` | 4,208 | Reset VDP state, refresh backgrounds at the start of a frame, and record scaled or unscaled scanlines. [Source](../rebuild/source/native/arm9/vdp) |
| ARM9 `0x0200df50–0x020153f0` | 29,856 | Z80 execution loop and most prefixed opcode handlers. [Source](../rebuild/source/native/arm9/z80) |
| ARM9 `0x02016a70–0x02032c28` | 115,128 | 68000 opcode handlers, addressing-mode paths, and shared dispatch code. [Source](../rebuild/source/native/arm9/m68k) |
| ARM9 ITCM `0x01000000–0x010056e0` | 22,240 | Z80 base handlers and bus bridges, 68000 execution and hot handlers, and DS sprite tile copies. The ROM load address is `0x020936f0`. [Source](../rebuild/source/native/arm9/itcm) |
| ARM7 `0x037f8a88–0x037f9394` | 2,316 | Advance FM envelopes, decode channel and operator registers, and reset YM2612 registers. [Source](../rebuild/source/native/arm7/ym2612_operators) |
| ARM7 `0x037f93e8–0x037fbc10` | 10,280 | Initialize FM tables and channels, accept bank 0 writes, mix six channels, and program DS audio channels and timers. [Source](../rebuild/source/native/arm7/ym2612_mixer) |
| ARM7 `0x037fc590–0x03800e50` | 18,624 | YM2612 PCM loops for all eight FM algorithms and the shared return path. [Source](../rebuild/source/native/arm7/ym2612) |

The assembly was transcribed from the native instructions and grouped by opcode family, video routine, or synthesis stage. Use the address comments and matching `functions.tsv` to cross-reference a handler with its pseudocode. The included files assemble in one assembler object per subsystem. Each release range keeps its own section. Literal pools and alignment stay in the source. The C dispatch tables can resolve directly to the assembled handler labels. The standalone link uses the release addresses in the processor import files for routines and tables outside the native ranges. [ARM9 function index](../decompiled/arm9/functions.tsv) · [ARM7 function index](../decompiled/arm7/functions.tsv) · [ARM9 linker imports](../rebuild/source/native/arm9_imports.ld) · [ARM7 linker imports](../rebuild/source/native/arm7_imports.ld)
Other ARM9 assembly ranges cover frame scheduling, controller input, bus routing, cartridge and save-state I/O, VDP ports and DMA, tile and sprite drawing, and the release LZSS routines. The Z80 parity and result-flag tables at `0x0200dd20–0x0200df20` are computed as C constant expressions. The adjacent ARM entry installs the decoder page pointers. [Machine routines](../rebuild/source/native/arm9/machine) · [Renderer](../rebuild/source/native/arm9/renderer) · [VDP ports](../rebuild/source/native/arm9/vdp_ports) · [Z80 flag tables](../rebuild/source/z80_flag_tables.c)

The ARM9 platform assembly includes the libnds, libfat, libgcc, and newlib interworking veneers and the CP15 accessors. The recovered browser model handles directory entries and ROM selection. The recovered presentation code points to font tiles at `0x02085aa8`, menu tiles at `0x020874a8`, and menu maps at `0x02089ba8`. Startup graphics use a palette at `0x0208a1a8`, tiles at `0x0208a3a8`, and a map at `0x0208e228`. [SDK veneers](../rebuild/source/native/arm9/platform/sdk_veneers.inc) · [Browser model](../rebuild/source/native/arm9/browser_model) · [Menu asset loads](../decompiled/arm9/frontend/ui.c#L416) · [Startup asset loads](../decompiled/arm9/video/vdp/display_setup.c#L83)

## Build the complete ARM7 image

```sh
make arm7-image R20_ROOT="$DEVKITARM" LIBNDS_REPO=build/sdk-sources/libnds
make compare-arm7-image ROM=input/jEnesisDS.nds
```

The standalone ARM7 target links startup and interworking veneers, PCM and DAC servicing, IPC audio commands, PSG and YM2612 engines, tables, and the period libnds and devkitARM runtime. It writes a 60,820-byte load image, ELF, and map under `build/arm7-image/`. The linker setup rejects any uncovered range during a ROM-free build. The SDK reference build also uses that check for ARM7. [Build script](../rebuild/arm7_image.py) · [ARM7 assembly](../rebuild/source/native/arm7/service)

## Verify LZSS behavior

The encoder and buffer and file entries pass 135 behavioral comparisons against the original ARM9 code. The memory entry now matches the ROM bytes. The behavior-test C encoder and file entries compile to different instructions with r20. The matching reference build assembles the release routines at `0x0200c87c`, `0x0200cda4`, and `0x0200cf28`. Both prefix-aware read paths transfer control to the shared stream decoder at `0x0200cb78`. The file writer copies the prefix, encodes the remainder, and writes the output stream to a file. [Encoder](../rebuild/source/lzss_encode.c) · [Memory decoder](../rebuild/source/lzss_memory.c) · [File entry points](../rebuild/source/lzss_buffers.c)


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

`arm7-sdk` builds the eight ranges below from libnds source, r20 runtime objects, and the reconstructed interworking entry, the division-by-zero hook, and the padded empty IRQ callback. It writes an ELF, a linker map, and one file per range under `build/arm7-sdk/`. `check-arm7-sdk` opens the original ROM after the build to compare all 5,548 bytes, including calls, pointer literals, and padding. [ARM7 SDK build](../rebuild/sdk_arm7.py)

| ARM7 range (end exclusive) | Contents |
| --- | --- |
| `0x037f8144–0x037f814c` | Thumb entry for the ARM division routine. |
| `0x03801060–0x03801560` | April 2006 libnds RTC and touchscreen code, with calibration state at `0x0380bb0c`. |
| `0x03801560–0x03801778` | October 2007 libnds IRQ setup and enable/disable functions. The empty Thumb callback has two zero padding bytes. |
| `0x03801780–0x03801800` | October 2007 libnds BIOS calls. |
| `0x03801800–0x038018d8` | April 2006 libnds interrupt dispatcher, linked to the ARM7 flags and handler table. |
| `0x038018d8–0x03801b34` | Signed and unsigned division and remainder from the r20 runtime, with the recovered `__div0` hook. |
| `0x03801b34–0x038024d8` | r20 interworking and double-precision arithmetic. |
| `0x038025ac–0x038026e0` | r20 newlib memory operations. |

`reference-c-sdk` links those ARM7 ranges and the six ARM9 key routines, April 2006 ARM9 `touchReadXY`, IRQ setup, ITCM IRQ table and dispatcher, Slot-1 code, video bank control, data-cache maintenance, BIOS calls, and r20 runtime objects. It also links 21 members of libfat-nds 20070127 covering 20,770 bytes of code and initialized data. The library uses the original Thumb entry points, including veneers for ARM newlib functions. The directory object links its original filename character sets and shares the dot and dot-dot strings at their release addresses. The ARM9 newlib regions include stdio, the reentrant syscall wrappers, character classification and allocator state. Eleven r20 `libsysbase.a` members supply device registration, directory and file operations, and heap allocation. Their data and heap globals link at the release addresses. The build restores the two alignment bytes after newlib’s locale string in a checksum-verified archive member. [ARM9 SDK staging](../rebuild/sdk_arm9.py) · [libfat placement and imports](../rebuild/sdk_libfat.py)

The `LIBFAT` path defaults to the `libfat` directory beside devkitARM. The output ROM and linker maps are under `build/reference-c-sdk/`. The linker generates the known 0xff alignment fill before the DLDI block, around SDK sections, and between initialized data sections. The reference target compares the output with the original ROM. The `source-rom` target links the same SDK regions without opening the original ROM.

Compiler selection, source revision, and per-file optimization can each affect a match. The ROM's libnds routines have matching code from different points in SDK history. The reconstructed C check isolates functions so each match demonstrates what the compiler produced from source.

## Use the period SDK names

Use the function name and capitalization from the matching libnds source or object. Use the matching devkitARM r20 and period libfat symbols for runtime and filesystem functions. The ROM browser now calls `scanKeys`, `keysHeld`, and `swiWaitForVBlank`. The May 2008 libnds sprite example uses those same names. The period ARM7 template also calls `touchReadXY`, which differs from the later `touchRead` API. [Browser calls](../decompiled/arm9/frontend/rom_browser.c#L187) · [May 2008 sprite example](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/Graphics/2D/SimpleSprite/source/template.c#L44) · [May 2008 ARM7 template](https://github.com/devkitPro/nds-examples/blob/c2d749f9d250c68e4efd709ed2cc74cce9222426/templates/combined/arm7/source/template.c#L63)

The ARM9 DS services module uses the period SDK register names. Its function index explains the native instructions when REA flattens the IRQ table, drops arguments, or combines hardware accesses. Use the April 2006 card implementation for `CARD_COMMAND[7 - index]`, the `CARD_DATA_READY` and `CARD_BUSY` tests, and the `DMA_SRC`, `DMA_DEST`, and `DMA_CR` expressions. Use the October 2007 implementations for the separate bank A–D byte writes, the interrupt flags, and the key latches. The display interrupt masks `IRQ_VBLANK`, `IRQ_HBLANK`, and `IRQ_VCOUNT` select `DISP_VBLANK_IRQ`, `DISP_HBLANK_IRQ`, and `DISP_YTRIGGER_IRQ` in `REG_DISPSTAT`. [DS services](../decompiled/arm9/platform/ds_services.c) · [April 2006 card.c](https://github.com/devkitPro/libnds/blob/79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a/source/common/card.c) · [October 2007 interrupts.c](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/common/interrupts.c) · [October 2007 video.c](https://github.com/devkitPro/libnds/blob/8ea06b95fe716cfceff0bce34232217a61e0e6c9/source/arm9/video.c)

Use the names from the installed r20-era headers for hardware registers too. ARM7 uses `SCHANNEL_*(n)` and `SOUND_CR` from `nds/arm7/audio.h`, `TIMERn_DATA` and `TIMERn_CR` from `nds/timers.h`, and `REG_SPICNT`, `REG_SPIDATA`, and `RTC_CR8` from `nds/arm7/serial.h`. ARM9 uses the display macros from `nds/arm9/video.h`, DMA macros from `nds/dma.h`, and the 32-bit divider operands and results from `nds/arm9/math.h`. Both processors use the IPC and interrupt names from `nds/ipc.h` and `nds/interrupts.h`. In the recovered C, the PCM pointers use the SDK's `VRAM` base from `nds/memory.h`. [ARM7 audio service](../decompiled/arm7/audio/service.c) · [ARM9 display setup](../decompiled/arm9/video/vdp/display_setup.c) · [Recovered PCM pointers](../rebuild/source/arm7_pcm_bases.c)

Check the native access width before translating REA into compilable C. The 68000 division code writes the 16-bit `DIV_CR` register and polls it with a 32-bit load. REA shows both under `div_control_word`. The matched `scanKeys` reads `IPC->buttons` at release offset `0x18`. The stock October 2007 header puts the field at `0x14`, so the reference build adapts the header for that routine. The raw REA bodies remain available through the reversible mappings in `variables.tsv`. [ARM7 mappings](../decompiled/arm7/variables.tsv) · [ARM9 mappings](../decompiled/arm9/variables.tsv) · [SDK build](../rebuild/sdk_arm9.py)

The ARM and Thumb entries of an SDK function can both display the same library name. `functions.tsv` records each native entry and its original Ghidra symbol. The processor's `symbol_aliases.json` records the raw symbol that a shared name represents in each affected routine. For example, `swiWaitForVBlank` in the ARM9 browser reaches the veneer at `0x020858a4`, which branches to the Thumb implementation at `0x0208031c`. Use the address with `--show --raw` to inspect either entry's original representation.

The linked SDK objects identify `_fstat_r` at `0x0208201c`, `_lseek_r` at `0x02084574`, and `_read_r` at `0x020846c0`. Their calls reach `_fstat` at `0x0208502c`, `_lseek` at `0x020850a8`, and `_read` at `0x020851cc`. [Runtime entry points](../decompiled/arm9/platform/runtime/device_io.c)

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

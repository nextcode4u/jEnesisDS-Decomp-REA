# Reading the jEnesisDS code

Start with the feature you want to understand. The Nintendo DS has two host CPUs in this codebase. ARM9 runs the emulator and draws the display. It emulates both the Genesis 68000 and Z80. ARM7 receives sound commands from ARM9 and turns them into sample buffers for the DS sound hardware.

Names in the short `// 0x…` headers describe what a routine does. Inside a body, Ghidra often uses `FUN_…` for a routine, `DAT_…` for a memory location, and `LAB_…` for a jump destination. Use the lookup command from the repository root to turn a call you are reading into a module and line number. Quote a phrase or type it as separate words.

```sh
python3 scripts/find_routine.py FUN_020033a4
python3 scripts/find_routine.py 0x037f86f4 --show
python3 scripts/find_routine.py rom browser --limit 5
```

## Start a game from the ROM browser

1. **Build the file list.** The browser enumerates the current directory, renders the page, and polls DS buttons. On selection it passes the highlighted row plus the page offset to the cartridge module. The browser returns to the application loop after a successful load. [Browser loop](../decompiled/arm9/frontend/rom_browser.c#L187)
2. **Open the selection.** A file entry opens a stream, calls the ROM loader, then closes the stream and configures cartridge save RAM if the cartridge supports it. A directory entry changes the current directory and refreshes the listing. [Selection handler](../decompiled/arm9/storage/cartridge.c#L377)
3. **Decode the ROM.** The loader reads into a shared cartridge buffer. It uses a `SEGA` signature check to choose the direct read or SMD path. The SMD path skips the 512-byte copier header and deinterleaves the data before parsing the Genesis header. The loader also picks a region and probes for existing emulator save slots. [Signature check](../decompiled/arm9/storage/cartridge.c#L165) · [Stream loader](../decompiled/arm9/storage/cartridge.c#L260)
4. **Enter gameplay.** Back on ARM9, the application prepares CPU state and shared audio buffers, resets cartridge emulation, and enters its frame loop. A return from the browser to an already loaded game takes a separate path. [Application loop](../decompiled/arm9/system/emulator.c#L343) · [Initialize emulator](../decompiled/arm9/system/emulator.c#L196) · [Reset for cartridge](../decompiled/arm9/system/emulator.c#L134)

## Follow the gameplay loop and display

The normal frame path calls the scheduler selected by the **H-INT Emulation** setting. After the scheduler returns, the main loop samples DS buttons, updates the Genesis controller state, and can wait for a DS VBlank, the interval between display refreshes. Then it calls a second callback at `0x02006a58`, which checks for viewport changes and applies pending graphics updates. [Normal frame path](../decompiled/arm9/system/emulator.c#L461) · [Controller update](../decompiled/arm9/system/emulator.c#L526) · [Callback selection](../decompiled/arm9/frontend/settings.c#L5)

| H-INT setting | First callback |
| --- | --- |
| Off | Runs active scanlines in groups of 16 and then handles the blanking interval. [Frame scheduler](../decompiled/arm9/system/emulator.c#L5) |
| On | Runs active scanlines individually. The loop calls the renderer and runs CPU timing work for each line. [Frame scheduler](../decompiled/arm9/system/emulator.c#L63) |
| Auto | An assembly dispatcher at `0x02000bbc` selects one of the two schedulers based on the emulated VDP's H-INT state. |

H-INT is the Genesis horizontal interrupt. The settings routine provides the Off and On targets. The VDP register update saves the H-INT enable bit in `0x0b003644`. The Auto dispatcher reads that byte and selects the per-line scheduler when it is nonzero. To see its two branches, run the following against the ARM9 ELF from the reference build. [VDP register update](../decompiled/arm9/video/graphics.c#L1557)

```sh
arm-none-eabi-objdump -D --start-address=0x02000bbc --stop-address=0x02000bec build/arm9.elf
```

During visible scanlines the VDP decrements its horizontal interrupt counter and reloads it from register 10 when it underflows. At the first blank line the timing code also sets the vertical blanking state. This connects the frame scheduler to VDP timing. [Horizontal counter](../decompiled/arm9/video/graphics.c#L1318) · [Start of vertical blanking](../decompiled/arm9/video/graphics.c#L1335)

Menu actions run through a separate key and touch handler. The pause screen uses the D-pad to move the viewport by changing and clamping two screen offsets. Those offsets affect how the Genesis image fits on the smaller DS screen. [Key and touch actions](../decompiled/arm9/frontend/input.c#L111) · [Viewport adjustment](../decompiled/arm9/system/emulator.c#L484) · [Graphics offsets](../decompiled/arm9/video/graphics.c#L15)

To see how Genesis video data reaches the DS, follow the display rebuild used by the save-state loader. It reapplies 24 Genesis VDP (video display processor) register values, converts 64 palette entries, and updates DS palette memory and renderer buffers. This is a concrete entry point for the hardware-facing video code. [Display rebuild](../decompiled/arm9/video/vdp/display_updates.c#L20)

The emulated CPU handlers have their own folders. The original ROM's 68000 handler table maps opcode `0x4e71` to the NOP routine in ARM9 instruction TCM. The indirect jump at the end of that routine is part of opcode dispatch. For a representative Z80 path, start at the routine that accepts a cycle budget and loads the Z80 state before dispatch. [68000 NOP](../decompiled/arm9/cpu/m68k/exceptions_and_control.c#L157) · [Z80 cycle budget](../decompiled/arm9/cpu/z80/core.c#L146)

The larger 68000 MOVE groups use the source and destination addressing modes in their paths. The MOVEM files use transfer direction and operand size. For Z80 register loads, look under `data_transfer/`. Indexed SET and RES files each cover one bit and its eight destination variants. [68000 instructions](../decompiled/arm9/cpu/m68k) · [Indexed Z80 SET and RES](../decompiled/arm9/cpu/z80/indexed_bit_set_and_reset)

### Read a large export

Start with the short ARM entry and follow branches only when they matter to the behavior you are tracing. For example, indexed Z80 `RES 0,(IX+d),B` is opcode `0x80` in the DD/FD CB table at `0x020164b0`. It enters ARM code at `0x020135b0`. The entry reads the indexed byte, clears bit 0, copies the result to the emulated B register, writes the byte back, and advances the opcode and cycle counters. The original entry is 60 bytes. The REA body runs to 172 lines because it also expands code reached through the memory and dispatch paths. [Indexed RES bit 0](../decompiled/arm9/cpu/z80/indexed_bit_set_and_reset/reset/bit_0.c#L5) · [Mapped byte read](../decompiled/arm9/cpu/z80/bus_control.c#L5)

The Z80 bus-release gate at `0x0200081c` is a second example. Its 15 ARM instructions check the Fake Z80 option, reset, and bus request before transferring to `0x0200df50`. REA expands that cycle engine into the gate's 4,360-line body. The commands below show both short entries in the reference build. [Bus-release gate](../decompiled/arm9/cpu/z80/bus_release.c#L5)

```sh
arm-none-eabi-objdump -D --start-address=0x020135b0 --stop-address=0x020135ec build/arm9.elf
arm-none-eabi-objdump -D --start-address=0x0200081c --stop-address=0x02000858 build/arm9.elf
```

Other routines are easiest to follow from their consumers. The 68000 interrupt entry at `0x01002ff0` stacks the PC using the same expression as the standalone accessor at `0x02000310`. The sprite size switch identifies 16 tile-copy helpers by width and height. The LZSS encoder calls the match tree to initialize, insert, and remove positions in its 4 KiB dictionary. [68000 PC accessor](../decompiled/arm9/cpu/m68k/cycle_budget.c#L5) · [Sprite size switch](../decompiled/arm9/video/graphics.c#L1025) · [LZSS match tree](../decompiled/arm9/storage/compression/lzss_match_tree.c#L5)

## Follow an ARM7 audio command

1. **Send a command.** During menu transitions ARM9 requests mute or unmute. The command is in the high byte of the interprocessor FIFO word. `0x0e` mutes and `0x0f` unmutes. Separate commands start or stop the ARM7 playback channels and timers. [ARM9 mute control](../decompiled/arm9/system/ipc.c#L293)
2. **Receive and apply it.** The ARM7 receive handler splits the command and payload, then invokes the installed callback. Its audio command switch handles those controls. Command `0x0b` reads buffered sound data through the shared descriptor published by ARM9. [FIFO handler](../decompiled/arm7/platform/ipc.c#L190) · [Audio command handler](../decompiled/arm7/platform/ipc.c#L16)
3. **Refill audio buffers.** While playback is enabled, the ARM7 service uses elapsed hardware timer counts to decide how many samples to generate. It handles the DAC sample stream separately and refills buffers for the PSG (tone and noise) and YM2612 (FM). The refill code wraps when a buffer reaches its end. [Timer-driven refill](../decompiled/arm7/audio/service.c#L110) · [PSG renderer](../decompiled/arm7/audio/psg.c#L59) · [Six FM channels](../decompiled/arm7/audio/ym2612/channel_rendering.c#L252)

### Follow one YM2612 channel

The YM2612 register handler updates channel settings and operator parameters. The channel renderer prepares the state for four operators, steps their envelopes when needed, and calls the sample-loop dispatcher. The algorithm determines how the four operators feed into one another and contribute to the output. [Register handler](../decompiled/arm7/audio/ym2612/registers_and_setup.c#L5) · [Channel preparation](../decompiled/arm7/audio/ym2612/channel_rendering.c#L127)

The dispatcher puts the algorithm in the high nibble and uses the low nibble for the four operator level comparisons against `0x3400`. Each algorithm file contains all 16 masks, including the variants that write silent PCM. For example, selector `0x4f` means algorithm 4 and mask `0xf`, so execution enters the handler at `0x037ff0e0`. Its index entry is reachable with `python3 scripts/find_routine.py 0x037ff0e0`. [Dispatcher](../decompiled/arm7/audio/ym2612/channel_rendering.c#L1152) · [Algorithm 4, mask 0xf](../decompiled/arm7/audio/ym2612/render/algorithm_4.c#L693)

## Follow saved data to disk

The two emulator slots use filenames ending in `_1.jst` and `_2.jst`. The writer stores the header word `0x4a530003`, selected CPU fields, and chunks of emulated memory. The reader checks the low version byte when deciding which additional fields to load. After reading, it rebuilds the display and restores the live state before returning to gameplay. [Slot filenames](../decompiled/arm9/storage/save_states.c#L341) · [Write a state](../decompiled/arm9/storage/save_states.c#L447) · [Load a state](../decompiled/arm9/storage/save_states.c#L365)

Cartridge SRAM is the game’s own persistent memory and uses `.srm` files. The cartridge code prepares SRAM after reading the ROM header. The gameplay loop can flush changed SRAM during its periodic menu and input checks. [Configure cartridge SRAM](../decompiled/arm9/storage/save_ram.c#L66) · [Flush cartridge SRAM](../decompiled/arm9/storage/save_ram.c#L32)

For the complete folder map, analysis provenance and r20 rebuild, see the [handoff](HANDOFF.md).

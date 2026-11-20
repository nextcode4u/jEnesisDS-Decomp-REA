# Reading the jEnesisDS code

Start with the feature you want to understand. The Nintendo DS has two host CPUs in this codebase. ARM9 runs the emulator and draws the display. It emulates both the Genesis 68000 and Z80. ARM7 receives sound commands from ARM9 and turns them into sample buffers for the DS sound hardware.

- [Compare the hardware paths with other emulators](#compare-the-hardware-paths-with-other-emulators)
- [Start a game from the ROM browser](#start-a-game-from-the-rom-browser)
- [Follow the gameplay loop and display](#follow-the-gameplay-loop-and-display)
- [Follow a VDP write to a DS display update](#follow-a-vdp-write-to-a-ds-display-update)
- [Read a large export](#read-a-large-export)
- [Follow a 68000 controller-port read](#follow-a-68000-controller-port-read)
- [Follow audio from ARM9 to ARM7](#follow-an-arm7-audio-command)
- [Follow saved data to disk](#follow-saved-data-to-disk)

Function names in declarations, calls, and tables come from the routine index. When a role applies to several routines, a native address suffix identifies the exact entry. `DAT_…`, `LAB_…`, and numbered locals still appear where the original representation is useful or the evidence supports only part of their meaning. Lookup accepts a displayed name, native address, or original Ghidra symbol.

```sh
python3 scripts/find_routine.py write_vdp_control_port_word --show
python3 scripts/find_routine.py 0x037f86f4 --show --raw
python3 scripts/find_routine.py rom browser --limit 5
```

The result gives a file and the line with its address label. The final bracketed word is the evidence behind the working name. For a complete example that checks the address and operation against the ROM, follow the [worked trace](VERIFYING-A-TRACE.md).

## Compare the hardware paths with other emulators

| Area | Behavior that supports the names |
| --- | --- |
| VDP control and data ports | Genesis Plus GX and PicoDrive both track the two-word command, access code, VRAM address, and DMA mode. In jEnesisDS, the first word supplies the low address and code bits. The second completes them and can trigger DMA. Follow the resulting writes to `vdp_vram`, `vdp_cram`, or `vdp_vsram`. [jEnesisDS ports](../decompiled/arm9/video/vdp/port_access.c) · [Genesis Plus GX VDP](https://github.com/ekeeke/Genesis-Plus-GX/blob/2499cd3e3d1d8b7d0130d8b2825adb4cc608b2c0/core/vdp_ctrl.c) · [PicoDrive VDP](https://github.com/notaz/picodrive/blob/26ecb2b6358fefba24e3d68b9eb2efba7f10d5ee/pico/videoport.c) |
| Genesis controller ports | Genesis Plus GX reads the TH line and handshake phase to select the six-button group. In jEnesisDS, offsets `0x1e` and `0x0c` in `port_state` choose the phase and group. The emitted levels are named for their data pins because the same pins carry different buttons at different phases. [jEnesisDS controller](../decompiled/arm9/frontend/controller_ports.c#L36) · [Genesis Plus GX gamepad](https://github.com/ekeeke/Genesis-Plus-GX/blob/2499cd3e3d1d8b7d0130d8b2825adb4cc608b2c0/core/input_hw/gamepad.c) |
| PSG | PicoDrive and Genesis Plus GX interpret bit 7 as a register latch, track the tone periods and attenuation, and advance a noise shift register. jEnesisDS uses the same register roles. ARM7's fixed-point tick accumulator controls when it updates the channel outputs. [jEnesisDS PSG](../decompiled/arm7/audio/psg.c) · [PicoDrive PSG](https://github.com/notaz/picodrive/blob/26ecb2b6358fefba24e3d68b9eb2efba7f10d5ee/pico/sound/sn76496.c) · [Genesis Plus GX PSG](https://github.com/ekeeke/Genesis-Plus-GX/blob/2499cd3e3d1d8b7d0130d8b2825adb4cc608b2c0/core/sound/psg.c) |
| YM2612 envelope | PicoDrive takes the rate shift from the high byte of a packed word, selects one of eight three-bit fields with the shifted tick counter, and derives the attenuation step from that field. jEnesisDS uses the same calculation in its per-operator envelope routine, with a loop that advances to `end_tick`. [jEnesisDS envelope](../decompiled/arm7/audio/ym2612/channel_rendering.c#L5) · [PicoDrive YM2612](https://github.com/notaz/picodrive/blob/26ecb2b6358fefba24e3d68b9eb2efba7f10d5ee/pico/sound/ym2612.c) |

The name tables cite jEnesisDS addresses and operations. These comparisons establish hardware roles and an arithmetic resemblance. The source history of the jEnesisDS routines remains open. [ARM9 variable evidence](../decompiled/arm9/variables.tsv) · [ARM7 variable evidence](../decompiled/arm7/variables.tsv)

## Start a game from the ROM browser

1. **Build the file list.** The browser enumerates the current directory, renders the page, and polls DS buttons. On selection it passes the highlighted row plus the page offset to the cartridge module. The browser returns to the application loop after a successful load. [Browser loop](../decompiled/arm9/frontend/rom_browser.c#L187)
   Directory enumeration calls device-table wrappers to open the path, read successive entries, and close the handle. The wrapper loads the driver callback from a fixed table offset. This gives you a route from the browser to the storage implementation. [Directory enumeration](../decompiled/arm9/frontend/rom_browser.c#L151) · [Device wrappers](../decompiled/arm9/platform/runtime/device_io.c#L614)
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

H-INT is the Genesis horizontal interrupt. The settings routine provides the Off and On targets. The VDP register update saves the H-INT enable bit in `0x0b003644`. The Auto dispatcher reads that byte and selects the per-line scheduler when it is nonzero. To see its two branches, run the following against the ARM9 ELF from the reference build. [VDP register update](../decompiled/arm9/video/graphics.c#L243)

```sh
arm-none-eabi-objdump -D --start-address=0x02000bbc --stop-address=0x02000bec build/arm9.elf
```

During visible scanlines the VDP decrements its horizontal interrupt counter and reloads it from register 10 when it underflows. At the first blank line the timing code also sets the vertical blanking state. This connects the frame scheduler to VDP timing. [Horizontal counter](../decompiled/arm9/video/graphics.c#L162) · [Start of vertical blanking](../decompiled/arm9/video/graphics.c#L179)

Menu actions run through a separate key and touch handler. The pause screen uses the D-pad to move the viewport by changing and clamping two screen offsets. Those offsets affect how the Genesis image fits on the smaller DS screen. [Key and touch actions](../decompiled/arm9/frontend/input.c#L111) · [Viewport adjustment](../decompiled/arm9/system/emulator.c#L484) · [Graphics offsets](../decompiled/arm9/video/graphics.c#L15)

To see how Genesis video data reaches the DS, follow the display rebuild used by the save-state loader. It reapplies 24 Genesis VDP (video display processor) register values, converts 64 palette entries, and updates DS palette memory and renderer buffers. This is a concrete entry point for the hardware-facing video code. [Display rebuild](../decompiled/arm9/video/vdp/display_updates.c#L20)

The emulated CPU handlers have their own folders. The original ROM's 68000 handler table maps opcode `0x4e71` to the NOP routine in ARM9 instruction TCM. The indirect jump at the end of that routine is part of opcode dispatch. For a representative Z80 path, start at the routine that accepts a cycle budget and loads the Z80 state before dispatch. [68000 NOP](../decompiled/arm9/cpu/m68k/exceptions_and_control.c#L157) · [Z80 cycle budget](../decompiled/arm9/cpu/z80/core.c#L146)

The larger 68000 MOVE groups use the source and destination addressing modes in their paths. The MOVEM files use transfer direction and operand size. For Z80 register loads, look under `data_transfer/`. Indexed SET and RES files each cover one bit and its eight destination variants. [68000 instructions](../decompiled/arm9/cpu/m68k) · [Indexed Z80 SET and RES](../decompiled/arm9/cpu/z80/indexed_bit_set_and_reset)

### Follow a VDP write to a DS display update

| Task | Where to read |
| --- | --- |
| Decode a Genesis control or data write | The control port handles register writes and assembles two-word commands. The data port uses the resulting address and access code. [Control and data ports](../decompiled/arm9/video/vdp/port_access.c) |
| Run a Genesis DMA command | The emulated VDP dispatches transfers from the 68000 bus, fills, and VRAM copies from the latched mode and length. [Genesis DMA](../decompiled/arm9/video/vdp/dma.c) |
| Update DS background tilemaps | The renderer selects a layout for Plane A, Plane B, or the window. The active layout determines where a tilemap word goes and which bulk copy routine applies. [Plane selector](../decompiled/arm9/video/vdp/display_setup.c#L182) · [Tilemap writes](../decompiled/arm9/video/vdp/tilemap_writes.c) · [Tilemap transfers](../decompiled/arm9/video/vdp/tilemap_transfers.c) |
| Submit DS sprite attributes | The renderer writes coordinates and attributes into a staging buffer. It cleans and invalidates the affected ARM9 data cache lines and starts DMA3 to hardware sprite attribute memory (OAM). [Sprite updates](../decompiled/arm9/video/sprites/state_updates.c) · [ARM946E-S technical reference manual](https://documentation-service.arm.com/static/5f032835cafe527e86f5b8ad) |

Genesis DMA changes the emulator's VDP state. DS DMA3 moves prepared data to the DS display hardware. In the native OAM copy at `0x02008914`, the polling branch repeats only while the DMA3 control register has its busy bit set. In the native palette upload at `0x020090a0`, DMA3 transfers 64 halfwords from the staging buffer to each of `0x05000000` (main background) and `0x05000200` (main sprite). Use the ARM instructions to see both transfers and the sprite wait condition. [Display checks](VERIFYING-A-TRACE.md#5-check-the-ds-display-transfers)

For the 68000, shifts, rotates, bit tests, and bit changes have separate files. The Z80 ED arithmetic, absolute-address transfers, and interrupt or special-register instructions also have separate files. Under indexed register loads, follow the direction of the data to find transfers into or out of the high and low bytes of IX or IY. [68000 shifts and bit operations](../decompiled/arm9/cpu/m68k/shifts_and_bits) · [Z80 ED instructions](../decompiled/arm9/cpu/z80/ed_prefix) · [Z80 indexed register loads](../decompiled/arm9/cpu/z80/indexed/register_loads)

### Read a large export

Start with the short ARM entry and follow branches only when they matter to the behavior you are tracing. For example, indexed Z80 `RES 0,(IX+d),B` is opcode `0x80` in the DD/FD CB table at `0x020164b0`. It enters ARM code at `0x020135b0`. The entry reads the indexed byte, clears bit 0, copies the result to the emulated B register, writes the byte back, and advances the opcode and cycle counters. The original entry is 60 bytes. The REA body runs to 172 lines because it also expands code reached through the memory and dispatch paths. [Indexed RES bit 0](../decompiled/arm9/cpu/z80/indexed_bit_set_and_reset/reset/bit_0.c#L5) · [Mapped byte read](../decompiled/arm9/cpu/z80/bus_control.c#L5)

The Z80 bus-release gate at `0x0200081c` is a second example. Its 15 ARM instructions check the Fake Z80 option, reset, and bus request before transferring to `0x0200df50`. REA expands that cycle engine into the gate's 4,360-line body. The commands below show both short entries in the reference build. [Bus-release gate](../decompiled/arm9/cpu/z80/bus_release.c#L5)

```sh
arm-none-eabi-objdump -D --start-address=0x020135b0 --stop-address=0x020135ec build/arm9.elf
arm-none-eabi-objdump -D --start-address=0x0200081c --stop-address=0x02000858 build/arm9.elf
```

Other routines are easiest to follow from their consumers. The 68000 interrupt entry at `0x01002ff0` stacks the PC using the same expression as the standalone accessor at `0x02000310`. The sprite size switch identifies 16 tile-copy helpers by width and height. The LZSS encoder calls the match tree to initialize, insert, and remove positions in its 4 KiB dictionary. [68000 PC accessor](../decompiled/arm9/cpu/m68k/cycle_budget.c#L5) · [Sprite size switch](../decompiled/arm9/video/graphics.c#L67) · [LZSS match tree](../decompiled/arm9/storage/compression/lzss_match_tree.c#L5)

## Follow a 68000 controller-port read

A Genesis game reading byte address `0xa10003` is asking for controller port 1. By this point the DS buttons have been sampled into the emulated controller state. A pressed button is represented by a zero. [DS input to Genesis controller](../decompiled/arm9/system/emulator.c#L526)

1. **Select the bus page.** The 68000 byte-read helper uses page `0xa1` to index its handler table. Startup fills four 256-entry tables for byte reads, word reads, byte writes, and word writes. Long accesses can combine word operations. [Read a bus byte](../decompiled/arm9/cpu/m68k/bus_access.c#L5) · [Initialize tables](../decompiled/arm9/cpu/m68k/bus_dispatch.c#L246)
2. **Decode the port.** The `0xa1` byte-read handler sends addresses below `0xa10020` to the Genesis I/O reader. The reader masks the low address with `0xfe`, turning offset `0x03` into port 1 selector `0x02`. [I/O and mapper handler](../decompiled/arm9/cpu/m68k/bus_dispatch.c#L340) · [Genesis I/O reader](../decompiled/arm9/frontend/input.c#L5)
3. **Assemble the return value.** The port state supplies the output latch and direction mask. TH, the controller select line, and the six-button handshake phase determine which button group the game sees. The controller helper exposes the same masking logic separately. [Controller-port pins](../decompiled/arm9/frontend/controller_ports.c#L36)

The original ARM write handler at `0x02003a68` takes TH from bit 6 of the written byte. In six-button mode it reads the 68000 cycle counter, clears the handshake phase when the stored interval reaches `0x2000`, and advances it on a high-to-low TH transition. This entry is visible in the ARM9 listing.

```sh
arm-none-eabi-objdump -D --start-address=0x02003a68 --stop-address=0x02003ad4 build/arm9.elf
```

VDP reads use a different bus path. The port decoder selects data, status, or the horizontal and vertical counters. A data read advances the latched address, while a status read clears the command latch and selected status flags. [VDP port reads](../decompiled/arm9/video/vdp/port_reads.c)

## Follow an ARM7 audio command

1. **Send a command.** During menu transitions ARM9 requests mute or unmute. The command is in the high byte of the interprocessor FIFO word. `0x0e` mutes and `0x0f` unmutes. Separate commands start or stop the ARM7 playback channels and timers. [ARM9 mute control](../decompiled/arm9/system/ipc.c#L302)
2. **Receive and apply it.** The ARM7 receive handler splits the command and payload, then invokes the installed callback. Its audio command switch handles those controls. Command `0x0b` reads buffered sound data through the shared descriptor published by ARM9. [FIFO handler](../decompiled/arm7/platform/ipc.c#L190) · [Audio command handler](../decompiled/arm7/platform/ipc.c#L16)
3. **Refill audio buffers.** While playback is enabled, the ARM7 service uses elapsed hardware timer counts to decide how many samples to generate. It handles the DAC sample stream separately and refills buffers for the PSG (tone and noise) and YM2612 (FM). The refill code wraps when a buffer reaches its end. [Timer-driven refill](../decompiled/arm7/audio/service.c#L110) · [PSG renderer](../decompiled/arm7/audio/psg.c#L59) · [Six FM channels](../decompiled/arm7/audio/ym2612/channel_rendering.c#L252)

To follow a game's sound-register write, start on ARM9. A Z80 mapped write can reach the YM2612 queue, where the address ports select a register and the data ports update its mirror and buffer. ARM9 writes the lengths of the two FM-bank buffers and the PSG buffer at descriptor offsets `0x14`, `0x24`, and `0x34`. FIFO command `0x0b` tells ARM7 to consume those buffers. DAC sample bytes use command `0x10` and a separate buffer. [Z80 mapped write](../decompiled/arm9/cpu/z80/memory_writes.c#L5) · [YM2612 queue](../decompiled/arm9/system/ipc.c#L14) · [Buffer submission](../decompiled/arm9/system/ipc.c#L206) · [ARM7 command switch](../decompiled/arm7/platform/ipc.c#L16)

### Follow one YM2612 channel

The YM2612 register handler updates channel settings and operator parameters. The channel renderer prepares the state for four operators, steps their envelopes when needed, and calls the sample-loop dispatcher. The algorithm determines how the four operators feed into one another and contribute to the output. [Register handler](../decompiled/arm7/audio/ym2612/registers_and_setup.c#L5) · [Channel preparation](../decompiled/arm7/audio/ym2612/channel_rendering.c#L127)

The dispatcher puts the algorithm in the high nibble and uses the low nibble for the four operator level comparisons against `0x3400`. Each algorithm file contains all 16 masks, including the variants that write silent PCM. For example, selector `0x4f` means algorithm 4 and mask `0xf`, so execution enters the handler at `0x037ff0e0`. Its index entry is reachable with `python3 scripts/find_routine.py 0x037ff0e0`. [Dispatcher](../decompiled/arm7/audio/ym2612/channel_rendering.c#L1152) · [Algorithm 4, mask 0xf](../decompiled/arm7/audio/ym2612/render/algorithm_4.c#L693)

## Follow saved data to disk

**A save slot captures the emulator's running state.** Follow slot 1 from the menu to disk.

1. The slots are probed when a ROM is loaded. The presence flags control whether the slot dialog shows a load action. The dialog routes the chosen action to the loader or writer with the slot number. [Slot probe](../decompiled/arm9/storage/save_states.c#L504) · [Slot dialog](../decompiled/arm9/storage/save_states.c#L5)
2. The path builder uses the current cartridge filename to form a path ending in `_1.jst` or `_2.jst`. Type `python3 scripts/find_routine.py FUN_0200d0b8 --show` to see the suffix bytes and slot digit. [Slot path](../decompiled/arm9/storage/save_states.c#L332)
3. The writer opens the path and writes the header word `0x4a530003`, followed by CPU fields and emulated memory regions. The reader consults the low version byte when deciding whether to read the additional fields. It rebuilds the display and restores live state after reading. [Write a state](../decompiled/arm9/storage/save_states.c#L438) · [Load a state](../decompiled/arm9/storage/save_states.c#L356)

The writer converts the 68000's live host fetch pointer into a Genesis program counter before serialization. The reader maps that guest address back into host memory. The Z80 uses a related conversion for its program counter and stack pointer, storing offsets from its RAM base. These conversions explain why the writer and reader call CPU helpers around the file operations. [Encode 68000 PC](../decompiled/arm9/storage/save_states.c#L209) · [Rebase 68000 PC](../decompiled/arm9/storage/save_states.c#L170) · [Z80 pointer conversions](../decompiled/arm9/storage/save_states.c#L126)

Cartridge SRAM is the game’s own persistent memory and uses `.srm` files. The cartridge code prepares SRAM after reading the ROM header. The gameplay loop can flush changed SRAM during its periodic menu and input checks. [Configure cartridge SRAM](../decompiled/arm9/storage/save_ram.c#L66) · [Flush cartridge SRAM](../decompiled/arm9/storage/save_ram.c#L32)

For the complete folder map, analysis provenance and r20 rebuild, see the [handoff](HANDOFF.md).

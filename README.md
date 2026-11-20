# jEnesisDS Decomp REA

This workspace contains a static decompilation of Stephan Dittrich’s jEnesisDS 0.7.4 Nintendo DS emulator. REA 6.9.0 exported C-like pseudocode from Ghidra 12.1.4 projects for the two processors. The exports are generated analysis, with inferred types, names, and function boundaries. Rebuilding the emulator would require further source reconstruction and validation. Use the Ghidra listings to confirm behavior around computed jumps, shared assembly tails, and hardware registers.

REA exported 2,879 ARM9 functions and 204 ARM7 functions. Each named file carries an analysis note followed by the original REA pseudocode. The indexes record the filename, original Ghidra symbol, and hashes used to verify both forms. The indexes cover all 2,336 identified ARM9 dispatch targets and all 128 ARM7 dispatch targets.

## Matching ROM rebuild

The rebuilt ROM matches the original release byte for byte. The build assembles the recovered ARM9 and ARM7 startup routines in [arm9.s](rebuild/arm9.s) and [arm7.s](rebuild/arm7.s), links the remaining code and data from the input ROM at their original addresses, and preserves the original cartridge metadata. A build from source alone still requires recovering the emulator payload.

### Build in WSL

1. Extract `jEnesisDS.nds` from the original 0.7.4 archive to `input/jEnesisDS.nds`. The expected SHA-256 is `cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104`. [Original release archive listing](https://db.universal-team.net/ds/jenesisds)
2. Extract the r20 Win32 toolchain archive with 7-Zip. The rebuild uses `arm-eabi-as.exe`, `arm-eabi-ld.exe`, and `arm-eabi-objcopy.exe` from its `devkitARM/bin` directory. Make these files executable in WSL if needed. [Archived devkitARM r20](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)
3. Run the builder with Python 3 and the path to the toolchain prefix.

```bash
python3 rebuild/build.py --tool-prefix /path/to/devkitARM/bin/arm-eabi-
cmp input/jEnesisDS.nds build/jEnesisDS-0.7.4-rebuilt.nds
```

The builder also recognizes r20 tools cached under `~/.cache/jenesisds-decomp/devkitarm-r20/bin`. It verifies both CPU images before writing the rebuilt ROM, linked ELFs, and linker maps to `build/`.

The ARM9 startup matches the archived devkitARM r20 startup object, and several linked runtime routines match r20’s GCC 4.1.1 libraries. Eighteen object sections match libfat-nds 20070127 after accounting for relocations. The exact libnds revision remains open. [Period devkitPro build configuration](https://github.com/devkitPro/buildscripts/blob/dbc4d7d1aa052767680e73f3604f6ae1d486ac31/build-devkit.sh)

The byte-matched rebuild booted in melonDS 1.1 and loaded a Genesis diagnostic ROM from a virtual DLDI SD card. The diagnostic alternated red and cyan through the emulated 68000 and VDP.

## Files

| Path | Contents |
| --- | --- |
| [ARM9 index](decompiled/arm9/functions.tsv) | ARM9 roles, descriptions, analysis basis, and relative file paths |
| [ARM7 index](decompiled/arm7/functions.tsv) | ARM7 roles, descriptions, analysis basis, and relative file paths |
| [Extracted layout](extracted/nds-layout.json) | Original ROM offsets, entry and load addresses, lengths, and SHA-256 digests |
| [Nintendo DS header](evidence/nds-header.txt) | Header values and CRCs from the original ROM |
| [Rebuild script](rebuild/build.py) | Assembles both startup routines, links the payload, and verifies the result |

Use the processor TSVs to filter by subsystem, role, or address. The filename ends in the eight-digit address used by the Ghidra listing. ARM9 is still organized into seven export ranges.

## Reading the named functions

| Subsystem | Starting points |
| --- | --- |
| ARM9 startup | [Map TCM and start ARM9](decompiled/arm9/part-01/functions/start_arm9_and_map_tcm_02000000.c) |
| ROM browser | [Run the browser event loop](decompiled/arm9/part-01/functions/run_rom_browser_event_loop_020034b0.c) |
| Cartridge formats | [Deinterleave SMD blocks](decompiled/arm9/part-01/functions/deinterleave_smd_rom_blocks_02001c4c.c) · [Load the selected ROM](decompiled/arm9/part-01/functions/load_genesis_rom_from_stream_02001d40.c) |
| Save states | [Load a savestate](decompiled/arm9/part-01/functions/load_emulator_savestate_0200d13c.c) · [Write a savestate](decompiled/arm9/part-01/functions/write_emulator_savestate_0200d4c8.c) |
| CPU dispatch | [M68000 NOP](decompiled/arm9/part-01/functions/m68k_nop_01003d00.c) · [Z80 NOP](decompiled/arm9/part-01/functions/z80_nop_01000020.c) |
| ARM7 audio | [Run the audio service](decompiled/arm7/functions/run_arm7_audio_service_037f81f4.c) · [Update audio from the timers](decompiled/arm7/functions/update_audio_from_hardware_timers_037fbeb8.c) |
| Genesis sound | [Render PSG samples](decompiled/arm7/functions/render_psg_samples_037f86f4.c) · [Prepare and render an FM channel](decompiled/arm7/functions/prepare_and_render_fm_channel_037f95fc.c) |
| ARM7 IPC | [Dispatch a receive interrupt](decompiled/arm7/functions/dispatch_fifo_receive_interrupt_037fc468.c) · [Handle an ARM9 audio command](decompiled/arm7/functions/handle_arm9_audio_command_037fc218.c) |

The `basis` column shows how each description was assigned.

- **Reviewed** identifies a role traced in the decompiled body or startup assembly.
- **Dispatch table** identifies the handler’s incoming opcode or FM selectors. A shared handler can have additional aliases.
- **Library match** uses symbols from matching historical libfat, libnds, newlib, or libgcc objects after accounting for relocations.
- **Control flow**, **call context**, and **pseudocode clue** describe visible behavior or nearby functions. Treat them as working names.
- **Unresolved** marks routines whose purpose is still open.

Instruction decoding references include the Motorola M68000 and Zilog Z80 manuals. [M68000 Programmer’s Reference Manual](https://www.nxp.com/docs/en/reference-manual/M68000PRM.pdf) · [Z80 CPU User Manual](https://www.zilog.com/docs/z80/um0080.pdf)

## Addresses

| Image | ROM offset | Load and entry address | Payload |
| --- | --- | --- | --- |
| ARM9 | `0x00000200` | `0x02000000` | `0x98f70` bytes |
| ARM7 | `0x00099200` | `0x037f8000` | `0xed94` bytes |

ARM9 startup copies the bytes from `0x020936f0` to `0x01000000` for ITCM and the bytes from `0x02090004` to `0x0b000000` for DTCM. The ARM9 project maps both destinations and the BSS range. The ARM7 project maps its BSS range from `0x03806d94` through `0x0380becc` exclusive.

| Processor | Entry | Main routine | Dispatch table |
| --- | --- | --- | --- |
| ARM9 | [`0x02000000`](decompiled/arm9/part-01/functions/start_arm9_and_map_tcm_02000000.c) | [`0x020011e4`](decompiled/arm9/part-01/functions/run_emulator_and_file_menu_020011e4.c) | M68000 at `0x02032c28` and Z80 at `0x020153f0` |
| ARM7 | [`0x037f8000`](decompiled/arm7/functions/start_arm7_audio_processor_037f8000.c) | [`0x037f81f4`](decompiled/arm7/functions/run_arm7_audio_service_037f81f4.c) | `0x03800e50` |

The ARM9 M68000 table has 65,536 little-endian words. For opcode `0x4e71` (NOP), the pointer is at `0x02032c28 + 4 × 0x4e71` and resolves to [`0x01003d00`](decompiled/arm9/part-01/functions/m68k_nop_01003d00.c) in ITCM. The Z80 analysis seeds the 1,328 contiguous ARM pointers beginning at `0x020153f0`. Some entries share a native handler. The ARM7 table has 128 pointers followed by a literal referring back to the table.

## Reproduce the REA export

From WSL, use Python 3, ripgrep, GNU ARM binutils, a full JDK 21, Ghidra 12.1.4, and REA 6.9.0 running on Node.js 24.22.3. The scripts use the compatible tools cached for this run under `~/.cache/jenesisds-decomp`. Set `GHIDRA_INSTALL_DIR` to use a different Ghidra install. REA and its Node runtime can also come from `PATH`. The default GNU ARM binutils path is `/opt/devkitpro/devkitARM/bin/arm-none-eabi-`. Override it with `ARM_TOOL_PREFIX` if needed.

```bash
bash scripts/build_ghidra.sh
REA_OUTPUT_DIR=build/rea-decompiled REA_EVIDENCE_DIR=build/rea-evidence bash scripts/decompile.sh
```

The build script creates local projects under `ghidra/` and stops if a matching project already exists. Keep each `.gpr` beside its corresponding `.rep` directory when opening it in Ghidra. The export destinations in the command above keep the checked-in snapshots available alongside the new analysis. The decompile script resumes a matching export when its export journal is present. Both scripts also accept `arm9` or `arm7`. The GNU linker supplies analysis-only ELF containers whose `.text` sections match the extracted NDS images byte for byte. This lets REA reuse the prepared Ghidra projects with the processor, RAM, and dispatch mappings already applied.

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

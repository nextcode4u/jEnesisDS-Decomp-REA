# jEnesisDS Decomp REA

This workspace contains a static decompilation of Stephan Dittrich’s jEnesisDS 0.7.4 Nintendo DS emulator. REA 6.9.0 exported C-like pseudocode from Ghidra 12.1.4 projects for the two processors. The exports are generated analysis, with inferred types, names, and function boundaries. Rebuilding the emulator would require further source reconstruction and validation. Use the Ghidra listings to confirm behavior around computed jumps, shared assembly tails, and hardware registers.

REA exported 2,879 ARM9 functions and 204 ARM7 functions. Every pseudocode file matches its REA index hash. The indexes cover all 2,336 identified ARM9 dispatch targets and all 128 ARM7 dispatch targets.

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
| [ARM9 index](decompiled/arm9/functions.tsv) | Address-sorted index of all ARM9 exports, including the relative path for each function |
| [ARM7 index](decompiled/arm7/decompile-index.json) | Function names, addresses, pseudocode paths, and per-function export status |
| [Extracted layout](extracted/nds-layout.json) | Original ROM offsets, entry and load addresses, lengths, and SHA-256 digests |
| [Nintendo DS header](evidence/nds-header.txt) | Header values and CRCs from the original ROM |
| [Rebuild script](rebuild/build.py) | Assembles both startup routines, links the payload, and verifies the result |

Use the ARM9 or ARM7 index to find a function by address. ARM9 is exported in seven address ranges, with a REA index in each part and a combined TSV in the ARM9 directory.

## Addresses

| Image | ROM offset | Load and entry address | Payload |
| --- | --- | --- | --- |
| ARM9 | `0x00000200` | `0x02000000` | `0x98f70` bytes |
| ARM7 | `0x00099200` | `0x037f8000` | `0xed94` bytes |

ARM9 startup copies the bytes from `0x020936f0` to `0x01000000` for ITCM and the bytes from `0x02090004` to `0x0b000000` for DTCM. The ARM9 project maps both destinations and the BSS range. The ARM7 project maps its BSS range from `0x03806d94` through `0x0380becc` exclusive.

| Processor | Entry | Main routine | Dispatch table |
| --- | --- | --- | --- |
| ARM9 | [`0x02000000`](decompiled/arm9/part-01/functions/0x2000000.c) | [`0x020011e4`](decompiled/arm9/part-01/functions/0x20011e4.c) | M68000 at `0x02032c28` and Z80 at `0x020153f0` |
| ARM7 | [`0x037f8000`](decompiled/arm7/functions/0x37f8000.c) | [`0x037f81f4`](decompiled/arm7/functions/0x37f81f4.c) | `0x03800e50` |

The ARM9 M68000 table has 65,536 little-endian words. For opcode `0x4e71` (NOP), the pointer is at `0x02032c28 + 4 × 0x4e71` and resolves to [`0x01003d00`](decompiled/arm9/part-01/functions/0x1003d00.c) in ITCM. The Z80 analysis seeds the 1,328 contiguous ARM pointers beginning at `0x020153f0`. Some entries share a native handler. The ARM7 table has 128 pointers followed by a literal referring back to the table.

## Reproduce the REA export

From WSL, use Python 3, ripgrep, GNU ARM binutils, a full JDK 21, Ghidra 12.1.4, and REA 6.9.0 running on Node.js 24.22.3. The scripts use the compatible tools cached for this run under `~/.cache/jenesisds-decomp`. Set `GHIDRA_INSTALL_DIR` to use a different Ghidra install. REA and its Node runtime can also come from `PATH`. The default GNU ARM binutils path is `/opt/devkitpro/devkitARM/bin/arm-none-eabi-`. Override it with `ARM_TOOL_PREFIX` if needed.

```bash
bash scripts/build_ghidra.sh
REA_OUTPUT_DIR=build/rea-decompiled REA_EVIDENCE_DIR=build/rea-evidence bash scripts/decompile.sh
```

The build script creates local projects under `ghidra/` and stops if a matching project already exists. Keep each `.gpr` beside its corresponding `.rep` directory when opening it in Ghidra. The export destinations in the command above keep the checked-in snapshots available alongside the new analysis. The decompile script resumes a matching export when its export journal is present. Both scripts also accept `arm9` or `arm7`. The GNU linker supplies analysis-only ELF containers whose `.text` sections match the extracted NDS images byte for byte. This lets REA reuse the prepared Ghidra projects with the processor, RAM, and dispatch mappings already applied.

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

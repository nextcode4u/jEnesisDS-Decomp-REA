# jEnesisDS Decomp REA

This branch groups the static REA and Ghidra analysis of jEnesisDS 0.7.4 into 256 modules. It covers 2,879 ARM9 routines and 204 ARM7 routines. The files contain C-like pseudocode with descriptive routine and variable names. Known library functions use their original libnds, libfat, newlib, and devkitARM names at definitions and call sites. The routine lookup can also show the original REA identifiers. Use the listings and recovered assembly when tracing dispatch, shared tails, and hardware registers.

## Start here

| I want to… | Start with |
| --- | --- |
| Follow the emulator from the ROM browser through a frame, sound, or a save | [Reading guide](docs/READING-GUIDE.md) |
| Find a routine or check what an opcode does | [Worked trace](docs/VERIFYING-A-TRACE.md) |
| Orient myself in the repository or reproduce the analysis | [Handoff and folder map](docs/HANDOFF.md) |

You can browse the code and run routine lookups with Python 3 and the files in this branch. The reference ROM and toolchain are needed for rebuilding and checking the original ARM instructions.

```sh
python3 scripts/find_routine.py open_rom_from_browser_selection --show
```

The result points to the ROM browser's selection handler in [cartridge.c](decompiled/arm9/storage/cartridge.c#L377).

## Find a subsystem

| Processor | Where to start |
| --- | --- |
| ARM9 | [Emulator and startup](decompiled/arm9/system), [68000 and Z80](decompiled/arm9/cpu), [video](decompiled/arm9/video), [menus and input](decompiled/arm9/frontend), [ROM and save storage](decompiled/arm9/storage), [DS services and runtime](decompiled/arm9/platform) |
| ARM7 | [Audio, PSG, and DAC](decompiled/arm7/audio), [YM2612 algorithms](decompiled/arm7/audio/ym2612/render), [IPC, interrupts, and DS services](decompiled/arm7/platform) |

The [ARM9 index](decompiled/arm9/functions.tsv) and [ARM7 index](decompiled/arm7/functions.tsv) map each address to its module and starting line. Run `python3 scripts/check_pseudocode.py` to verify all indexed bodies.

## Compile recovered C with devkitARM r20

Extract the complete r20 Win32 toolchain and put the original ROM in `input/jEnesisDS.nds`. In WSL, run Make from a Windows-mounted working folder, or set `R20_BUILD_DIR` to a Windows-mounted directory. The compiler needs the full installation, including its C compiler and headers. [Archived devkitARM r20](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

```sh
make check-c R20_ROOT=/mnt/d/tools/devkitARM
make reference-c R20_ROOT=/mnt/d/tools/devkitARM
make check-pseudocode
```

`check-c` compares all 2,948 bytes of 38 recovered ARM9 and ARM7 routines with the original ROM. `reference-c` links those C objects and the r20 runtime initialization sections at their original addresses. It verifies the entire result at `build/reference-c/jEnesisDS-0.7.4-rebuilt.nds` and uses the original ROM for the remaining payload. Use `ROM=/path/to/jEnesisDS.nds` if the input is stored elsewhere. [Recovered C](rebuild/source) · [Verified ranges](docs/HANDOFF.md#compile-the-recovered-arm9-c)

`make check-lzss` uses Python Unicorn to compare the recovered compression and file-entry code with the original ARM9 routines. `make check-sdk` recompiles and compares selected period ndslib and libnds sources. [Test setup](docs/HANDOFF.md#verify-lzss-behavior) · [SDK comparison](docs/HANDOFF.md#reproduce-the-sdk-comparison)

Use `make reference-c-sdk` with the same `R20_ROOT` and a `LIBNDS_REPO` history checkout to also link the period libnds key routines and ITCM interrupt dispatcher into the full ROM. [SDK source build](docs/HANDOFF.md#link-the-period-libnds-sources)

`make check-codec-rom` builds a ROM with the full recovered LZSS codec in place and runs the 135 Unicorn comparisons against its linked entries. It writes `build/reference-c-codec/jEnesisDS-codec-test.nds`. [Codec ROM verification](docs/HANDOFF.md#verify-lzss-behavior)

`make check-lzss-standalone` compiles and runs the codec with its own storage and the host C library. That check needs only a C99 compiler and the checkout. [Standalone codec storage](rebuild/source/lzss_state.c)

## Matching ROM rebuild in WSL

1. Extract `jEnesisDS.nds` from the original 0.7.4 archive into `input/`. Its SHA-256 is `cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104`. [Original release listing](https://db.universal-team.net/ds/jenesisds)
2. Extract the r20 Win32 toolchain archive with 7-Zip. The rebuild uses `arm-eabi-as.exe`, `arm-eabi-ld.exe`, and `arm-eabi-objcopy.exe` in its `devkitARM/bin` directory. The default cache is `~/.cache/jenesisds-decomp/devkitarm-r20/bin`. [Archived devkitARM r20](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)
3. Build and compare the ROM from the repository root.

```bash
python3 rebuild/build.py --tool-prefix /path/to/devkitARM/bin/arm-eabi-
cmp input/jEnesisDS.nds build/jEnesisDS-0.7.4-rebuilt.nds
```

If the tools are in the default cache, run `python3 rebuild/build.py`. A successful build prints the rebuilt ROM's SHA-256 and leaves `build/arm9.elf` and `build/arm7.elf` for disassembly. A successful `cmp` produces no output.

The builder assembles the recovered startup code and links it with the unreconstructed code and data from the input ROM. This produces the byte-for-byte reference. The separate C port has its own build and compatibility notes. [BlocksDS port](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/blocksds-port)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

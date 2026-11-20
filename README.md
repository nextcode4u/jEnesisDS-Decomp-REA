# jEnesisDS Decomp REA

This branch groups the static REA and Ghidra analysis of jEnesisDS 0.7.4 into 256 modules. It covers 2,879 ARM9 routines and 204 ARM7 routines. The files contain C-like pseudocode with descriptive routine and variable names. Known library functions use their original libnds, libfat, newlib, and devkitARM names at definitions and call sites. The routine lookup can also show the original REA identifiers. Use the listings and recovered assembly when tracing dispatch, shared tails, and hardware registers.

## Start here

| I want to… | Start with |
| --- | --- |
| Follow the emulator from the ROM browser through a frame, sound, or a save | [Reading guide](docs/READING-GUIDE.md) |
| Find a routine or check what an opcode does | [Worked trace](docs/VERIFYING-A-TRACE.md) |
| Orient myself in the repository or reproduce the analysis | [Handoff and folder map](docs/HANDOFF.md) |

You can browse the code and run routine lookups with Python 3 and the files in this branch. The recovered C regions build with the r20 toolchain and the period libnds headers. The original release is needed for byte comparison and for supplying the remaining payload in the reference rebuild.

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

## Build with the period devkitPro SDK

Install these archives as sibling directories under a devkitPro root. With the archived Win32 toolchain in WSL, use a Windows-mounted checkout and an SDK installation path without spaces.

| Directory | Package |
| --- | --- |
| `devkitARM/` | [devkitARM r20 Win32](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/) |
| `libnds/` | [libnds 20071023](https://wii.leseratte10.de/devkitPro/libnds/libnds-20071023.tar.bz2) |
| `libfat/` | [libfat-nds 20070127](https://wii.leseratte10.de/devkitPro/libfat/libfat-nds-20070127.tar.bz2) |

```sh
export DEVKITPRO=/mnt/d/tools/devkitPro
export DEVKITARM="$DEVKITPRO/devkitARM"
make r20-homebrew
```

The target uses the installed `ds_rules` and `ds_arm7.specs` and `ds_arm9.specs`, then packages both processors with r20's `ndstool`. It compiles the recovered C into two archives and links the routines used by a standalone SDK validation program at `build/r20-homebrew/sdk-check.nds`. The program exercises the recovered ARM9 FIFO with ARM7 and initializes libfat through `fatInitDefault`. [Build and test details](docs/HANDOFF.md#build-and-test-the-period-devkitpro-sdk)

## Compile recovered C with devkitARM r20

Set `R20_ROOT` to the same `devkitARM` directory. The fixed-address recovered C checks use the installed libnds headers. They look for `libnds` beside the toolchain or at the `LIBNDS` path you supply. In WSL, run Make from a Windows-mounted working folder or set `R20_BUILD_DIR` to a Windows-mounted directory.

```sh
make recovered-c R20_ROOT="$DEVKITARM"
make compare-recovered-c ROM=input/jEnesisDS.nds
make reference-c R20_ROOT="$DEVKITARM"
make check-pseudocode
```

`recovered-c` builds ELF and binary sections under `build/recovered-c/` without opening a ROM. `compare-recovered-c` compares the saved output with the original release. It checks 327,824 bytes across 79 regions, including both CPU dispatch tables, 68000 condition and rotate tables, VDP counters and DS sprite geometry, the YM2612 and PSG lookup tables, and the 32 KiB default DLDI area. `check-c` combines the build and comparison into one command. Put the original ROM in `input/jEnesisDS.nds` for the comparisons and reference rebuilds. `reference-c` links those C objects and the r20 runtime initialization and finalization sections at their original addresses. It generates the zero-filled ARM9 DTCM image and launcher banner, then uses r20’s `ndstool` to generate the header, name table, and padding. It verifies the entire result at `build/reference-c/jEnesisDS-0.7.4-rebuilt.nds` and uses the original ROM for the remaining processor code and data. Use `ROM=/path/to/jEnesisDS.nds` if the input is stored elsewhere. [Recovered C](rebuild/source) · [Verified ranges](docs/HANDOFF.md#compile-the-recovered-arm9-c)

`make check-lzss` uses Python Unicorn to compare the recovered compression and file-entry code with the original ARM9 routines. `make check-sdk` recompiles and compares selected period ndslib and libnds sources. [Test setup](docs/HANDOFF.md#verify-lzss-behavior) · [SDK comparison](docs/HANDOFF.md#reproduce-the-sdk-comparison)

Use `make arm7-sdk` with `R20_ROOT` and a `LIBNDS_REPO` history checkout to build the recovered ARM7 SDK ranges without a ROM input. `make check-arm7-sdk` builds those ranges and then compares them with `ROM`. `make reference-c-sdk` links the recovered regions for both processors, including 21 matching members of the period libfat archive and the r20 filesystem and device routines from `libsysbase.a`. The byte-identical reference still uses the release for the unrecovered payload. [SDK source build](docs/HANDOFF.md#link-the-period-libnds-sources)

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

The builder assembles the recovered startup code and links it with the unreconstructed code and data from the input ROM. This produces the byte-for-byte reference. An independently built byte-identical ROM still requires recovery of the remaining CPU dispatch code, video and audio engines, frontend, and ROM data.

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

# jEnesisDS Decomp REA

This branch groups the static REA and Ghidra analysis of jEnesisDS 0.7.4 into 66 modules. It covers 2,879 ARM9 routines and 204 ARM7 routines. The files contain C-like pseudocode with inferred types and control flow. Use the listings and recovered assembly when tracing dispatch, shared tails, and hardware registers.

## Find a subsystem

| Processor | Where to start |
| --- | --- |
| ARM9 | [Emulator and startup](decompiled/arm9/system), [68000 and Z80](decompiled/arm9/cpu), [video](decompiled/arm9/video), [menus and input](decompiled/arm9/frontend), [ROM and save storage](decompiled/arm9/storage), [DS services and runtime](decompiled/arm9/platform) |
| ARM7 | [Audio, PSG, DAC, and YM2612](decompiled/arm7/audio), [IPC, interrupts, and DS services](decompiled/arm7/platform) |

Start with the [handoff](docs/HANDOFF.md) for a folder map, entry points, and validation steps. The [ARM9 index](decompiled/arm9/functions.tsv) and [ARM7 index](decompiled/arm7/functions.tsv) map each address to its module and starting line. Each module keeps a single address-and-role label above each pseudocode body. To check every indexed body in the checkout, run `python3 scripts/check_pseudocode.py`.

## Matching ROM rebuild in WSL

1. Extract `jEnesisDS.nds` from the original 0.7.4 archive into `input/`. Its SHA-256 is `cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104`. [Original release listing](https://db.universal-team.net/ds/jenesisds)
2. Extract the r20 Win32 toolchain archive with 7-Zip. The rebuild uses `arm-eabi-as.exe`, `arm-eabi-ld.exe`, and `arm-eabi-objcopy.exe` in its `devkitARM/bin` directory. The default cache is `~/.cache/jenesisds-decomp/devkitarm-r20/bin`. [Archived devkitARM r20](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)
3. Build and compare the ROM from the repository root.

```bash
python3 rebuild/build.py --tool-prefix /path/to/devkitARM/bin/arm-eabi-
cmp input/jEnesisDS.nds build/jEnesisDS-0.7.4-rebuilt.nds
```

The builder assembles the recovered startup code and links it with the unreconstructed code and data from the input ROM. This produces the byte-for-byte reference. The separate C port has its own build and compatibility notes. [BlocksDS port](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/blocksds-port)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

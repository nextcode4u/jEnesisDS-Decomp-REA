# jEnesisDS native BlocksDS build

This build uses the recovered 0.7.4 ARM and Thumb program for both processors, including the original 68000 and Z80 execution, DS video, FM, PSG, DAC, menu and save-state code. Wonderful assembles and links the program and BlocksDS packages it. The recovered DS startup and period runtime retain the memory layout and interface the emulator expects.

## Build

Install Python 3, GNU Make, and the Wonderful BlocksDS toolchain. Use the commands below from the repository root. [BlocksDS Linux setup](https://blocksds.skylyrac.net/docs/setup/linux/)

```sh
make -f blocksds/Makefile
```

The build writes `build/blocksds-native/jEnesisDS-BlocksDS.nds`, both processor ELFs and both linker maps. Set `WONDERFUL_TOOLCHAIN` or `BLOCKSDS` for a custom installation. The build needs no copy of the historical compiler, the historical SDK packages or the original ROM.

Open the NDS binary in melonDS with a virtual DLDI SD card containing Genesis cartridges. Keep any original `.jst` save states next to their cartridges. On a flashcart that requires manual DLDI patching, use the driver for that flashcart.

## Compare with the release

```sh
make -f blocksds/Makefile compare ROM=/path/to/jEnesisDS.nds
```

The comparison checks the complete file after the 512-byte DS header. It covers both processor images, the launcher banner and the padding. BlocksDS `ndstool` generates the header with its own boot metadata. The build also checks the entry point, load address, size and bytes of each packaged processor image against its linked image.

## Runtime check

melonDS 1.1 mounted the DLDI image and drew a pixel-identical browser with the same ROM list as the release. Sonic restored a `.jst` from the release, responded to movement in Green Hill Zone, and produced audio. The emulator's in-game counter displayed 060. Writing slot 2 produced a 140,260-byte state after a retry, and loading it restored gameplay. The BlocksDS DLDI tool also patched a copy with its R4 driver. These checks used melonDS and the host patching tool.

## Source layout

- `arm9.s`, `arm7.s` and the linker scripts describe startup and layout. The ARM9 startup copies the ITCM and DTCM ranges from their original load addresses.
- `recovered/arm9/` contains the frontend, cartridge, machine bus, CPU dispatch and runtime code. The video modules cover rendering, VDP ports and DMA.
- `recovered/arm7/` contains the ARM7 service, PSG, DAC, IPC and YM2612 routines.
- `assets/frontend/` contains editable indexed PGM tile sheets, RGB555 palettes and tilemaps. The build produces assembly data from them. `banner.py` builds the separate DS launcher icon and title.

The recovered assembly carries release addresses for matching against the analysis. Some instruction encodings and fixed data are expressed with assembler directives to retain the original layout. The handoff documents the interpretation of these ranges and the historical SDK APIs they use. [Handoff 20261120](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/releases/tag/20261120) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

The C port remains available as a reference at commit [`8e0d0a2`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/8e0d0a264fb453163f9246c817bde0bc8f4e021a).

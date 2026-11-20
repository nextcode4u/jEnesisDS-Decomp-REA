# jEnesisDS BlocksDS port

This branch builds jEnesisDS from recovered ARM and Thumb assembly using BlocksDS and Wonderful Toolchain. It uses the recovered startup code, linker layout, audio processor, and DLDI filesystem runtime. The bottom screen uses the source rebuild's file browser theme.

## Build on Linux or WSL

Install Python 3 and the `blocksds-toolchain` package from Wonderful Toolchain. This build was tested with BlocksDS 1.25.0 and Wonderful's GNU ARM binutils 2.47.20260726. [BlocksDS Linux installation guide](https://blocksds.skylyrac.net/docs/setup/linux/)

From the repository root, run:

```bash
python3 rebuild/build.py
```

The builder uses `/opt/wonderful` by default, or the directory in `WONDERFUL_TOOLCHAIN`. It looks for the SDK in `BLOCKSDS`, then under Wonderful's `thirdparty/blocksds/core` or `/opt/blocksds/core` if `BLOCKSDS` is unset. You can also give the paths directly:

```bash
python3 rebuild/build.py \
  --tool-prefix /path/to/arm-none-eabi/bin/arm-none-eabi- \
  --ndstool /path/to/blocksds/core/tools/ndstool/ndstool
```

BlocksDS `ndstool` packages both linked ELFs into `build/GenesisPlayer.nds`. The builder checks that the entry points, load addresses, and CPU payloads in the ROM match the linked images. The ELFs and linker maps are also written to the ignored `build/` directory. The checkout contains all build inputs.

The historical devkitARM r20 build is documented on the source rebuild branch. [`minimal-build`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/minimal-build) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Sources

- [Startup and linker scripts](rebuild/) set up the processors and preserve the emulator’s original RAM and TCM addresses.
- [Recovered assembly and data](recovered/) contain the emulator payload. Instructions that needed their original encodings are expressed with word or halfword directives and disassembly comments. Dispatch tables and other fixed data have explicit declarations.
- [File browser graphics](rebuild/menu.py) generate the tile, font, and palette data used by the DS interface.

## Compatibility baseline

The BlocksDS build matches the verified `minimal-build` ROM at commit `cfe3b71` byte for byte after the 512-byte NDS header. Seven Thumb instructions use two-operand assembler syntax to preserve their original 16-bit encodings with Wonderful's assembler. BlocksDS `ndstool` generates the cartridge header.

The `minimal-build` baseline was tested against jEnesisDS 0.7.4 in melonDS with Sonic the Hedgehog, Sonic the Hedgehog 2, save-state interchange, and a Genesis VDP diagnostic.

The BlocksDS ROM was tested in melonDS 1.1 using a virtual DLDI SD card. Sonic the Hedgehog loaded, responded to directional and jump inputs, and produced audio. The build restored a save state from the original release and wrote a new state to the second slot. Both captured VDP diagnostic frames matched the baseline pixel for pixel. The BlocksDS DLDI patcher also accepted the ROM. Physical DS hardware remains untested.

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

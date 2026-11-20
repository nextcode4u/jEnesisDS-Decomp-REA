# jEnesisDS source rebuild

This branch builds a Nintendo DS ROM from recovered ARM and Thumb assembly and data declarations. The build inputs are the files in this checkout. The ROM is packaged from the linked ARM7 and ARM9 images and uses a new file browser theme.

## Build in WSL

Install Python 3, GNU ARM binutils from devkitARM r20, and `ndstool`. The tested versions were GNU binutils 2.17 and `ndstool` 2.3.1. The r20 archive contains `arm-eabi-as.exe`, `arm-eabi-ld.exe`, and `arm-eabi-objcopy.exe`, which work through WSL interop with their execute bits set. [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

From the repository root, run the builder with the toolchain prefix and path to `ndstool`.

```bash
python3 rebuild/build.py \
  --tool-prefix /path/to/devkitARM/bin/arm-eabi- \
  --ndstool /path/to/ndstool
```

The defaults use r20 tools under `~/.cache/jenesisds-decomp/devkitarm-r20/bin/` and find `ndstool` on `PATH` or under `/opt/devkitpro/tools/bin/`. The builder writes `build/GenesisPlayer.nds` along with linked ELFs and linker maps. Git ignores the output directory.

## Sources

- [Startup and linker scripts](rebuild/) set up the processors and preserve the emulator’s original RAM and TCM addresses.
- [Recovered assembly and data](recovered/) contain the emulator payload. Instructions that needed their original encodings are expressed with word or halfword directives and disassembly comments. Dispatch tables and other fixed data have explicit declarations.
- [File browser graphics](rebuild/menu.py) generate the tile, font, and palette data used by the DS interface.

The source build was tested in melonDS 1.1 with a virtual DLDI SD card. It loaded a Genesis diagnostic ROM and rendered the expected alternating red and cyan frames.

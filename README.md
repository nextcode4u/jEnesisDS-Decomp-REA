# jEnesisDS BlocksDS C port

The C port uses BlocksDS startup, libnds, the SDK ARM7 core, and Wonderful's C compiler. The ROM browser and cartridge loader are working. Gameplay, audio, and save states still require a port of the emulator core.

## Build on Linux or WSL

Install GNU Make and the `blocksds-toolchain` package from Wonderful Toolchain. The C target was tested with BlocksDS 1.25.0. [BlocksDS Linux installation guide](https://blocksds.skylyrac.net/docs/setup/linux/)

From the repository root, run:

```sh
make
```

This produces `build/jEnesisDS-C.nds`. Set `WONDERFUL_TOOLCHAIN` or `BLOCKSDS` to use a custom installation. In melonDS, enable a virtual DLDI SD card and add Genesis ROMs to it. Use the D-pad and **A** to open a folder or cartridge, and **B** to go back.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header, and computes the Genesis checksum.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

## Gameplay reference

The recovered assembly build remains available via `python3 rebuild/build.py` and produces `build/GenesisPlayer.nds` for comparison. Its CPU images match the verified `minimal-build` baseline. Gameplay, video, audio, and cross-version save states were tested in melonDS with that reference build. [Assembly build at `f918e86`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/f918e86) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

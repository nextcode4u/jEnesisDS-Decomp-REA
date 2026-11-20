# jEnesisDS BlocksDS C port

The C port uses BlocksDS startup, libnds, the SDK ARM7 core, and Wonderful's C compiler. The ROM browser and cartridge loader work. The C emulator can run a first 68000 and VDP diagnostic, with a limited instruction set and backdrop-only rendering. Full gameplay, audio, and save states are still pending.

## Build on Linux or WSL

Install GNU Make and the `blocksds-toolchain` package from Wonderful Toolchain. The C target was tested with BlocksDS 1.25.0. [BlocksDS Linux installation guide](https://blocksds.skylyrac.net/docs/setup/linux/)

From the repository root, run:

```sh
make
```

This produces `build/jEnesisDS-C.nds`. Set `WONDERFUL_TOOLCHAIN` or `BLOCKSDS` to use a custom installation. In melonDS, enable a virtual DLDI SD card and add Genesis ROMs to it. Use the D-pad and **A** to open a folder or cartridge, **Start** to run a loaded cartridge, and **B** to go back.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header, and computes the Genesis checksum.
- [68000 interpreter](source/m68k.c) reads the reset vectors, executes the implemented instructions, and reports the address and opcode where execution stops.
- [Genesis bus and VDP](source/megadrive.c) map the cartridge and mirrored work RAM, handle early I/O reads, and process VDP register and CRAM writes for the backdrop.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

The C build runs the Genesis backdrop diagnostic in melonDS 1.1. Both captured top-screen colors match the original jEnesisDS 0.7.4 frames pixel for pixel. Frame timing, tile and sprite rendering, and commercial-ROM compatibility still need work. Run `make check` for the host regression test covering reset vectors, branches, the mirrored RAM window, and CRAM writes.

## Gameplay reference

The recovered assembly build remains available via `python3 rebuild/build.py` and produces `build/GenesisPlayer.nds` for comparison. Its CPU images match the verified `minimal-build` baseline. Gameplay, video, audio, and cross-version save states were tested in melonDS with that reference build. [Assembly build at `f918e86`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/f918e86) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

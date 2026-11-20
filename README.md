# jEnesisDS BlocksDS C port

The port compiles the project's ARM7 and ARM9 programs from C with Wonderful's compiler. It links against libnds and uses the standard BlocksDS startup code. The ROM browser and cartridge loader work, and the emulator runs the 68000 and VDP backdrop diagnostic. Full gameplay, audio, and save states are still pending.

## Build on Linux or WSL

Install GNU Make and the `blocksds-toolchain` package from Wonderful Toolchain. The C target was tested with BlocksDS 1.25.0. [BlocksDS Linux installation guide](https://blocksds.skylyrac.net/docs/setup/linux/)

From the repository root, run:

```sh
make
```

This compiles and links both CPUs into ELFs under `build/c/`, then packages them into `build/jEnesisDS-C.nds`. The fresh build requires only this checkout and the installed SDK and toolchain. Set `WONDERFUL_TOOLCHAIN` or `BLOCKSDS` to use a custom installation.

In melonDS, enable a virtual DLDI SD card and add Genesis ROMs to it. The bottom screen follows the original's icon toolbar, framed list, and slim status strip. The C port draws its own icons and uses a charcoal and copper palette.

- In the ROM browser, use **Up** and **Down** to highlight an entry, **Left** and **Right** to change pages, **A** to open or run the selection, and **B** to open the parent folder.
- During emulation, touch the panel to pause and touch again or press **SELECT** to resume. Press **SELECT** while running or tap the cartridge icon to open the browser. Press **SELECT** in the browser to return to the current cartridge.
- Tap the controller icon to open configuration. Use **A** or tap **Country** to cycle the region for the next cartridge.
- The two save-slot controls show their status when tapped. Save and load operations are pending.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Bottom-screen interface](source/frontend.c) draws the toolbar, selected row, and status panel with native DS tiles.
- [ARM7 services](source/arm7/main.c) set up the system FIFO for storage and send input samples to the ARM9.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header, and computes the Genesis checksum.
- [68000 interpreter](source/m68k.c) reads the reset vectors, runs the supported instructions, delivers VBlank interrupts, and reports the address and opcode where unsupported work stops execution.
- [Genesis bus and VDP](source/megadrive.c) map the cartridge and mirrored RAM, handle three-button input and Z80 bus requests, and write VRAM, CRAM, and VSRAM through the VDP.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

The C build runs the Genesis backdrop diagnostic in melonDS 1.1. Both captured top-screen colors match the original jEnesisDS 0.7.4 frames pixel for pixel. Sonic the Hedgehog passes its cartridge checksum test, initializes video memory and loads its sound driver into Z80 RAM. The C build still stops in the game's startup code. The VDP uses synchronous DMA and backdrop-only rendering. The sound-chip interfaces accept startup writes, and synthesis and Z80 execution still need to be implemented. Run `make check` for host checks of the reset and interrupt paths, controller port, Z80 bus access, and VDP writes and DMA.

## Gameplay reference

The playable assembly reference is available at commit `f918e86`. In a checkout of that commit, `python3 rebuild/build.py` produces `build/GenesisPlayer.nds`. Gameplay, video, audio, and cross-version save states were tested in melonDS with that reference build. [Assembly build at `f918e86`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/f918e86) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

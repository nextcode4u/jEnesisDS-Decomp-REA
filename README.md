# jEnesisDS BlocksDS C port

The port compiles the project's ARM7 and ARM9 programs from C with Wonderful's compiler. It links against libnds and uses the standard BlocksDS startup code. The C core runs the 68000 and VDP diagnostic and boots Sonic the Hedgehog into Green Hill Zone Act 1 in melonDS. The touch menu provides two save slots, and ARM7 synthesizes PSG audio. Broader game compatibility, sustained full-speed emulation, Z80 execution, and FM audio are still pending.

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
- Tap the controller icon to open configuration. Use **A** or tap **Country** to cycle the region for the next cartridge. European cartridges target the PAL refresh rate of about 50 Hz.
- Tap **[1]** or **[2]**, choose **SAVE** or **LOAD** with the D-pad, and press **A**. The portable C build's versioned `.jsc` files live next to the cartridge and have their own format.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Bottom-screen interface](source/frontend.c) draws the toolbar, selected row, and status panel with native DS tiles.
- [ARM7 services](source/arm7/main.c) set up the system FIFO for storage and send input samples to the ARM9.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header, and computes the Genesis checksum.
- [68000 interpreter](source/m68k.c) reads the reset vectors, runs the supported instructions, delivers VBlank interrupts, and reports the address and opcode where unsupported work stops execution.
- [Genesis bus and VDP](source/megadrive.c) map the cartridge and mirrored RAM, handle three-button input and Z80 bus requests, and write VRAM, CRAM, and VSRAM through the VDP.
- [DS renderer](source/vdp_ds.c) uses tiled backgrounds and hardware sprites for supported modes. The [bitmap renderer](source/vdp_render.c) handles the remaining modes. Both renderers center the viewport on the Genesis picture.
- [Save states](source/savestate.c) serialize the emulated hardware state, verify the cartridge identity, and reject invalid files before restoring the running state.
- [PSG mixer](source/arm7/psg.c) synthesizes tone and noise on the ARM7 and plays 16-bit PCM at approximately 28 kHz.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

The C build runs the Genesis backdrop diagnostic in melonDS 1.1. Both captured top-screen colors match the original jEnesisDS 0.7.4 frames pixel for pixel. Sonic's intro, title screen, movement, jumping, and both save slots were tested in melonDS. A restored Green Hill Zone frame matched the frame at the time of saving and matched across both renderers. A separate PSG diagnostic produced audio and muted when paused. The renderer samples video state once per frame, the VDP uses synchronous DMA, and PSG registers are sent to the mixer at frame granularity. Mid-frame palette effects, interlace, and Sonic's soundtrack remain pending. Run `make check` for host checks covering the CPU, idle-loop scheduling, controller port, Z80 bus access, VDP DMA, tile and sprite priority, save-file validation, and PSG synthesis.

## Gameplay reference

The playable assembly reference is available at commit `f918e86`. In a checkout of that commit, `python3 rebuild/build.py` produces `build/GenesisPlayer.nds`. Gameplay, video, audio, and cross-version save states were tested in melonDS with that reference build. [Assembly build at `f918e86`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/f918e86) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

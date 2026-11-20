# jEnesisDS BlocksDS Port C

The port compiles the project's ARM7 and ARM9 programs from C with Wonderful's compiler. It links against libnds and uses the standard BlocksDS startup code. The C core runs the 68000 and VDP diagnostic, boots Sonic the Hedgehog into Green Hill Zone Act 1, and starts Sonic the Hedgehog 2 in one-player Emerald Hill Zone Act 1 in melonDS. The touch menu provides two save slots, and ARM7 synthesizes PSG audio. The C Z80 executes Genesis sound drivers and handles YM2612 timer status. The YM2612 DAC path plays sampled audio. FM synthesis, broader game compatibility, and sustained full-speed emulation remain open.

## Build on Linux or WSL

Install Python 3, GNU Make, and the `blocksds-toolchain` package from Wonderful Toolchain. The C target was tested with BlocksDS 1.25.0. [BlocksDS Linux installation guide](https://blocksds.skylyrac.net/docs/setup/linux/)

From the repository root, run:

```sh
make
```

This compiles and links both CPUs into ELFs under `build/c/`, then packages them into `build/jEnesisDS-C.nds`. The fresh build requires only this checkout and the installed SDK and toolchain. Set `WONDERFUL_TOOLCHAIN` or `BLOCKSDS` to use a custom installation.

In melonDS, enable a virtual DLDI SD card and add Genesis ROMs to it. The bottom screen uses the original jEnesisDS menu artwork and font. The build converts the editable tile sheets, palettes, and tilemap into C. The footer shows the port's measured Genesis frames per second during gameplay.

- In the ROM browser, use **Up** and **Down** to highlight an entry, **Left** and **Right** to change pages, **A** to open or run the selection, and **B** to open the parent folder.
- During emulation, touch the panel to pause and touch again or press **SELECT** to resume. Press **SELECT** while running or tap the cartridge icon to open the browser. Press **SELECT** in the browser to return to the current cartridge.
- Tap the controller icon to open configuration. Use **A** or tap **Country** to cycle the region for the next cartridge. European cartridges target the PAL refresh rate of about 50 Hz.
- Tap **[1]** or **[2]**, choose **SAVE** or **LOAD** with the D-pad, and press **A**. The portable C build's versioned `.jsc` files live next to the cartridge and have their own format.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Bottom-screen interface](source/frontend.c) loads the [recovered menu assets](assets/frontend) into libnds tiled backgrounds and draws the browser, status panel and state slot indicators.
- [ARM7 services](source/arm7/main.c) set up the system FIFO for storage and send input samples to the ARM9.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header, and computes the Genesis checksum.
- [68000 interpreter](source/m68k.c) reads the reset vectors, runs the supported instructions, handles interrupts, and reports the address and opcode where unsupported work stops execution.
- [Genesis bus and VDP](source/megadrive.c) map the cartridge and mirrored RAM, handle three-button input and Z80 bus requests, schedule vertical and horizontal interrupts, and write VRAM, CRAM, and VSRAM through the VDP.
- [Z80 bus and timing](source/z80_bus.c) runs the [MIT-licensed C Z80](source/third_party/z80), synchronizes it with the 68000, and delivers the VBlank interrupt pulse. The shared bus exposes YM2612 register and timer status to both guest processors.
- [DS renderer](source/vdp_ds.c) uses tiled backgrounds and hardware sprites for supported modes. The [bitmap renderer](source/vdp_render.c) handles the remaining modes. Both renderers center the viewport on the Genesis picture.
- [Save states](source/savestate.c) serialize the emulated hardware state, verify the cartridge identity, and reject invalid files before restoring the running state.
- The [PSG mixer](source/arm7/psg.c) synthesizes tone and noise on the ARM7. The [YM2612 DAC path](source/dac.c) records timed 68000 and Z80 writes and mixes the panned samples with PSG at approximately 28 kHz.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

The C build runs the Genesis backdrop diagnostic in melonDS 1.1. Both captured top-screen colors match the original jEnesisDS 0.7.4 frames pixel for pixel. Sonic's intro, title screen, movement, jumping, and both save slots were tested in melonDS. A restored Green Hill Zone frame matched the frame at the time of saving and matched across both renderers. A separate PSG diagnostic produced audio and muted when paused. The renderer samples video state once per frame, the VDP uses synchronous DMA, and PSG registers are sent to the mixer at frame granularity. Mid-frame rendering effects, including the split-screen Sonic 2 demo, interlace, and Sonic's soundtrack remain pending. Run `make check` for host checks covering the CPU, idle-loop scheduling, controller port, Z80 execution and bus access, YM2612 timers and DAC write timing, VDP interrupts and DMA, tile and sprite priority, save-file validation, and PSG synthesis.

The original and BlocksDS browsers produced pixel-identical captures in melonDS with the same ROM listing. A Green Hill Zone spot check showed about 30 guest frames per second in DS mode. Its slot restored Sonic's earlier position and timer. A separate host smoke run advanced Sonic 1, Sonic 2, Gunstar Heroes, Streets of Rage 2, Castlevania Bloodlines, and Golden Axe through 1,400 frames each with scripted Start presses and no interpreter stop. The host run did not check graphical or audio output for those titles.

A DAC-only cartridge test in melonDS 1.1 produced audio with the DAC enabled and silence with the DAC disabled or the menu open. Sonic also restored an existing C-port save after the audio change.

## Gameplay reference

The experimental Port A release uses the recovered assembly from [`blocksds-port-a`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/blocksds-port-a). This branch builds the C implementation.

The date-coded handoff contains a source-only devkitARM r20 build that matches jEnesisDS 0.7.4 byte for byte. Its verified ROM provides a baseline for frontend graphics, guest timing, audio, and save states. [Handoff 20261120](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/releases/tag/20261120) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

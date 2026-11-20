# jEnesisDS BlocksDS Port C

The port compiles the project's ARM7 and ARM9 programs from C with Wonderful's compiler. It links against libnds and uses the standard BlocksDS startup code. The C core runs the 68000 and VDP diagnostic, boots Sonic the Hedgehog into Green Hill Zone Act 1, and starts Sonic the Hedgehog 2 in one-player Emerald Hill Zone Act 1 in melonDS. The touch menu provides two save slots. Cartridge games with battery-backed SRAM can also use their in-game save menus. The C Z80 executes Genesis sound drivers and handles YM2612 timer status. ARM7 mixes six-channel YM2612 FM, DAC samples, and PSG audio. YM2612 accuracy, broader game compatibility, and sustained full-speed emulation remain open.

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
- Tap the controller icon to open configuration. Use **A** or tap **Country** to cycle the region for the next cartridge. European cartridges target the PAL refresh rate of about 50 Hz. Select the **Controller** row to switch between 3-button and 6-button modes. In 6-button mode, DS **X**, **L**, and **R** send Genesis **X**, **Y**, and **Z**. Hold **L + R + Start** for Genesis **Mode**.
- Tap **[1]** or **[2]**, choose **SAVE** or **LOAD** with the D-pad, and press **A**. The portable C build's versioned `.jsc` files live next to the cartridge. Games with header-declared parallel SRAM use a separate `.srm` file named after the ROM. Older C-port states preserve the cartridge's current SRAM when loaded.

## C sources

- [ROM browser](source/main.c) mounts the SD card through libnds and browses directories using standard file APIs.
- [Bottom-screen interface](source/frontend.c) loads the [recovered menu assets](assets/frontend) into libnds tiled backgrounds and draws the browser, status panel and state slot indicators.
- [ARM7 services](source/arm7/main.c) set up the system FIFO for storage and send input samples to the ARM9.
- [Cartridge loader](source/cartridge.c) reads raw ROMs, decodes SMD blocks, parses the cartridge header and its SRAM range, and computes the Genesis checksum.
- [68000 interpreter](source/m68k.c) reads the reset vectors, runs the supported instructions, handles interrupts, and reports the address and opcode where unsupported work stops execution.
- [Genesis bus and VDP](source/megadrive.c) map the cartridge and mirrored RAM, handle three-button and six-button input and Z80 bus requests, schedule vertical and horizontal interrupts, map cartridge SRAM, and access VRAM, CRAM, and VSRAM through the VDP.
- [Z80 bus and timing](source/z80_bus.c) runs the [MIT-licensed C Z80](source/third_party/z80), synchronizes it with the 68000, and delivers the VBlank interrupt pulse. The shared bus exposes YM2612 register and timer status to both guest processors.
- [DS renderer](source/vdp_ds.c) uses tiled backgrounds and hardware sprites for supported modes. The [bitmap renderer](source/vdp_render.c) handles interlace mode 2 and mid-frame plane A and sprite-table changes. Both renderers use recorded per-line vertical scroll when the guest changes it during active display. Both renderers center the viewport on the Genesis picture.
- [Save states](source/savestate.c) serialize the emulated hardware state, verify the cartridge identity, and reject invalid files before restoring the running state. Cartridge SRAM data is flushed on pause, when switching games, and periodically during play.
- The [PSG mixer](source/arm7/psg.c) synthesizes tone and noise on the ARM7. The [YM2612 event capture](source/dac.c) records timed 68000 and Z80 writes. The [FM synthesizer](source/arm7/fm.c) plays stereo output at one third of the approximately 28 kHz DAC and PSG mix rate and interpolates between FM samples.

The C ROM booted in melonDS 1.1 and loaded Sonic the Hedgehog in both BIN and SMD formats from a subdirectory on the virtual SD card. A host check verified that the loader decoded a cartridge from BIN and SMD into identical bytes and rejected truncated and invalid files.

The C build runs the Genesis backdrop diagnostic in melonDS 1.1. Both captured top-screen colors match the original jEnesisDS 0.7.4 frames pixel for pixel. Sonic's intro, title screen, movement, jumping, and both save slots were tested in melonDS. A restored Green Hill Zone frame matched the frame at the time of saving and matched across both renderers. A separate PSG diagnostic produced audio and muted when paused. melonDS showed both fields in an interlace diagnostic and the separate views in Sonic 2’s split-screen demo. A horizontal-interrupt diagnostic switched vertical scroll partway through the image in both renderers. The VDP still uses synchronous DMA and samples tile data and palettes at frame granularity. PSG registers are sent to the mixer at frame granularity. Run `make check` for host checks covering the CPU, idle-loop scheduling, controller handshakes, Z80 execution and bus access, YM2612 timers and DAC write timing, VDP interrupts, DMA and port readback, interlaced rendering, scanline scroll and layout changes, tile and sprite priority, save-file validation, and FM and PSG synthesis.

The original and BlocksDS browsers produced pixel-identical captures in melonDS with the same ROM listing. Green Hill Zone spot checks showed about 28–40 guest frames per second in DS mode. A Sonic 2 split-screen spot check ran at about 10 guest frames per second. Its slot restored Sonic's earlier position and timer. A host smoke run advanced 16 locally available cartridges through 1,400 frames each with scripted Start presses and no interpreter stop. The set included Sonic 1–3, both Earthworm Jim games, both Shining Force games, Comix Zone, Contra Hard Corps, and Golden Axe II. A separate melonDS run reached the Sonic 3 title screen. An SRAM diagnostic persisted its test value across a full melonDS restart. The host checks cover CPU execution and leave graphical and audio compatibility to runtime testing.

A DAC-only cartridge test in melonDS 1.1 produced audio with the DAC enabled and silence with the DAC disabled or the menu open. A six-voice FM diagnostic played all four operators on every channel, and the mixer muted when the browser opened. Sonic also restored an existing C-port save after the audio change. C-port saves track YM2612 registers and held notes. The mixer reconstructs those notes on load. Accurate oscillator and envelope restoration, LFO pitch modulation, SSG-EG shapes, and CSM keying remain open.

## Gameplay reference

The experimental Port A release uses the recovered assembly from [`blocksds-port-a`](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/tree/blocksds-port-a). This branch builds the C implementation.

The date-coded handoff contains a source-only devkitARM r20 build that matches jEnesisDS 0.7.4 byte for byte. Its verified ROM provides a baseline for frontend graphics, guest timing, audio, and save states. [Handoff 20261120](https://github.com/nextcode4u/jEnesisDS-Decomp-REA/releases/tag/20261120) · [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)

## Developer note

This project was developed with assistance from AI language models. Some source code was generated or refined using AI, then reviewed, modified and integrated by the project author where appropriate.

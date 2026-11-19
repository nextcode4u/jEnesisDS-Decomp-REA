# jEnesisDS 0.7.4 minimal rebuild

This branch contains the recovered ARM7 and ARM9 startup assembly, linker scripts, and build script. The build takes the remaining emulator code and data from a local copy of the original ROM.

## Build in WSL

1. Place the original 0.7.4 ROM at `input/jEnesisDS.nds`. Its SHA-256 is `cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104`. [Original release archive](https://db.universal-team.net/ds/jenesisds)
2. Extract devkitARM r20 with 7-Zip. The builder uses its GNU binutils 2.17 programs `arm-eabi-as`, `arm-eabi-ld`, and `arm-eabi-objcopy`. The Win32 `.exe` files work through WSL interop. Set their execute bits in WSL if needed. [devkitARM r20 archive](https://wii.leseratte10.de/devkitPro/devkitARM/r20%20%282007%29/)
3. From the repository root, run the build with Python 3.

```bash
python3 rebuild/build.py --tool-prefix /path/to/devkitARM/bin/arm-eabi-
cmp input/jEnesisDS.nds build/jEnesisDS-0.7.4-rebuilt.nds
```

The tool prefix is optional if the tools are installed under `~/.cache/jenesisds-decomp/devkitarm-r20/bin/`. A successful build produces the verified byte-identical ROM, linked ELFs, and linker maps in the ignored `build/` directory.

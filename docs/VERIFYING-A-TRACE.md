# Verify a trace against the original ROM

Follow this walkthrough when a pseudocode body gets too long, a function name is provisional, or you want to confirm where a Genesis opcode goes. Start in the repository root or the top folder of the handoff ZIP.

| What you have | What you need |
| --- | --- |
| A Ghidra symbol or routine address | Python 3 and the repository files |
| A Genesis opcode or YM2612 selector | The local jEnesisDS 0.7.4 DS ROM at `input/jEnesisDS.nds` |
| An ARM branch or register operation to verify | The reference-build ELF and GNU ARM `objdump` |

## 1. Find the routine without a ROM

```sh
python3 scripts/find_routine.py FUN_020033a4
```

The first output line is `decompiled/arm9/storage/cartridge.c:377  0x020033a4  open_rom_from_browser_selection`. Open the file at line 377 to see its short label above the named pseudocode. The second output line explains what the routine does and how the name was assigned. Given a working name instead, try `python3 scripts/find_routine.py open rom from browser selection`. Use `--cpu arm7` to limit a search to ARM7 or `--show` to print a single matched body. [Selection handler](../decompiled/arm9/storage/cartridge.c#L377)

To compare a renamed body with its original identifiers, run these commands.

```sh
python3 scripts/find_routine.py open_rom_from_browser_selection --show
python3 scripts/find_routine.py FUN_020033a4 --show --raw
```

For an offline editor search, use the zero-padded address `0x020033a4` or the displayed identifier. In each processor's tab-separated index, `symbol` is the displayed identifier, `ghidra_symbol` is the original, and `line` starts the body one line after its address label. [ARM9 index](../decompiled/arm9/functions.tsv) · [ARM7 index](../decompiled/arm7/functions.tsv)

## 2. Read the dispatch pointer in the original ROM

Keep track of three different numbers. **Guest opcode** identifies a Genesis instruction, **native address** identifies ARM code that implements it, and **ROM offset** identifies bytes in `jEnesisDS.nds`. For example, `0x4e71` is a Genesis 68000 NOP. Its dispatch slot at ARM9 address `0x020465ec` contains the native handler pointer `0x01003d00`.

In the three tables below, each slot is a four-byte little-endian ARM pointer. The tables are within the loaded ARM9 or ARM7 images. For a slot in one of those images, calculate `image_rom_offset + slot_address - image_load_address`. The target address can be in another memory range, such as ARM9 ITCM. [Image layout](../extracted/nds-layout.json) · [ARM9 memory mapping](HANDOFF.md#rom-and-memory-layout)

| Example | Table address | Slot index | Expected pointer |
| --- | --- | --- | --- |
| 68000 NOP | `0x02032c28` | `0x4e71` | `0x01003d00` |
| Indexed Z80 RES bit 0 to B | `0x020164b0` | `0x80` after DD/FD CB | `0x020135b0` |
| YM2612 algorithm 4, mask 15 | `0x03800e50` | `0x4f` | `0x037ff0e0` |

With the original ROM from the [reference rebuild instructions](../README.md#matching-rom-rebuild-in-wsl), run this from WSL. It reads the image locations from the DS header and checks the three pointers.

```sh
python3 - <<'PY'
from pathlib import Path
from struct import unpack_from

rom = Path('input/jEnesisDS.nds').read_bytes()
examples = (
    ('68000 NOP', 0x20, 0x02032c28, 0x4e71, 0x01003d00),
    ('Z80 RES bit 0 to B', 0x20, 0x020164b0, 0x80, 0x020135b0),
    ('YM2612 algorithm 4', 0x30, 0x03800e50, 0x4f, 0x037ff0e0),
)
for label, header, table, index, expected in examples:
    rom_offset, _, load_address, image_size = unpack_from('<4I', rom, header)
    slot = table + 4 * index
    in_image = slot - load_address
    assert 0 <= in_image <= image_size - 4, label
    pointer, = unpack_from('<I', rom, rom_offset + in_image)
    print(f'{label}: slot 0x{slot:08x} -> 0x{pointer:08x}')
    assert pointer == expected, label
PY
```

Look up the printed **pointer** in `find_routine.py` to reach the handler. An entry in the table confirms the incoming opcode or selector. Examine the body or ARM listing to verify its side effects. [68000 NOP](../decompiled/arm9/cpu/m68k/exceptions_and_control.c#L157) · [Indexed Z80 RES](../decompiled/arm9/cpu/z80/indexed_bit_set_and_reset/reset/bit_0.c#L5) · [YM2612 dispatch walkthrough](READING-GUIDE.md#follow-one-ym2612-channel)

## 3. Check a short ARM entry

Build the reference ELF files as described in the [README](../README.md#matching-rom-rebuild-in-wsl). With GNU ARM `objdump` on your `PATH`, inspect the indexed Z80 RES handler. The stop address is the start of the next ARM entry.

```sh
arm-none-eabi-objdump -D --start-address=0x020135b0 --stop-address=0x020135ec build/arm9.elf
```

Look for `bic r1, r0, #1` at `0x020135c4`. That instruction clears bit 0 in the value read from indexed memory. The entry also records the result in the emulated B register, writes the byte back, then fetches and dispatches the next guest opcode. Conditional calls cover mapped addresses. The short ARM entry helps distinguish the handler from the shared paths that REA expanded into its body. [Why some exports are long](READING-GUIDE.md#read-a-large-export)

If you already have the prepared Ghidra projects open, go to the same native address in the correct processor’s Listing view and use the index’s `ghidra_symbol` as a second check. The handoff gives the commands to recreate those projects. [Ghidra project setup](HANDOFF.md#validate-and-reproduce)

## 4. Follow an ARM-to-Thumb branch stub

At `0x02085898`, the ARM entry loads the next literal into `ip` and branches through `bx ip`. The literal is `0x020805e9`. Its low bit selects Thumb state, and execution starts at `0x020805e8`. Read that destination in Thumb mode to see `bx r3`, an indirect tail branch to a caller-supplied address. Here `ip` is another name for `r12`. [Branch stub](../decompiled/arm9/platform/veneers.c#L19)

```sh
arm-none-eabi-objdump -m armv5te -D --start-address=0x02085898 --stop-address=0x020858a4 build/arm9.elf
arm-none-eabi-objdump -m armv5te -M force-thumb -D --start-address=0x020805e8 --stop-address=0x020805ec build/arm9.elf
python3 scripts/find_routine.py 0x020805e8
```

Read the original literal as a word even if the disassembler prints an instruction at that location. For a Thumb entry that begins with `bx pc`, switch the listing to ARM mode after the aligned entry point. Some of these stubs have separate index rows for callers entering in Thumb and callers entering directly in ARM state.

## 5. Check the DS display transfers

```sh
arm-none-eabi-objdump -m armv5te -D --start-address=0x02008914 --stop-address=0x02008984 build/arm9.elf
arm-none-eabi-objdump -m armv5te -D --start-address=0x020090a0 --stop-address=0x020090e8 build/arm9.elf
arm-none-eabi-objdump -m armv5te -D --start-address=0x020802c4 --stop-address=0x020802dc build/arm9.elf
```

1. In the sprite copy, follow the load from DMA3 control at `0x040000dc` and the conditional branch back to the load. The routine returns after bit 31 clears. The pseudocode presents this wait as an infinite loop. [Sprite copy](../decompiled/arm9/video/sprites/state_updates.c#L36)
2. In the palette upload, look for writes to the DMA3 destination at `0x020090c4` and `0x020090d4`. The instruction between them adds `0x200` to the destination. Each write to DMA3 control uses the literal `0x80000040`, which starts a 64-halfword transfer. [Palette upload](../decompiled/arm9/video/vdp/display_updates.c#L5)
3. In the cache helper, the operation at `0x020802cc` is `mcr p15, 0, r0, c7, c14, 1`. It cleans and invalidates a data cache line. The loop advances by 32 bytes. [Cache helper](../decompiled/arm9/platform/ds_services.c#L277) · [ARM946E-S technical reference manual](https://documentation-service.arm.com/static/5f032835cafe527e86f5b8ad)

## 6. Read a tile-based UI label

The Now Playing screen calls `0x020069a8` immediately before it draws the slot indicators. The routine writes three tiles on each of two rows in the sub-engine BG1 map. Startup configures BG1 for 8-bit palette indices and copies its character tiles from ARM9 address `0x020874a8`. Read the six tiles from the original ROM to see the two words `STATE` and `SLOTS`. [Label routine](../decompiled/arm9/frontend/ui.c#L356) · [Tile loader](../decompiled/arm9/frontend/ui.c#L416)

```sh
python3 - <<'PY2'
from pathlib import Path
from struct import unpack_from

rom = Path('input/jEnesisDS.nds').read_bytes()
rom_offset, _, load_address, image_size = unpack_from('<4I', rom, 0x20)
tiles = 0x020874a8 - load_address
assert 0 <= tiles and tiles + 0x2700 <= image_size
base = rom_offset + tiles
for tile_ids in ((0x8a, 0x8b, 0x8c), (0x99, 0x9a, 0x9b)):
    for row in range(8):
        pixels = []
        for tile in tile_ids:
            start = base + tile * 64 + row * 8
            pixels.extend(rom[start:start + 8])
        print(''.join('#' if color == 0x0b else ' ' for color in pixels))
PY2
```

## Record what you verified

Keep the guest opcode, table slot, and native address in your notes. Record which ARM instructions or caller branches support the role. If you can confirm the operation but cannot prove when it runs, say so in the description. Record new displayed function names in the processor index and variable names in `variables.tsv`. Run `python3 scripts/check_pseudocode.py` to confirm the names, line ranges, and restored REA hashes agree. [Analysis basis](HANDOFF.md#trace-a-routine)

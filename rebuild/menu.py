"""Generate the tile and palette assembly for the source build's DS interface."""
from pathlib import Path
import struct


# Five columns, seven rows. Each value is a row of monochrome pixels.
GLYPHS = {
    "A": (14,17,17,31,17,17,17), "B": (30,17,17,30,17,17,30),
    "C": (14,17,16,16,16,17,14), "D": (30,17,17,17,17,17,30),
    "E": (31,16,16,30,16,16,31), "F": (31,16,16,30,16,16,16),
    "G": (14,17,16,23,17,17,15), "H": (17,17,17,31,17,17,17),
    "I": (31,4,4,4,4,4,31),     "J": (7,2,2,2,2,18,12),
    "K": (17,18,20,24,20,18,17), "L": (16,16,16,16,16,16,31),
    "M": (17,27,21,21,17,17,17), "N": (17,25,21,19,17,17,17),
    "O": (14,17,17,17,17,17,14), "P": (30,17,17,30,16,16,16),
    "Q": (14,17,17,17,21,18,13), "R": (30,17,17,30,20,18,17),
    "S": (15,16,16,14,1,1,30),   "T": (31,4,4,4,4,4,4),
    "U": (17,17,17,17,17,17,14), "V": (17,17,17,17,17,10,4),
    "W": (17,17,17,21,21,21,10), "X": (17,17,10,4,10,17,17),
    "Y": (17,17,10,4,4,4,4),     "Z": (31,1,2,4,8,16,31),
    "0": (14,17,19,21,25,17,14), "1": (4,12,4,4,4,4,14),
    "2": (14,17,1,2,4,8,31),     "3": (30,1,1,14,1,1,30),
    "4": (2,6,10,18,31,2,2),     "5": (31,16,16,30,1,1,30),
    "6": (14,16,16,30,17,17,14), "7": (31,1,2,4,8,8,8),
    "8": (14,17,17,14,17,17,14), "9": (14,17,17,15,1,1,14),
    ".": (0,0,0,0,0,12,12),      ",": (0,0,0,0,0,12,8),
    ":": (0,12,12,0,12,12,0),    ";": (0,12,12,0,12,8,0),
    "-": (0,0,0,31,0,0,0),       "_": (0,0,0,0,0,0,31),
    "=": (0,0,31,0,31,0,0),      "+": (0,4,4,31,4,4,0),
    "/": (1,2,2,4,8,8,16),       "\\": (16,8,8,4,2,2,1),
    "[": (14,8,8,8,8,8,14),      "]": (14,2,2,2,2,2,14),
    "(": (2,4,8,8,8,4,2),        ")": (8,4,2,2,2,4,8),
    "<": (2,4,8,16,8,4,2),       ">": (8,4,2,1,2,4,8),
    "!": (4,4,4,4,4,0,4),        "?": (14,17,1,2,4,0,4),
    "'": (12,4,8,0,0,0,0),       "&": (12,18,20,8,21,18,13),
    "#": (10,10,31,10,31,10,10), "%": (25,25,2,4,8,19,19),
    " ": (0,0,0,0,0,0,0),
}


def glyph(character, foreground, background=0):
    rows = GLYPHS.get(character.upper(), GLYPHS["?"])
    return bytes(
        foreground if 1 <= x <= 5 and y < 7 and rows[y] & (1 << (5 - x))
        else background
        for y in range(8) for x in range(8)
    )


def rgb(r, g, b):
    return r | g << 5 | b << 10


def emit(path, data):
    rows = (
        "    .byte " + ", ".join(f"0x{value:02x}" for value in data[i:i+16])
        for i in range(0, len(data), 16)
    )
    path.write_text("\n".join(rows) + "\n")


def tile(color):
    return bytes([color] * 64)


def footer_tiles(tiles):
    # The emulator writes fixed tile IDs into the footer while a game runs.
    tiles[0x4d:0x6a] = [tile(1)] * (0x6a - 0x4d)
    # The cartridge header can indicate battery-backed SRAM.
    tiles[0x4e] = glyph("S", 5, 1)
    for first, region in ((0x4f, "USA"), (0x52, "JPN"), (0x55, "EUR")):
        tiles[first:first+3] = [glyph(char, 6, 1) for char in region]
    for first, label in ((0x58, "NT"), (0x66, "SC"), (0x5a, "PA"), (0x68, "L ")):
        tiles[first:first+2] = [glyph(char, 7, 1) for char in label]

    for i in range(10):
        tiles[0x6a+i] = glyph(str(i), 5, 1)
        # The original used two tile rows for the FPS digits.
        tiles[0x74+i] = tile(1)

    # Slots use three tiles per row. A filled slot is highlighted in green.
    for first, number, color in ((0x7e, "1", 8), (0x81, "1", 6),
                                 (0x84, "2", 8), (0x87, "2", 6)):
        tiles[first:first+3] = [glyph(char, color, 3) for char in f"[{number}]"]
        tiles[first+0xf:first+0x12] = [bytes([color] * 8 + [1] * 56)] * 3

    for first, label in ((0x8a, "SAVE"), (0x99, "SLOT")):
        letters = [glyph(char, 7, 1) for char in label]
        rows = [b"".join(letter[y*8:y*8+6] for letter in letters) for y in range(8)]
        tiles[first:first+3] = [
            b"".join(row[x:x+8] for row in rows) for x in range(0, 24, 8)
        ]


def write_menu_sources(output: Path):
    palette = [0] * 256
    palette[1:9] = [
        rgb(2, 4, 9), rgb(3, 7, 13), rgb(4, 9, 16), rgb(6, 14, 21),
        rgb(9, 24, 28), rgb(24, 29, 31), rgb(12, 18, 25), rgb(17, 30, 25),
    ]
    font_palette = [0, palette[6], palette[5], palette[7]] + [palette[6]] * 12
    emit(output / "text_palette.inc", struct.pack("<16H", *font_palette))
    emit(output / "text_tiles.inc", b"".join(glyph(chr(i), 1) for i in range(32, 128)))
    emit(output / "menu_palette.inc", struct.pack("<256H", *palette))

    tiles = [tile(0) for _ in range(0x9c)]
    tiles[1] = tile(1)
    tiles[2] = tile(2)
    tiles[3] = tile(3)
    tiles[4] = tile(4)
    for i in range(0x3b, 0x4a):
        tiles[i] = tile(2)
    tiles[0x42] = tile(3)
    tiles[0x4b] = tile(5)
    tiles[0x4c] = tile(4)

    footer_tiles(tiles)

    board = [1] * (32 * 24)
    for y in range(3, 21):
        board[y*32:(y+1)*32] = [2] * 32
        board[y*32] = 3
    board[3*32:4*32] = [3] * 32
    board[20*32:21*32] = [3] * 32

    headings = ((1, 1, "ROM", 8), (1, 6, "SET", 8), (1, 15, "GENESIS PLAYER", 6))
    labels = {}
    for y, x, text, color in headings:
        for column, character in enumerate(text, x):
            key = character, color
            if key not in labels:
                # Use the gap before the runtime highlight and footer tiles.
                index = 5 + len(labels)
                labels[key] = index
                tiles[index] = glyph(character, color, 1)
            board[y*32+column] = labels[key]
    emit(output / "menu_tiles.inc", b"".join(tiles))
    emit(output / "menu_map.inc", struct.pack("<768H", *board))

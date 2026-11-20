"""Encode the jEnesisDS launcher artwork and titles in the DS banner format."""
import argparse
from pathlib import Path
import struct

TITLE = "jEnesisDS 0.7.4\nby Stephan Dittrich\nwww.workingdesign.de"
PALETTE = (
    0x0000, 0x019c, 0x0d33, 0x294a, 0x4e73, 0x18c6, 0x358e, 0x6f7c,
    0x1084, 0x0956, 0x248f, 0x318c, 0x019f, 0x7d44, 0x3def, 0x56b5,
)
# One palette index per pixel. Row order makes the icon editable as artwork.
ICON = (
    "cccccccccccccccccccccccccccccccc",
    "cbbbbbb800000000bbbbbb805555555c",
    "c33338800b333300003333888555555c",
    "c333880bb3b33333000333888555555c",
    "c33880bb3b333333300033888555555c",
    "c3380b3000000000830033888555555c",
    "c3880b0888888888050003888555555c",
    "c380bb3888888888833003888555555c",
    "c380bb3b33333333333003888555555c",
    "c380b3b333333333333003880555555c",
    "c3800b3338000883330003880555555c",
    "c33003b33022220333003ef4465effec",
    "c33800333000000330083ff344efef4c",
    "c3330003300000030003bf434eff6fec",
    "c33330000a0000a00033ef3e4bffe63c",
    "c88883300aaa9aa003884454e54f455c",
    "c2388888300000038885f434353ffb5c",
    "c888333388888888333efef43fe4fb5c",
    "cdd8333333333333333ffbf4bfb4f35c",
    "c33533333333333333bff4f34f6f455c",
    "cbbb9c9ccccbbbb444477748effc255c",
    "c333222c92333333333333330522555c",
    "c000c19c800cccc39cc1321c95c121cc",
    "c002c2cc002c2cc2c2cc2c2cc9c9c11c",
    "c551c2ccc21c2c91c2c91c9c91c1c9cc",
    "c55c19c222c19c2cc1c2ccc22c19cc2c",
    "c59c2cc559c2cc9c119521c19c921ccc",
    "c51c2c9551c2c91c2c91c9c91c1c9c1c",
    "c5c19c222c19c2c11c2c11c2c11c9c2c",
    "c9c2cccc9c2cc51c1251c122c21cc95c",
    "ccc5555555555555555555555555555c",
    "cccccccccccccccccccccccccccccccc",
)


def banner_crc(data):
    crc = 0xffff
    for value in data:
        crc ^= value
        for _ in range(8):
            crc = crc >> 1 ^ (0xa001 if crc & 1 else 0)
    return crc


def render_banner():
    pixels = bytearray()
    for top in range(0, 32, 8):
        for left in range(0, 32, 8):
            for row in ICON[top:top + 8]:
                for x in range(left, left + 8, 2):
                    pixels.append(int(row[x], 16) | int(row[x + 1], 16) << 4)
    title = TITLE.encode("utf-16le").ljust(256, b"\0")
    payload = bytes(pixels) + struct.pack("<16H", *PALETTE) + title * 6
    return struct.pack("<HH28x", 1, banner_crc(payload)) + payload


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("output", type=Path)
    parser.parse_args().output.write_bytes(render_banner())

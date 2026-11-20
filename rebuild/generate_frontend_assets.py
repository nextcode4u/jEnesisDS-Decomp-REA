"""Pack the editable jEnesisDS frontend palettes, tile sheets and tilemaps."""
import argparse
from pathlib import Path


OUTPUT_NAME = "frontend_assets.c"
ASSETS = Path(__file__).with_name("assets") / "frontend"
# Entries follow the release layout starting at 0x02085a88.
FIELDS = (
    ("font_palette", "rgb555", 16, 1),
    ("font_tiles", "pgm", 128, 48),
    ("menu_palette", "rgb555", 256, 1),
    ("menu_tiles", "pgm", 104, 96),
    ("menu_map", "map", 32, 24),
    ("startup_palette", "rgb555", 256, 1),
    ("startup_tiles", "pgm", 200, 80),
    ("startup_map", "map", 32, 24),
)


def tokens(path):
    for line in path.read_text(encoding="ascii").splitlines():
        yield from line.partition("#")[0].split()


def tile_values(path, width, height):
    source = list(tokens(path))
    if source[:4] != ["P2", str(width), str(height), "255"]:
        raise ValueError(f"{path} must be an 8-bit indexed P2 image of {width} × {height}")
    pixels = [int(value) for value in source[4:]]
    if len(pixels) != width * height or not all(0 <= value <= 255 for value in pixels):
        raise ValueError(f"Invalid pixel indices in {path}")
    return [
        pixels[(tile_y + y) * width + tile_x + x]
        for tile_y in range(0, height, 8)
        for tile_x in range(0, width, 8)
        for y in range(8)
        for x in range(8)
    ]


def read_field(field, extension, width, height):
    prefix = field.split("_")[0]
    path = ASSETS / f"{prefix}.{extension}"
    if extension == "pgm":
        return "uint8_t", tile_values(path, width, height)
    bits = 8 if field == "startup_map" else 16
    values = [int(value, 16) for value in tokens(path)]
    if len(values) != width * height or not all(0 <= value < (1 << bits) for value in values):
        raise ValueError(f"Invalid {bits}-bit entries in {path}")
    return f"uint{bits}_t", values


def write_source(output):
    fields = [(field, *read_field(field, kind, width, height))
              for field, kind, width, height in FIELDS]
    with output.open("w", encoding="ascii", newline="\n") as source:
        source.write("/* Generated from the frontend asset sources. */\n#include <stdint.h>\n\n")
        source.write("const struct {\n")
        for field, ctype, values in fields:
            source.write(f"    {ctype} {field}[{len(values)}];\n")
        source.write("} frontend_assets = {\n")
        for field, _, values in fields:
            source.write(f"    .{field} = {{\n")
            for i in range(0, len(values), 12):
                source.write("        " + ", ".join(f"{value:#04x}" for value in values[i:i + 12]) + ",\n")
            source.write("    },\n")
        source.write("};\n")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("output", type=Path)
    write_source(parser.parse_args().output)

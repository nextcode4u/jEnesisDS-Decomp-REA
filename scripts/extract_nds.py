#!/usr/bin/env python3
"""Extract the original processor images and record their NDS header mappings."""
import hashlib
import json
from pathlib import Path
import struct
from tempfile import NamedTemporaryFile

def publish(path, data):
    with NamedTemporaryFile(dir=path.parent, delete=False) as temporary:
        temporary.write(data)
    Path(temporary.name).replace(path)


root = Path(__file__).resolve().parents[1]
rom_path = root / "input/jEnesisDS.nds"
rom = rom_path.read_bytes()
rom_hash = hashlib.sha256(rom).hexdigest()
if rom_hash != "cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104":
    raise ValueError("Expected the original jEnesisDS 0.7.4 NDS release")

output = root / "extracted"
output.mkdir(exist_ok=True)
images = {}
for cpu, header_offset in (("arm9", 0x20), ("arm7", 0x30)):
    offset, entry, load, size = struct.unpack_from("<4I", rom, header_offset)
    if offset < 0x200 or offset + size > len(rom) or not load <= entry < load + size:
        raise ValueError(f"Invalid {cpu} mapping")
    data = rom[offset:offset + size]
    publish(output / f"{cpu}.bin", data)
    images[cpu] = {
        "rom_offset": hex(offset), "entry_address": hex(entry),
        "load_address": hex(load), "size": size, "end_exclusive": hex(load + size),
        "sha256": hashlib.sha256(data).hexdigest(),
    }

layout = {"nds_sha256": rom_hash, "images": images}
publish(output / "nds-layout.json", (json.dumps(layout, indent=2) + "\n").encode())

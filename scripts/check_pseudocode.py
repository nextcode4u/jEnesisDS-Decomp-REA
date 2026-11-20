#!/usr/bin/env python3
"""Check that each grouped REA body is indexed once and matches its recorded bytes."""
import csv
import hashlib
from collections import defaultdict
from pathlib import Path

from pseudocode_names import (
    identifier_maps,
    read_names,
    read_symbol_aliases,
    replace_identifiers,
    restore_identifiers,
)


def check_processor(directory):
    with (directory / "functions.tsv").open(newline="", encoding="utf-8") as index:
        rows = list(csv.DictReader(index, delimiter="\t"))
    addresses = [int(row["address"], 16) for row in rows]
    if not addresses or addresses != sorted(set(addresses)):
        raise ValueError(f"{directory.name}: expected unique, ascending addresses")

    names, locals_by_address = read_names(directory, rows)
    alias_defaults, alias_routines = read_symbol_aliases(directory, rows)
    default_maps = identifier_maps(names, {}, alias_defaults)
    modules = defaultdict(list)
    for row in rows:
        modules[row["module"]].append(row)
    files = {path.relative_to(directory).as_posix() for path in directory.rglob("*.c")}
    if set(modules) != files:
        raise ValueError(f"{directory.name}: module paths differ from the index")

    for module, entries in modules.items():
        lines = (directory / module).read_bytes().splitlines(keepends=True)
        cursor = 3  # Module header.
        for row in entries:
            start = int(row["line"]) - 1
            end = start + int(row["line_count"])
            label = f"// {row['address']}  {row['role']}\n".encode()
            location = f"{directory.name}/{module}:{start + 1}"
            if start != cursor + 2 or lines[cursor:start] != [b"\n", label]:
                raise ValueError(f"{location}: missing address label or unexpected line range")
            if not start < end <= len(lines):
                raise ValueError(f"{location}: invalid body length")
            body = b"".join(lines[start:end])
            local_names = locals_by_address[row["address"]]
            forward, reverse = identifier_maps(names, local_names, alias_defaults) if local_names else default_maps
            original = restore_identifiers(body, reverse, alias_routines.get(row["address"], {}))
            if hashlib.sha256(original).hexdigest() != row["body_sha256"]:
                raise ValueError(f"{location}: restored pseudocode differs from the REA body checksum")
            if replace_identifiers(original, forward) != body:
                raise ValueError(f"{location}: pseudocode does not apply the documented names")
            cursor = end
        if cursor != len(lines):
            raise ValueError(f"{directory.name}/{module}: unindexed content")
    print(f"{directory.name.upper()}: {len(rows)} routines in {len(modules)} modules verified")


if __name__ == "__main__":
    root = Path(__file__).resolve().parents[1] / "decompiled"
    for processor in ("arm9", "arm7"):
        check_processor(root / processor)

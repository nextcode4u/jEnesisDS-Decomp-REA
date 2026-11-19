#!/usr/bin/env python3
"""Combine the seven REA export indexes into one address lookup table."""
import csv
import json
from pathlib import Path
import sys

workspace = Path(__file__).resolve().parents[1]
output = Path(sys.argv[1]) if len(sys.argv) > 1 else workspace / "decompiled/arm9"
by_address = {}
inventory_sizes = set()

for number in range(1, 8):
    part = f"part-{number:02}"
    index = json.loads((output / part / "decompile-index.json").read_text())
    run = index["latest_run"]
    inventory_sizes.add(run["selected"] + run["excluded"])

    for function in index["functions"]:
        address = int(function["address"], 16)
        if address in by_address:
            raise ValueError(f"Duplicate ARM9 function address {address:#x}")
        relative_path = function.get("relative_path")
        by_address[address] = (
            function["address"], function["name"], function["status"],
            f"{part}/{relative_path}" if relative_path else "",
        )

if inventory_sizes != {len(by_address)}:
    raise ValueError(f"ARM9 index contains {len(by_address)} entries for inventory sizes {inventory_sizes}")

temporary = output / "functions.tsv.tmp"
with temporary.open("w", newline="", encoding="utf-8") as file:
    writer = csv.writer(file, delimiter="\t", lineterminator="\n")
    writer.writerow(["address", "name", "status", "pseudocode"])
    writer.writerows(by_address[address] for address in sorted(by_address))
temporary.replace(output / "functions.tsv")

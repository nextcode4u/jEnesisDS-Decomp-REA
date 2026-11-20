#!/usr/bin/env python3
"""Find a jEnesisDS routine by working name, Ghidra symbol, or native address."""
import argparse
import csv
import re
from pathlib import Path
import sys

from pseudocode_names import identifier_maps, read_names, read_symbol_aliases, restore_identifiers


ROOT = Path(__file__).resolve().parents[1]


def find_routines(query, processor):
    processors = (processor,) if processor else ("arm9", "arm7")
    query = query.casefold().strip()
    address = query.removeprefix("0x")
    address = int(address, 16) if re.fullmatch(r"[a-f0-9]{5,8}", address) else None
    words = re.findall(r"[a-z0-9]+", query)
    matches = []
    for cpu in processors:
        with (ROOT / "decompiled" / cpu / "functions.tsv").open(newline="", encoding="utf-8") as index:
            for row in csv.DictReader(index, delimiter="\t"):
                if address is not None:
                    if int(row["address"], 16) == address:
                        matches.append((0, cpu, row))
                    continue
                role = re.findall(r"[a-z0-9]+", row["role"].casefold())
                if words == role or query in (row["ghidra_symbol"].casefold(), row["symbol"].casefold()):
                    matches.append((0, cpu, row))
                    continue
                context = re.findall(r"[a-z0-9]+", f"{row['subsystem']} {row['module']}".casefold())
                if all(word in role for word in words):
                    matches.append((1, cpu, row))
                elif all(word in role or word in context for word in words):
                    matches.append((2, cpu, row))
    return sorted(matches, key=lambda match: (match[0], match[2]["basis"] != "reviewed"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("query", nargs="+", help="Working name, Ghidra symbol, or hexadecimal address")
    parser.add_argument("--cpu", choices=("arm9", "arm7"))
    parser.add_argument("--limit", type=int, default=12, help="Maximum results to list (default 12)")
    parser.add_argument("--show", action="store_true", help="Print the pseudocode for a single match")
    parser.add_argument("--raw", action="store_true", help="Restore the original REA identifiers in --show")
    args = parser.parse_args()
    if args.raw and not args.show:
        parser.error("--raw requires --show")
    query = " ".join(args.query).strip()
    if not re.search(r"[a-zA-Z0-9]", query) or args.limit < 1:
        parser.error("provide a routine query and a positive result limit")

    matches = find_routines(query, args.cpu)
    if args.show:
        exact_matches = [match for match in matches if match[0] == 0]
        if exact_matches:
            matches = exact_matches
    if not matches:
        print(f"No routines match {query!r}.", file=sys.stderr)
        return 1
    for _, cpu, row in matches[:args.limit]:
        path = Path("decompiled") / cpu / row["module"]
        body_line = int(row["line"])
        print(f"{path.as_posix()}:{body_line - 1}  {row['address']}  {row['role']}")
        print(f"  {row['description']} [{row['basis']}]")
        if args.show and len(matches) == 1:
            lines = (ROOT / path).read_bytes().splitlines(keepends=True)
            end = body_line - 1 + int(row["line_count"])
            body = b"".join(lines[body_line - 1:end])
            if args.raw:
                directory = ROOT / "decompiled" / cpu
                with (directory / "functions.tsv").open(newline="", encoding="utf-8") as index:
                    rows = list(csv.DictReader(index, delimiter="\t"))
                names, locals_by_address = read_names(directory, rows)
                defaults, routines = read_symbol_aliases(directory, rows)
                address = row["address"]
                _, reverse = identifier_maps(names, locals_by_address[address], defaults)
                body = restore_identifiers(body, reverse, routines.get(address, {}))
            print(body.decode("utf-8"), end="")
    if len(matches) > args.limit:
        print(f"Showing {args.limit} of {len(matches)} results.")
    if args.show and len(matches) != 1:
        print("Use a single result's address with --show.", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())

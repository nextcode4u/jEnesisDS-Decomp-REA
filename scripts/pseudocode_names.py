"""Apply or reverse the documented identifier names in grouped REA pseudocode."""
import csv
import re
from collections import defaultdict


# Consume comments and literals as whole tokens so their contents stay byte-for-byte.
TOKEN = re.compile(
    rb"""//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*'|\b[A-Za-z_][A-Za-z_0-9]*(?:::[A-Za-z_][A-Za-z_0-9]*)*\b""",
    re.DOTALL,
)


def read_names(directory, rows):
    """Read processor-wide names and optional overrides scoped to a routine."""
    functions = {}
    for row in rows:
        original, name = row["ghidra_symbol"], row["symbol"]
        if functions.setdefault(original, name) != name:
            raise ValueError(f"{directory.name}: conflicting names for {original}")
    names = {original: name for original, name in functions.items() if original != name}
    locals_by_address = defaultdict(dict)
    scope_names = {"processor": names}
    scope_names.update((row["address"], locals_by_address[row["address"]]) for row in rows)
    with (directory / "variables.tsv").open(newline="", encoding="utf-8") as file:
        for row in csv.DictReader(file, delimiter="\t"):
            scope = scope_names[row["scope"]]
            original, name = row["original"], row["name"]
            if original in scope:
                raise ValueError(f"Duplicate name for {row['scope']} {original}")
            if not row["evidence"].strip():
                raise ValueError(f"Missing evidence for {row['scope']} {original}")
            scope[original] = name
    if any(names.keys() & local.keys() for local in locals_by_address.values()):
        raise ValueError(f"{directory.name}: local renames overlap processor-wide identifiers")
    return names, locals_by_address


def identifier_maps(names, local_names):
    """Compile a reversible pair of byte-string mappings for one routine."""
    forward = {old.encode("ascii"): new.encode("ascii") for old, new in (names | local_names).items()}
    reverse = {new: old for old, new in forward.items()}
    if len(reverse) != len(forward) or forward.keys() & reverse.keys():
        raise ValueError("Identifier renames must have unique destinations and no rename chains")
    return forward, reverse


def replace_identifiers(body, mapping):
    return TOKEN.sub(lambda match: mapping.get(match[0], match[0]), body)

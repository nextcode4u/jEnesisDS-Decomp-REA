"""Apply or reverse the documented identifier names in grouped REA pseudocode."""
import csv
import json
import re
from collections import defaultdict, deque


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


def read_symbol_aliases(directory, rows):
    """Load the raw symbol choices when an API name represents several native entries."""
    raw_symbols = defaultdict(set)
    for row in rows:
        raw_symbols[row["symbol"]].add(row["ghidra_symbol"])
    shared_names = {name: originals for name, originals in raw_symbols.items() if len(originals) > 1}
    path = directory / "symbol_aliases.json"
    aliases = json.loads(path.read_text()) if path.is_file() else {"defaults": {}, "routines": {}}
    defaults, routines = aliases["defaults"], aliases["routines"]
    if set(defaults) != set(shared_names):
        raise ValueError(f"{directory.name}: shared symbols and alias defaults differ")
    for name, original in defaults.items():
        if original not in shared_names[name]:
            raise ValueError(f"{directory.name}: invalid default alias for {name}")
    addresses = {row["address"] for row in rows}
    for address, choices in routines.items():
        if address not in addresses:
            raise ValueError(f"{directory.name}: aliases for unknown routine {address}")
        for name, originals in choices.items():
            if not originals or any(original not in shared_names.get(name, ()) for original in originals):
                raise ValueError(f"{directory.name}: invalid aliases for {address} {name}")
    return defaults, routines


def identifier_maps(names, local_names, alias_defaults=None):
    """Compile reversible byte-string mappings for one routine."""
    alias_defaults = alias_defaults or {}
    forward = {old.encode("ascii"): new.encode("ascii") for old, new in (names | local_names).items()}
    shared = {name.encode("ascii"): original.encode("ascii") for name, original in alias_defaults.items()}
    reverse = {}
    for original, name in forward.items():
        if name in reverse and name not in shared:
            raise ValueError(f"Multiple original identifiers for {name.decode()}")
        if name in shared and original.decode("ascii") in local_names:
            raise ValueError(f"Local rename overlaps shared function name {name.decode()}")
        reverse[name] = original
    if forward.keys() & reverse.keys():
        raise ValueError("Identifier rename chains are ambiguous")
    reverse.update(shared)
    return forward, reverse


def replace_identifiers(body, mapping):
    return TOKEN.sub(lambda match: mapping.get(match[0], match[0]), body)


def restore_identifiers(body, mapping, alias_choices):
    """Resolve shared names in occurrence order, then restore the original identifiers."""
    if not alias_choices:
        return replace_identifiers(body, mapping)
    pending = {name.encode("ascii"): deque(original.encode("ascii") for original in originals)
               for name, originals in alias_choices.items()}

    def restore(match):
        token = match[0]
        if token not in pending:
            return mapping.get(token, token)
        if not pending[token]:
            raise ValueError(f"Unexpected extra occurrence of {token.decode()}")
        return pending[token].popleft()

    original = TOKEN.sub(restore, body)
    if any(pending.values()):
        raise ValueError("Unused raw symbol aliases for routine")
    return original

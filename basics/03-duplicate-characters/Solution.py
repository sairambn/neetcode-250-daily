def find_duplicates(s: str) -> list:
    seen = set()
    duplicates = set()
    for c in s:
        if c in seen:
            duplicates.add(c)
        else:
            seen.add(c)
    return list(duplicates)

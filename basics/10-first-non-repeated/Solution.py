def first_non_repeated(s: str) -> str:
    from collections import Counter
    count = Counter(s)
    for c in s:
        if count[c] == 1:
            return c
    return ""

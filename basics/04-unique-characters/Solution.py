def find_unique(s: str) -> list:
    from collections import Counter
    count = Counter(s)
    return [c for c, freq in count.items() if freq == 1]

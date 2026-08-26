def count_digits(s: str) -> int:
    return sum(1 for c in s if c.isdigit())

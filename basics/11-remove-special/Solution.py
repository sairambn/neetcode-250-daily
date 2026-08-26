def remove_special(s: str) -> str:
    return ''.join(c for c in s if c.isalnum() or c.isspace())

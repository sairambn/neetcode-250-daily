def second_largest(arr: list) -> int:
    unique = sorted(set(arr), reverse=True)
    return unique[1] if len(unique) > 1 else unique[0]

def first_five_fibonacci() -> list:
    a, b = 0, 1
    result = []
    for _ in range(5):
        result.append(a)
        a, b = b, a + b
    return result

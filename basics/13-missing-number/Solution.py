def missing_number(nums: list) -> int:
    n = 100
    expected = n * (n + 1) // 2
    return expected - sum(nums)

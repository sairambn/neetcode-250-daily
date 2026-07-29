from typing import List


class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [0] * (2 * n)

        for idx in range(n):
            result[idx] = nums[idx]
            result[idx + n] = nums[idx]

        return result

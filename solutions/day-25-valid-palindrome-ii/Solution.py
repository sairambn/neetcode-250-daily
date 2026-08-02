class Solution:
    def validPalindrome(self, s: str) -> bool:
        def is_pal(l, r):
            while l < r:
                if s[l] != s[r]:
                    return False
                l += 1
                r -= 1
            return True
        left, right = 0, len(s) - 1
        while left < right:
            if s[left] != s[right]:
                return is_pal(left + 1, right) or is_pal(left, right - 1)
            left += 1
            right -= 1
        return True

#利用双指针
class Solution:
    def validPalindrome(self, s: str) -> bool:
        n = len(s)

        def func(s: str, l: int, r: int):
            while (l < r):
                if s[l] != s[r]:
                    return False
                l += 1
                r -= 1
            return True

        l = 0
        r = n - 1
        while (l < r):
            if s[l] != s[r]:
                return func(s, l + 1, r) or func(s, l, r - 1)
            l += 1
            r -= 1
        return True

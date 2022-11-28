# 以每个字母或相邻两个字母为中心计算回文字符串长度，再比较
class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n == 0:
            return ""
        res = s[0]

        def func(s: str, i: int, j: int):
            while (i >= 0 and j < len(s) and s[i] == s[j]):
                i -= 1
                j += 1
            return s[i + 1:j]

        for i in range(n - 1):
            s1 = func(s, i, i)
            s2 = func(s, i, i + 1)
            if (max(len(s1), len(s2)) > len(res)):
                if (len(s1) > len(s2)):
                    res = s1
                else:
                    res = s2
        return res

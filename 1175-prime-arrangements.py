# 计算排列组合
class Solution:
    def numPrimeArrangements(self, n: int) -> int:
        def func(n):
            if (n <= 1):
                return 1
            return n * func(n - 1)

        nums = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101]
        i = 0
        while (nums[i] <= n):
            i += 1
        return func(i) * func(n - i) % (10 ** 9 + 7)

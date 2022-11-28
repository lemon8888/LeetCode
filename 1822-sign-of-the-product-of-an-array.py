# 统计负数个数
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        sign = 1
        for i in nums:
            if i == 0:
                return 0;
            if i < 0:
                sign = -sign
        return sign

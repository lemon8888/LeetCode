# 动态规划，计算nums[list,i-1]的和，与nums[i]比较。如果小于则不加，如果大于则加
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        max_temp = max_sum = nums[0]
        for i in range(1, n):
            max_sum = max(max_sum + nums[i], nums[i])
            max_temp = max(max_sum, max_temp)
        return max_temp

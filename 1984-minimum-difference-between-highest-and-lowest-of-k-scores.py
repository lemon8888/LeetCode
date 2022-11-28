# 固定值的滑动窗口计算
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        n = len(nums)
        nums.sort()
        min_num = nums[n - 1]
        for i in range(n - k + 1):
            num = nums[i + k - 1] - nums[i]
            min_num = min(num, min_num)
        return min_num

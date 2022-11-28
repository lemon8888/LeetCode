# 记录段内最大值比较更新
class Solution:
    def partitionDisjoint(self, nums: List[int]) -> int:
        n = len(nums)
        cur_max = left_max = nums[0]
        left_pos = 0
        for i in range(1, n - 1):
            cur_max = max(cur_max, nums[i])
            if nums[i] < left_max:
                left_max = cur_max
                left_pos = i
        return left_pos + 1

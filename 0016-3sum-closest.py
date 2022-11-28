#固定一个数，利用双指针计算。比较绝对值
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        res = nums[0] + nums[1] + nums[2]
        n = len(nums)
        if (n < 3):
            return
        for i in range(n - 2):
            if (i > 0 and nums[i] == nums[i - 1]):
                continue
            left = i + 1
            right = n - 1
            while (left < right):
                s = nums[i] + nums[left] + nums[right]
                if (s == target):
                    return s
                if (abs(s - target) < abs(res - target)):
                    res = s
                if (s < target):
                    left += 1
                elif (s > target):
                    right -= 1
        return res

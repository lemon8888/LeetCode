#排序之后双指针
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        n = len(nums)

        for i in range(n - 2):
            if (i > 0 and nums[i] == nums[i - 1]):     #去重
                continue
            left = i + 1
            right = n - 1
            while (left < right):
                if (nums[i] + nums[left] + nums[right] < 0):
                    left += 1
                elif (nums[i] + nums[left] + nums[right] > 0):
                    right -= 1
                else:
                    res.append([nums[i], nums[left], nums[right]])
                    while (left < right and nums[left] == nums[left + 1]):         #去重
                        left += 1
                    while (left < right and nums[right] == nums[right - 1]):
                        right -= 1
                    left += 1
                    right -= 1
        return (res)

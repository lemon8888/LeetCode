#通过递归将问题始终分解成两数和
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        res = []
        self.findnums(target, nums, 4, [], res)
        return res

    def findnums(self, target: int, nums: List[int], N: int, temp: List[int], res: List[List[int]]):
        if N < 2 or len(nums) < N:
            return
        if N == 2:
            left = 0
            right = len(nums) - 1
            while left < right:
                if nums[left] + nums[right] < target:
                    left += 1
                elif nums[left] + nums[right] > target:
                    right -= 1
                else:
                    res.append(temp + [nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
        else:
            for i in range(len(nums)):
                if i == 0 or i > 0 and nums[i - 1] != nums[i]:
                    self.findnums(target - nums[i], nums[i + 1:], N - 1, temp + [nums[i]], res)
        return

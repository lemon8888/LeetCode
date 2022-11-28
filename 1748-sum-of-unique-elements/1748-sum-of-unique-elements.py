#利用哈希表计数
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        res = 0
        for num, count in Counter(nums).items():
            if count == 1:
                res += num
        return res

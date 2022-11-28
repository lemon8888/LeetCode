# 遍历
class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        s = {-1: set()}
        nums.sort()
        for i in nums:
            temp = []
            for j in s:
                if (i % j) == 0:
                    s[j].add(i)
                    temp.append(s[j])
                    s[j].remove(i)
            s[i] = max(temp, key=len) | {i}
        return list(max(s.values(), key=len))

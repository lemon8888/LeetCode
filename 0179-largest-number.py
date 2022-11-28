# 通过字符串求和比较大小排序
class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        s = [str(i) for i in nums]

        def com(a, b):
            if (a + b) > (b + a):
                return 1
            if (a + b) < (b + a):
                return -1
            return 0

        s.sort(reverse=True, key=functools.cmp_to_key(com))
        max_num = str(int("".join(s)))  # int()处理第一位为0的情况
        return max_num

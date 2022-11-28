# 反转数之后比较
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x == 0:
            return True
        x1 = x
        num = 0
        while x > 0:
            num = num * 10 + (x % 10)
            x = x // 10
        return x1 == num

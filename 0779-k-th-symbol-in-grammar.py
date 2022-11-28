# 利用对称，前半部分与上一行相同，后半部分与上一行相反
class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if n == 1:
            return 0
        if k <= (1 << (n - 2)):
            return self.kthGrammar(n - 1, k)
        else:
            return self.kthGrammar(n - 1, k - (1 << (n - 2))) ^ 1


# 每个2i位置都与上行i相同，每个2i+1位置都与上行i反转，每一次k除2判断奇偶可以知道是否取反，多次k除2判断奇偶性可以等价于二进制中1的数量
class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        return (k - 1).bit_count() & 1


# 递归
class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if n == 1:
            return 0
        return (k & 1) ^ 1 ^ self.kthGrammar(n - 1, (k + 1) // 2)

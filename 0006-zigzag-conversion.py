# 压缩矩阵排列,并以2n-2为周期
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        l = len(s)
        if numRows == 1 or numRows >= l:
            return s
        res = [['' for i in range(2 * (l // (2 * numRows - 2) + 1))] for j in range(numRows)]

        for i in range(l):
            a = 2 * (i // (2 * numRows - 2))
            b = i % (2 * numRows - 2)
            if (b >= numRows):
                a += 1
                b = (2 * numRows - 2 - b)
            res[b][a] = s[i]
        return ''.join(ch for row in res for ch in row if ch)

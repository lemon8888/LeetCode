# 遍历生成
class Solution:
    def countAndSay(self, n: int) -> str:
        ret = "1"
        for i in range(n - 1):
            cur = ""
            pos = 0
            start = 0

            while pos < len(ret):
                while pos < len(ret) and ret[pos] == ret[start]:
                    pos += 1
                cur += str(pos - start) + ret[start]
                start = pos
            ret = cur
        return ret

# 双指针
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        s = []
        m = len(word1)
        n = len(word2)
        i = j = 0
        while i < m or j < n:
            if i < m:
                s.append(word1[i])
                i += 1
            if j < n:
                s.append(word2[j])
                j += 1
        return "".join(s)

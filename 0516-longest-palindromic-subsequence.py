# 动态规划，设n行n列的数组，dp[i][j]表示s[i:j+1]中的最大回文长度
# 如果i==j,则为1
# 如果s[i]==[j],则在原基础上加2
# 如果扩展时两边不相等，无法扩展，则取dp[i+1][j]和dp[i][j-1]中最大值
class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        n = len(s)
        dp = [[0] * n for i in range(n)]
        for i in reversed(range(n)):
            for j in range(i, n):
                if i == j:
                    dp[i][j] = 1
                elif s[i] == s[j]:
                    dp[i][j] = dp[i + 1][j - 1] + 2
                else:
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1])
        return dp[0][n - 1]

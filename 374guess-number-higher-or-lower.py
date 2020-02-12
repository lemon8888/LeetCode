#二分法
class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        low=0
        high=n
        while(low<=high):
            mid=low+(high-low)/2
            if(guess(mid)==0):
                return mid
            elif(guess(mid)==1):
                low=mid+1
            else:
                high=mid-1
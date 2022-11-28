# set() 函数创建一个无序不重复元素集
class Solution:
    def isUnique(self, astr: str) -> bool:
        return len(set(astr)) == len(astr)

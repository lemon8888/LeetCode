# 双指针
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        fast = right = head
        left = None
        while (fast and fast.next):
            fast = fast.next.next
            temp = right.next
            right.next = left
            left = right
            right = temp
        if fast:
            right = right.next
        while left:
            if (left.val != right.val):
                return False
            left = left.next
            right = right.next
        return True

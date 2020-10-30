//快慢指针
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *fast, *slow;
    fast = slow = head;
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

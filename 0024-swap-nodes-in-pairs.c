struct ListNode* swapPairs(struct ListNode* head) {
    if(!head || !head->next) {
        return head;
    }
    struct ListNode *next;
    next = head->next;
    head->next = swapPairs(next->next);
    next->next = head;
    return next;
}

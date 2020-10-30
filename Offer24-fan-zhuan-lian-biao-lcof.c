struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *oldhead, *temp;
    oldhead = head;
    head = NULL;
    while(oldhead) {
        temp = oldhead->next;
        oldhead->next = head;
        head = oldhead;
        oldhead = temp;
    }
    return head;
}

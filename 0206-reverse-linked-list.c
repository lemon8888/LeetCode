//头插法
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

//递归法
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL)
        return NULL;
    if (head -> next == NULL)
        return head;
    struct ListNode *newHead = reverseList(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return newHead;
}

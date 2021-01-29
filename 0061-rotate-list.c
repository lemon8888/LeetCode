struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!head) {
        return NULL;
    }
    int num = 1;
    struct ListNode *a = head, *b = head;
    while(a->next) {
        num++;
        a = a->next;
    }
    k = k % num;
    k = num - k;
    a->next = head;
    for(; k > 0; k--) {
        a = a->next;
        b = b->next;
    }
    a->next = NULL;
    head = b;
    return head;
}

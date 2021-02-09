int kthToLast(struct ListNode* head, int k) {
    struct ListNode *p, *q;
    p = q = head;
    for(k; k > 1; k--) {
        p = p->next;
    }
    while(p->next != NULL) {
        p = p->next;
        q = q->next;
    }
    return q->val;
}

struct ListNode* deleteNode(struct ListNode* head, int val) {
    struct ListNode *p, *q;
    if(head->val == val) {
        q = head;
        head = head->next;
        free(q);
        return head;
    }
    p = head;
    while(p->next->val != val && p->next != NULL) {
        p = p->next;
    }
    q = p->next;
    p->next = p->next->next;
    free(q);
    return head;
}

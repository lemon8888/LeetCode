struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *p, *s;
    while(head && head->val == val) {
        s = head;
        head = head->next;
        free(s);
    }
    p = head;
    while(p) {
        if(p->next && p->next->val == val) {
            s = p->next;
            p->next = p->next->next;
            free(s);
        } else {
            p = p->next;
        }
    }
    return head;
}

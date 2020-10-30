struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p = head, *q = head, *s;
    if(!head)
        return head;
    q = q->next;
    while(q) {
        if(p && q && p->val != q->val) {
            p = p->next;
            q = q->next;
        } else {
            while(p && q && p->val == q->val) {
                s = q;
                q = q->next;
                p->next = q;
                free(s);
            }
        }
    }
    return head;
}

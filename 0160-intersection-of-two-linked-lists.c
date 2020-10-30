struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p, *q;
    p = headA;
    q = headB;
    while(p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}

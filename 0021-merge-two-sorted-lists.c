struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *p;
    p = l3;
    while(l1 && l2) {
        if(l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
            p = p->next;
        } else {
            p->next = l2;
            l2 = l2->next;
            p = p->next;
        }
    }
    if(!l1) {
        p->next = l2;
    } else {
        p->next = l1;
    }
    return l3->next;
}

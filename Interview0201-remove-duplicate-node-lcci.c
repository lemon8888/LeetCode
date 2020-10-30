struct ListNode* removeDuplicateNodes(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    int num[20001];
    for(int i = 0; i < 20001; i++) {
        num[i] = 0;
    }
    num[head->val] = 1;
    struct ListNode *p;
    p = head;
    while(p->next != NULL) {
        struct ListNode *q;
        q = p->next;
        if(num[q->val] == 0) {
            num[q->val] = 1;
            p = p->next;
        } else {
            p->next = p->next->next;
            free(q);
        }
    }
    return head;
}

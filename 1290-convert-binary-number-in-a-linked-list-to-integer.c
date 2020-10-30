#逆辗转相除
int getDecimalValue(struct ListNode* head) {
    struct ListNode *p = head;
    int num = 0;
    while(p && !p->val) {
        p = p->next;
    }
    while(p) {
        num = num * 2 + p->val;
        p = p->next;
    }
    return num;
}

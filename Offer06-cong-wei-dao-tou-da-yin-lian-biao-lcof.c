//先建立相等长度的数组，再反向赋值
int listLength(struct ListNode* head) {
    int len = 0;
    while(head) {
        len++;
        head = head->next;
    }
    return len;
}

int* reversePrint(struct ListNode* head, int* returnSize) {
    if(!head) {
        *returnSize = 0;
    }
    struct ListNode *p;
    int len;
    len = listLength(head);
    int *num = (int *)malloc(sizeof(int) * len);
    p = head;
    *returnSize = len;
    len -= 1;
    while(len >= 0) {
        num[len] = p->val;
        p = p->next;
        len--;
    }
    return num;
}

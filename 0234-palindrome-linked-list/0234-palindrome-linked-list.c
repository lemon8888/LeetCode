//快慢指针，快指针在中间然后反转，同时比较移动
int listLength(struct ListNode* head) {
    int len = 0;
    while(head) {
        len++;
        head = head->next;
    }
    return len;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *oldhead, *temp;
    oldhead = head;
    head = NULL;
    while(oldhead) {
        temp = oldhead->next;
        oldhead->next = head;
        head = oldhead;
        oldhead = temp;
    }
    return head;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode *p, *q;
    p = q = head;
    int len, step;
    len = listLength(head);
    step = len / 2;
    while(step) {
        q = q->next;
        step--;
    }
    q = reverseList(q);
    while(p != NULL && q != NULL) {
        if(p->val != q->val)
            return false;
        p = p->next;
        q = q->next;
    }
    return true;
}

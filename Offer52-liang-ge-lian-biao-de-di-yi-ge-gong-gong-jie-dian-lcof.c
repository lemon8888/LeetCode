//法一:双指针比长度
int ListLength(struct ListNode *head) {
    int len = 1;
    struct ListNode *p;
    p = head;
    while(p->next != NULL) {
        p = p->next;
        len++;
    }
    return len;
}
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA, lenB, i;
    struct ListNode *p, *q;
    if(headA == NULL || headB == NULL) {
        return NULL;
    }
    p = headA;
    q = headB;
    lenA = ListLength(headA);
    lenB = ListLength(headB);
    i = lenA - lenB;
    if(lenA >= lenB) {
        for(; i > 0; i--) {
            p = p->next;
        }
    } else {
        for(; i < 0; i++) {
            q = q->next;
        }
    }
    while(p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}

//法二：双指针先移动自己链再换到另一条链，同一节点同样长度
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p, *q;
    if(headA == NULL || headB == NULL) {
        return NULL;
    }
    p = headA;
    q = headB;
    while(p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}

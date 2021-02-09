void deleteNode(struct ListNode* node) {
    struct ListNode* p;
    p = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    free(p);
}

void deleteNode(struct ListNode* node) {
    struct ListNode *p;
    p = node->next;
    *node = *p;
    free(p);
}
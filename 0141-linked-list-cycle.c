//快慢指针
bool hasCycle(struct ListNode *head) {
    if(!head||!head->next){
        return false;
    }
    struct ListNode *fast=head,*slow=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

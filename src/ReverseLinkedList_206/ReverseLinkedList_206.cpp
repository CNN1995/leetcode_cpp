// 使用尾插法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p;
        ListNode *q;
        if(head == NULL){
            return head;
        }
        p = head->next;
        head->next = NULL;
        while(p != NULL){
            q = p;
            p = p->next;
            q->next = head;
            head = q;
    }
        return head;
    }
};
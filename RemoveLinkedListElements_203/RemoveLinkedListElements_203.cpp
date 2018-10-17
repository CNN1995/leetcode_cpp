class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p;
        p = head;
        ListNode* preP = (ListNode*)malloc(sizeof(ListNode));
        preP->next = p;
        while(head != NULL && head->val == val){
            head = head->next;
            p = head;
            preP->next = p;
        }
        while(p!=NULL){
            if(p->val == val){
                preP->next = p->next;
                p = p->next;
            }
            else{
                preP = p;
                p = p->next;
            }
}
        return head;
    }
};
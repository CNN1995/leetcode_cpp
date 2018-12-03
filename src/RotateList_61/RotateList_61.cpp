/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        if(head == NULL || head->next == NULL){
            return head;
        }
        // tail 指向最后一个
        // i 记录节点的个数
        int i = 1;
        while(tail->next != NULL){
            tail = tail->next;
            i++;
        }
        int newK =  k % i;
        int length = i - newK;
        ListNode* p = head;
        while(length - 1){
            p = p->next;
            length--;
        }
        tail->next = head;
        ListNode* newHead =  p->next;
        p->next = NULL;
        return newHead;
    }
};
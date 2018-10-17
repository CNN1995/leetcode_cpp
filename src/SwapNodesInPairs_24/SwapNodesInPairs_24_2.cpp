#include <iostream>
#include <string.h>
#include <stdlib.h>
struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
   ListNode* pre;
        ListNode* tail;
        pre = head;
        tail= head;
        int i = 1;
        while(tail != NULL && tail->next != NULL){
            tail = tail->next;
            pre->next = tail->next;
            tail->next = pre;
            if(i++ == 1){
                head = tail;
            }
            if(pre->next != NULL)
            pre = pre->next;
            if(pre->next != NULL)
            tail->next->next = pre->next;
            tail = pre;
        }
        return head;
    }
    
};
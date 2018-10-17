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
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* pre;
        pre = head;
        while(pre!=NULL && pre->next!=NULL){
            if(pre->next->val == pre->val){
                pre->next = pre->next->next;
            }
            else{
                pre = pre->next;
            }
        }
        return head;
    }
};
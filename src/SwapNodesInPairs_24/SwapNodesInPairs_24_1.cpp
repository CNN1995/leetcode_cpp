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
        ListNode* temp;
        ListNode* preHead = (ListNode*)malloc(sizeof(ListNode));
        preHead->next = head;
        pre = preHead;
        tail= head;

        while(tail != NULL && tail->next != NULL){
            temp = pre;
            pre = pre->next;
            tail = tail->next;
            temp->next = tail;
            pre->next = tail->next;
            tail->next = pre;
            if(pre->next != NULL){
                tail = pre->next;
            }
            else{
                break;
            }
        }
        return preHead->next;
    }
};
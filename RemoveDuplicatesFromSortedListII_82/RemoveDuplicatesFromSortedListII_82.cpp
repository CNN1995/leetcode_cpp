#include <iostream>
#include <string.h>
#include <stdlib.h>
struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre;
        ListNode* realHead = (ListNode*)malloc(sizeof(ListNode));
        realHead->next = head;
        pre = head;
        int i = 0;
        while(pre!=NULL && pre->next!=NULL){
            int flag = 0;
            while(head != NULL && head->next != NULL && head->next->val == head->val){
                 while(head->next != NULL && head->next->val == head->val){
                flag =1;
                head = head ->next;
            }
            if(flag == 1){
                head = head->next;
                realHead->next = head;
                pre = head;
            }
            }
          
            if(pre!=NULL && pre->next!=NULL){
                if(pre->next->val == pre->val){
                i++;
                pre->next = pre->next->next;
            }
            else{
                if(i > 0){
                pre = pre->next;
                realHead->next = pre;
                i = 0;
                }
                else{
                    pre= pre->next;
                    realHead = realHead->next;
                }
             
            }
            }
            if(i>0){
                realHead->next = NULL;
            }
        }
        return head;
    }
};

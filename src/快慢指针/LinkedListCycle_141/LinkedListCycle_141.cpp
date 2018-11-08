#include <iostream>
#include<stdlib.h>
#include "../../../header/ListNode.h"
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast;
        ListNode *slow;
        fast = head;
        slow = head;
        while(fast != NULL){
            if(fast->next != NULL){
                fast = fast->next->next;
            }else{
                return false;
            }
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
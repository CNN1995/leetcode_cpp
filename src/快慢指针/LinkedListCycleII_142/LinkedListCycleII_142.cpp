#include <iostream>
#include<stdlib.h>
#include "../../../header/ListNode.h"
using namespace std;
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // 首先设置快慢指针，记录二者相遇的地方。
        // 然后设置两个指针，一个指向链表的开始，一个指向相遇的节点，二者到环的起点的距离相等
        if(head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        int i =1;
        while(((slow != fast) || (i==1 && slow == fast)) && (fast!=NULL && fast->next !=NULL)){
            slow = slow -> next;
            fast = fast->next->next;
            i++;
        }
        if(fast== NULL || fast->next == NULL){
            cout<<"NULL";
            return NULL;
        }else{
            ListNode* jiaoDian = slow;
            ListNode* start = head;
            cout<<start->val;
           // cout<<jiaoDian == start;
            while(jiaoDian != start){
                start = start->next;
                jiaoDian = jiaoDian->next;
            } 
             return jiaoDian;
        }
       return NULL;
    }
};
int main(int argc, char const *argv[])
{
    
    Solution s;
    ListNode* head = NULL;
    int n =0;
    std::cout<<"input node count: ";
    std::cin>>n;
    for(int i=0;i<n;i++){
     ListNode* p = (ListNode*)malloc(sizeof(ListNode));
    std::cin>>p->val;
    p->next = NULL;
    head ->next = p;
    }
    ListNode* node = s.detectCycle(head->next);
    return 0;
}

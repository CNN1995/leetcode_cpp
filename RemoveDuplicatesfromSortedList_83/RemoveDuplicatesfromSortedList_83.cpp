#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "../header/ListNode.h"
using namespace std;
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

int main(int argc, char const *argv[])
{
    /* code */
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    for(int i = 0;i < 4; i++){
        ListNode* p = (ListNode*)malloc(sizeof(ListNode));
        p->val = i; 
        p->next = head->next;
        head->next = p;
    }
    head = head->next;
    ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    q = head;
    while(q != NULL){
        cout << q->val;
        q = q->next;
    }
    cout<< "helloworld";
    // 清空和缓存区
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
   // system("pause");
}

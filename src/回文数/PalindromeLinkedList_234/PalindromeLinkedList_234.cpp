#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "../../header/ListNode.h"
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         ListNode* fast;
        ListNode* slow;
        ListNode* preslow = (ListNode*)malloc(sizeof(ListNode));
        preslow->next = head;
        fast = head;
        slow = head;
        while(fast != NULL){
            if(fast->next !=NULL){
                //证明有偶数个节点  比如 1221
                fast = fast->next->next;
            }else{
                // 证明有奇数个节点  最中间有一个单数 比如  12321 
                fast = fast->next;
            }
            preslow = slow;
            slow = slow->next;
        }
        // slow 作为后半部分的head 可以进行后半部分的反转
        preslow ->next = NULL;
       slow = reverse(slow);
        // 将head与slow开始进行比较
        ListNode *headNext;
        ListNode *slowNext;
        headNext = head;
        slowNext = slow;
        while(slowNext != NULL && headNext->val == slowNext->val){
            headNext = headNext->next;
            slowNext = slowNext->next;
        }
        if((headNext == NULL || headNext->next == NULL) && slowNext == NULL){
            return true;
        }
        else return false;
    }
    ListNode* reverse(ListNode *head){
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

int main(int argc, char const *argv[])
{
    /* code */
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    int n;
    cout << "请输入需要构造链表的节点个数："<< endl;
    cin >> n;
    for(int i = 0;i < n; i++){
        ListNode* p = (ListNode*)malloc(sizeof(ListNode));
        int val;
        cout << "请输入第" << i+1 << "个数：" ;
        cin >> val;
        p->val = val; 
        p->next = head->next;
        head->next = p;
        cout << endl;
    }
    head = head->next;
    // ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    // // 输出 构造的链表
    // q = head;
    // while(q != NULL){
    //     cout << q->val;
    //     q = q->next;
    // }
    Solution s;
    bool result = s.isPalindrome(head);

    cout<< "helloworld" << endl;
     cout<< "result";
    system("pause");
    // 清空和缓存区
    // cin.clear();
    // cin.sync();
    // cin.get();
    return 0;
   
}
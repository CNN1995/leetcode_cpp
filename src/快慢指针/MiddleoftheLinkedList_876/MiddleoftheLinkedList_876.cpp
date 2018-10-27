#include <iostream>
#include<stdlib.h>
#include "../../../header/ListNode.h"
using namespace std;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p;
        p = head;
        int count = 0;
        while(p != NULL){
            count++;
            p = p->next;
}
        int midPoi = (count/2) + 1;
        p = head;
        count = 0;
        while( p != NULL && ++count < midPoi){
            p = p->next;
        }
        head = p;
        return head;
    }
};
int main(int argc, char const *argv[])
{
    
    cout << "helloworld"<<endl;
    system("pause");
    return 0;
}

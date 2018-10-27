#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    bool validPalindrome(string s)
    {

        char *pre;
        char *tail;
        //cout << s[0] << endl;
        // cout << s.length();
        // cout << s[s.length()-1];
        pre = &s[0];
        tail = &s[s.length() - 1];

        if (s.length() == 0)
        {
            return true;
        }
        while (pre < tail && *pre == *tail)
        {
            pre++;
            tail--;
        }
        if (pre == tail || pre > tail)
        {
            return true;
        }
        if (pre < tail)
        {
            char *newPre;
            char *newTail;
            newPre = pre;
            newTail = tail;
            newTail--;
            while (newPre < newTail && *newPre == *newTail)
            {
                newPre++;
                newTail--;
            }
            if (newPre == newTail || newPre > newTail)
            {
                return true;
            }
            else
            {
                newPre = pre;
                newTail = tail;
                newPre++;
                while (newPre < newTail && *newPre == *newTail)
                {
                    newPre++;
                    newTail--;
                }
                if (newPre == newTail || newPre > newTail)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{

    string str("qqqw");
    Solution s;
    bool result = s.validPalindrome(str);
    cout << result;
    system("pause");
    return 0;
}
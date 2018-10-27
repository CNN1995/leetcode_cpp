#include <regex>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;


//     // 是否匹配整个序列，第一个参数为被匹配的str，第二个参数为regex对象
//     cout << regex_match("123", regex("[0-9]+")) << endl;

//     // regex搜索
//     string str = "subject";
//     regex re("(sub)(.*)");
//     smatch sm;   // 存放string结果的容器
//     regex_match(str, sm, re);
//     for(int i = 0; i < sm.size(); ++i)
//         cout << sm[i] << " ";
//     cout << endl;

//     // regex搜索多次
//     str = "!!!123!!!12333!!!890!!!";
//     re = regex("[0-9]+");
//     while(regex_search(str, sm, re)) {
//         for(int i = 0; i < sm.size(); ++i)
//             cout << sm[i] << " ";
//         cout << endl;
//         str = sm.suffix().str();
//     }
//     system("pause");
//     return 0;
class Solution {
public:
    bool isPalindrome(string s) {
       
     const   char* str = s.c_str();
        vector<char> resultStr;
        while(*str != '\0'){
            if((*str >= 'a' && *str <= 'z')||(*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')) {
                if(*str >= 'A' && *str <= 'Z'){
                    char c = *str + 32;
                    resultStr.push_back(c);
                    str++;
                    continue;
                }
                 resultStr.push_back(*str);
            }
            str++;
      }
         if(resultStr.size() == 0){
             return true;
         }
        vector<char>::iterator itPre = resultStr.begin();
        vector<char>::iterator itTail = resultStr.end() -1  ;
        bool flag = false;
        for(; itPre != itTail && itPre <= itTail;  itPre++, itTail--){
             if(*itPre != *itTail){
                 flag = false;
                 break;
             }
        }
        if(itPre==itTail || itPre > itTail){
            flag = true;
        }
                return flag;
    }
    
};
int main(int argc, char const *argv[])
{
    
    Solution s;
    string str;
    cin >> str;
    bool result = s.isPalindrome(str);
    cout << "result is : " << result;
    cout << endl;
    system("pause");
    return 0;
}

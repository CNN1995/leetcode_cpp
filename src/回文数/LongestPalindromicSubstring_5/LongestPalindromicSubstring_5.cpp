#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        // 不管是奇数个，还是偶数个，都是以当前字母为中心点，然后从中心点两边扩散
        char char_center;
        int c =0,d=0,maxResult=0,k=0,j=0;
        int length_s = s.length();
        int i =0;
        int resultk = 0;
        int resultj = 0;
        int resulti =0;
        // 奇数的判定条件
        for( i = 0; i < s.length(); i++){
            for( j = 0; i - j >= 0 && i + j < length_s; j++){
                if(s[i - j] != s[i + j ]){
                    break;
                }
                c = j * 2 + 1;
                if(maxResult<c){
                    maxResult = c;
                    resultk= j;
                 resulti = i;
                }
            }
            for( k = 0; i - k >= 0 && i + k + 1 < length_s; k++){
                if(s[i - k] != s[i + k + 1]){
                    break;
                }
                d = k * 2 + 2;
                if(d>maxResult){
                    maxResult = d;
                    resultk = k;
                resulti = i;
                }

            }
        }
        string result;
              result =s.substr(resulti - resultk, maxResult);
        return result; 
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    string str = "abbd";
    string result = s.longestPalindrome(str);
    cout << result;
    return 0;
}

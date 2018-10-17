#include<iostream>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        int n = 0;
        long long  i =0;
        int sum = 0;
        
        int newDividend = abs(dividend);
        int newDivisor = abs(divisor);
        bool flag = false;
        if(newDivisor == 0){
            return 0;
        }
       
        if((dividend < 0 && divisor < 0)|| (dividend > 0 && divisor > 0 ) ){
            flag = true;
        }
        if((dividend > 0 && divisor < 0)|| (dividend < 0 && divisor > 0 ) ){
            flag = false;
        }
        while(1){
            if(sum < newDividend && newDividend - sum >= newDivisor){
            sum += newDivisor;
            n++;
            }else{
                break;
            }
        }
        if(flag == true){
            if(n == 2147483648) n = n-1;
              return (int)n;
            
        }else{
              return -(int)n;
        }
      
    }
};
int main(){
  Solution solution;
  int result = solution.divide(-2147483648, 1);
  cout << result;
  cin >> result;
    return 0;
}

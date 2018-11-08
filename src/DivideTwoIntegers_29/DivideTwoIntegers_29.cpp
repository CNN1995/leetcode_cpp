#include <iostream>
#include <string.h>
#include <vector>
#include <stdlib.h>
using namespace std;
class Solution {
public:
// 本地运算成功 但leetcode上会报运算超时， s.divide(-2147483648,1);与 s.divide(-2147483648,2);
/***
 * 
 * 基本思想：
 * 除数与被除数的取值空间为 -2147483648 到 -2147483647 即 -2^31 到 2^31 - 1
 * 由于负数的空间较正数空间大1，所以再运算时一律将正数转换为负数运算。
 * （1）记录结果的正负号
 * （2）将除数被除数都转换为负数运算
 * （3）将除数一次次的相加，直到大于等于被除数,记录相加的次数，即为商
 * （4）将（1）中记录的符号给商
 * 注意：dividend == -2147483648 && divisor == -1 结果为 2147483647
 * */
    int divide1(int dividend, int divisor) {
       // 转换成负数进行运算
      //  start 9：06  end
        bool flag = false;
        if(dividend == -2147483648 && divisor == -1)
        {
            return 2147483647;
        }
        // if(dividend == -2147483648 && divisor == 1)
        // {
        //     return -2147483648;
        // } 
       if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
           flag = true;
       }
        if(flag == true && ((dividend > 0 && divisor > 0))){
            dividend = -dividend;
            divisor = -divisor;
        }else if(flag == false && ((dividend < 0 && divisor > 0))){
            divisor = -divisor;
        }else if(flag == false && ((dividend > 0 && divisor < 0))){
             dividend = -dividend;
        }
        int sum = 0;
        int n = 0;
        while(sum > dividend && (dividend - sum - divisor) <= 0){
            sum += divisor;
            n++;
        }
        if(flag == true){
            return n;
        }else{
            return -n;
        }
    }
    // 对divide1 进行了优化，步长变为两步
    int divide2(int dividend, int divisor){
         // 转换成负数进行运算
      //  start 9：06  end
      if(dividend == -2147483648 && divisor == -1)
        {
            return 2147483647;
        }
        bool flag = false;
       if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
           flag = true;
       }
        if(flag == true && ((dividend > 0 && divisor > 0))){
            dividend = -dividend;
            divisor = -divisor;
        }else if(flag == false && ((dividend < 0 && divisor > 0))){
            divisor = -divisor;
            cout<< divisor;
        }else if(flag == false && ((dividend > 0 && divisor < 0))){
             dividend = -dividend;
        }
        int sum = 0;
        int n = 0;
        while(sum > dividend && (dividend - sum - divisor - divisor) <= 0 ){
            sum+= divisor * 2;
            n = n + 2;
        }
        if((dividend - sum - divisor - divisor)>0 && (dividend - sum - divisor)<=0){
              sum += divisor;
              n = n+1;
        }
        if(flag == true){
            return n;
        }else{
            return -n;
        }
    }
    // /***
 /* 
 * 基本思想：
 * 除数与被除数的取值空间为 -2147483648 到 -2147483647 即 -2^31 到 2^31 - 1
 * 由于负数的空间较正数空间大1，所以再运算时一律将正数转换为负数运算。计数器也转换成负数
 * （1）记录结果的正负号
 * （2）将除数被除数都转换为负数运算
 * （3）将除数一次次的相加，直到大于等于被除数,记录本轮相加的次数，
 * （4）用被除数减去除数的结果  继续作为被除数除以给定的除数，执行第三步操作。将新得的次数n继续累加。
 * （5）循环执行（3）（4）步，直到除数大于被除数。
 * （4）将（1）中记录的符号给商
 * 注意：dividend == -2147483648 && divisor == -1 结果为 2147483647
 * */
     int divide3(int dividend, int divisor){
        
         if(dividend == -2147483648 && divisor == -1)
        {
            return 2147483647;
        }
        bool flag = false;
       if((dividend < 0 && divisor < 0) || (dividend >= 0 && divisor > 0)){
           flag = true;
       }
        if(flag == true && ((dividend >= 0 && divisor > 0))){
            dividend = -dividend;
            divisor = -divisor;
        }else if(flag == false && ((dividend < 0 && divisor > 0))){
            divisor = -divisor;
        }else if(flag == false && ((dividend > 0 && divisor < 0))){
             dividend = -dividend;
        }
        //int sum = divisor;
        int resultN = 0;
        if(dividend > divisor){
            return 0;
        }
        int oldDivisor = divisor;
       
        int divideFlag = false;
        int nFlag = false;
        while(divisor >= dividend){
             int n = -1;
             nFlag = false;
            while(divisor >= dividend){
             if(n < -1073741824 || divisor< -1073741824){
                 nFlag = true;
                break;
            }
            divisor = divisor + divisor;
            n = n * 2;
            divideFlag = true;
        }
        if(divideFlag == true && nFlag == false){
            n = n/2;
            divisor = divisor/2;
        }
          resultN += n;
          dividend = dividend - divisor;
          divisor= oldDivisor;
        }
        
         if(flag == true){
if(resultN == -2147483648){
        resultN = -2147483647;
    }
            return -resultN;
        }else{
            return resultN;
        }
    }
    int divide4(int dividend, int divisor){

    }
};
   
int main(int argc, char const *argv[])
{
    Solution s;
   // int result = s.divide3(-2147483648,2);
    int result = s.divide3(2147483647,3);
    cout<< result;
    return 0;
}

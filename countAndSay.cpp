#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
  string countAndSay(int n) {

         string result = "1";
        if( n == 1){
            return result;
        }
         if( n < 1){
            return "";
        }
        for(int i = 0; i < n -1 ; i++){
                int j = 0;
                int count = 1;
                string cur = "";
                while((j + 1) < result.size() ){
                 if(result[j] == result[j + 1]){
                    count++;
                    j++;
                 }
                }
                 cur += to_string(count) + result[j];
                 result  = cur;
        }
     return result;
    }
  string countAndSay3(int n) {
      string result = "1";
      if(n == 1){
          return result;
      }
   while(--n{

          int count = 1;
          string cur = "";
          for(int i = 0; i < result.size(); i++){
              while(i + 1 < result.size() && result[i] == result[i + 1]){
                  count++;
                  i++;
              }
            cur += to_string(count) + result[i];
            count = 1;
          }
          result = cur;
      }

    }

int main()
{
    cout << "Hello world!" << endl;
   
    int n;
     cin>> n;

    // string result  = countAndSay2(n);
  //   string result2  = countAndSay(n);
     string result2 =  countAndSay3(n);
       cout << "result " << result2 << endl ;
       int m; cin>>m;
    // cout << "jieguo  " << result << endl ;
    // cout << "jieguo  " << result2 << endl ;
    return 0;
}

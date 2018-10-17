#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
using namespace std;
// int removeElement(vector<int>& nums, int val);
class Solution {
public:
  /**
   * 
   * 解法一：一次遍历数组，将与指定元素相等的值擦除，将新的数组长度返回
   * 
   * */
    int removeElement1(vector<int>& nums, int val) {
          if(nums.size() ==  0){
            return 0;
        }
      
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
      }
         return nums.size();
    }

      /**
   * 
   * 解法二：
   * 
   * */
    // int removeElement2(vector<int>& nums, int val) {
    //       if(nums.size() ==  0){
    //         return 0;
    //     }
    //       int i = 0;
    //       int j = 0;
    //     for(; i < nums.size(); i++){
    //         if(nums[i] != val){
    //             continue;
    //         }
    //         for(j = i; j < nums.size(); j++){
    //             if(nums[j] != val){
    //                 nums[i] = nums[j];
    //                 break;
    //             }
    //         }
    //     for(int k =0; k< nums.size(); k++){
    //         cout<< nums[k]<< "  ";
    //     }
    //      cout<< endl;
    //     }
            
    //      return i;
    // }
};


int main (){
    Solution solution;
    vector<int> arr;
    arr.push_back(0);
     arr.push_back(1);
      arr.push_back(2);
       arr.push_back(2);
       arr.push_back(3);
       arr.push_back(0);
       arr.push_back(4);
       arr.push_back(2);
  int n =  solution.removeElement1(arr, 2);
  cout << endl;
  cout << "result is: " << endl <<  n;
  int q;
  cin >> q;
    return 0;
}

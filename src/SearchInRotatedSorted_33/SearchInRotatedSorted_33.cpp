#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
   int search(vector<int>& nums, int target) {
        if(nums.size() ==0){
           return -1;
       }
        int low = 0;
        int high = nums.size()-1;
        int mid  = low + (high - low) / 2;
          while(low < high){
              if(nums[mid] == target){
                  return mid;
              }
               else if(/*nums[mid] < nums[low] &&*/ nums[mid] < nums[high]){
                   if(target > nums[mid] && target <= nums[high]){
                       int i = mid;
                       for( i = mid +1; i <= high; i++){
                       if(target == nums[i]){
                        return i;
                    }
                    
                }
                if(i == high + 1){
                    return -1;
                }
                   }
                   else{
                       high = mid -1;
                       mid = low + (high - low) / 2;
                   }
               }
               else if( /*nums[mid] > nums[low] && */ nums[mid] > nums[high]){
                   // 左边有序
                   if(target < nums[mid] && target >= nums[low]){
                       int i = low;
                       for( i = low; i < mid; i++){
                       if(target == nums[i]){
                        return i;
                    }
                       }
                       if(i == mid){
                    return -1;
                }
                   }
                   else{
                       low = mid +1;
                       mid = low + (high - low) / 2;
                   }
               
          }
          }
       mid = low + (high - low)/2;
          if(nums[mid]==target){
              return mid;
          }
          return -1;
   }
    int search2(vector<int>& nums, int target) {
       if(nums.size() ==0){
           return -1;
       }
        int low = 0;
        int high = nums.size()-1;
        int mid  = low + (high - low) / 2;
          while(low <= high){
              mid = low + (high - low) / 2;
              if(nums[mid] == target){
                  return mid;
              }
              else if(low == high && nums[mid] != target){
                  return -1;
              }
               else if(/*nums[mid] < nums[low] &&*/ nums[mid] < nums[high]){
                   if(target > nums[mid] && target <= nums[high]){
                       low = mid +1;
                   }
                   else{
                       high = mid -1;
                   }
               }
               else if( /*nums[mid] > nums[low] && */ nums[mid] > nums[high]){
                   // 左边有序
                   if(target < nums[mid] && target >= nums[low]){
                       high = mid -1;
                   }
                   else{
                       low = mid +1;
                   }
               
          }
          }
          return -1;
   }
};
int main(int argc, char const *argv[])
{
    Solution  s;
    vector<int> vec;
    int n =0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
     vec.push_back(num);
    }
    
    int result = s.search2(vec,3);
    cout << result;
    return 0;
}

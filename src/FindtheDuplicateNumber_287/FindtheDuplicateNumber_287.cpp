class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          //使用二分搜索
        int low = 1;
        int high =nums.size()-1;
        int mid = low + (high - low)/2;
        int min_count =0;
        int equal_count =0;
        int max_count =0;
        while(low<=high){
            min_count =0;
            equal_count=0;
            max_count =0;
             for(auto iter = nums.begin(); iter!= nums.end(); iter++){
            if(*iter < mid){
                min_count++;
            }else if(*iter == mid){
                equal_count++;
            }else if(*iter > mid){
                max_count++;
            }
        }
            
        if(equal_count >1){
            return mid;
        }else if(min_count > mid-1){
            high = mid -1;
            mid = low + (high - low)/2;
        }else{
             low = mid +1;
             mid = low + (high - low)/2;
        }
        }
       return mid;
    }
};
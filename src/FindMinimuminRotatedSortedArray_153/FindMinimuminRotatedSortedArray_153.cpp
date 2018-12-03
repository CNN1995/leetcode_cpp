class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        for(auto iter = nums.cbegin(); iter != nums.cend();i++ ,iter++){
            if(iter != nums.cbegin() && *iter < *(iter-1)){
                return *iter;
            }
            if(iter + 1 == nums.cend()){
                iter = nums.cbegin();
                return *iter;
            }
        }
        return 0;
    }
};

//本题意在找轴
// 方法一：从前向后遍历，直到找到一个比前一个索引位置的数还小的数，即为轴








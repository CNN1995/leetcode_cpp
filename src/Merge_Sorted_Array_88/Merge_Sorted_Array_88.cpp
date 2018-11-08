#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 每次寻找最大的，放到最后面
        int pos = m+n-1; 
        int i = m-1;
        int j = n-1;
        for(; i>=0&&j>=0; ){
            if(nums1[i] >= nums2[j]){
                nums1[pos] = nums1[i];
                i--;
            }else{
                nums1[pos] = nums2[j];
                j--;
            }
            cout<< nums1[pos] << "  ";
            pos--;
        }
        while(j>=0){
            nums1[pos] = nums2[j];
            pos--;
            j--;
        }
    }
};
int main(){
Solution s;
int a[6] = {4,5,6,0,0,0};
// 通过数组a的地址初始化，注意地址是从0到5（左闭右开区间）
vector<int> vec1(a, a+6);
int b[3] = {1,2,3};
vector<int> vec2(b, b+3);
for(int i = 0; i < vec1.size(); i++){
    cout<< vec1[i] << "   ";
}
s.merge(vec1, 3, vec2, 3);
for(int i = 0; i < vec1.size(); i++){
    cout<< vec1[i] << "   ";
}
return 0;
}
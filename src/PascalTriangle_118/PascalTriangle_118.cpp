#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      
    
    }
};

int main(){
    Solution s;
    vector<int>::iterator it;
    vector<vector<int>>::iterator iter;
    vector<int> vec_tmp;

   vector<vector<int>> vec =  s.generate(5);
    for(  iter = vec.begin(); iter != vec.end(); iter++)
    {
        vec_tmp = *iter;
        for( it = vec_tmp.begin(); it != vec_tmp.end(); it++)
            cout << *it << " ";
        cout << endl;

    }
    return 0;
}
#include <iostream>
#include <string.h>
#include <vector>
#include <stdlib.h>
using namespace std;


vector<string> split(const string& str, const string& delim) {
	vector<string> res;
	if("" == str) return res;
	//先将要切割的字符串从string类型转换为char*类型
	char * strs = new char[str.length() + 1] ; //不要忘了
	strcpy(strs, str.c_str()); 
 
	char * d = new char[delim.length() + 1];
	strcpy(d, delim.c_str());
 
	char *p = strtok(strs, d);
	while(p) {
		string s = p; //分割得到的字符串转换为string类型
		res.push_back(s); //存入结果数组
		p = strtok(NULL, d);
	}
 
	return res;
}
int main(int argc, char const *argv[])
{
    string str = "     ";
    str.erase(str.find_last_not_of(" ") + 1);
      if(str == ""){
           cout<< 0;
        return 0;
    }
    char* strs = new char[str.length() + 1] ; //不要忘了
	strcpy(strs, str.c_str());
         const char *d = " ";
         char *p;
         p = strtok(strs,d);
         int length = 0;
    vector<std::string> vec;
         while(p)
         {
                 printf("%s\n",p);
                 
                 vec.push_back(p);
                  p=strtok(NULL,d);
        
         }
    char* strresult = new char[vec[vec.size()-1].length() + 1] ; //不要忘了
	strcpy(strresult, vec[vec.size()-1].c_str());
    cout<< strlen(strresult);
    // cout << "******test1****** "<<endl;
	// string s = "a";
	
	// std::vector<string> res = split(s, " ");
	// for (int i = 0; i < res.size(); ++i)
	// {
	// 	cout << res[i] <<endl;
	// }
    int n;
    cin>>n;

 
         return 0;
}
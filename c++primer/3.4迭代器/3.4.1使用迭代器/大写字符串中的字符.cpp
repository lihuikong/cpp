#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s("some thing");
    for(auto it=s.begin();it!=s.end()&&!isspace(*it);++it){
        *it=toupper(*it);
    }
    cout<<s<<endl;
    return 0;
}
//单一字符串中使用迭代器。
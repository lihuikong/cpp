#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string m("hello world!");
    cin>>s;
    cout<<s<<endl;
    cout<<m<<endl;
    return 0;
}
//读入的时候string s的形式只能读入到空格之前。
//如果是直接定义m为一个有空格的字符串，就可以直接带着空格输出。
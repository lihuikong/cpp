#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    while(getline(cin,line))
    cout<<line<<endl;
    return 0;
}
//相较于cin来说可以直接读入一整行的string形式的字符串，不会遇到空格后就停止输入。
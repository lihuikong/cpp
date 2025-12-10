#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    while (getline(cin,line))
    if(!line.empty()){
        cout<<line<<endl;
    }else{
        break;
    }
    return 0;
}
//每次输入一整行，当没有写入字符后依旧点击输入就会直接跳出程序

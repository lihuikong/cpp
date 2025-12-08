#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1("hello");
    string str2("hello");
    if(str1==str2){
        cout<<"两个string类型相等"<<endl;
    }else{
        cout<<"两个string类型不相等"<<endl;
    }
    return 0;
}
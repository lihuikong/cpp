#include<iostream>
using namespace std;

int main(){
    int i=42,*p=&i,&r=i;
    decltype(r+0) b;//结果是int，b是一个没有初始化的int类型。
    //当decltype的表达式内还有一个括号时，引用的变量一定是引用的类型。
    decltype((i)) d=r;
    cout<<d<<endl;
    return 0;
}
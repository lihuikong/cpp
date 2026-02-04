#include<iostream>
using namespace std;

int main(){
    int i=0,&r=i;
    auto a=r;//a是一个整数（r是i的别名，i是一个整数）
    const int ci=i,&cr=ci;
    auto b=ci;//b是一个整数（ci的顶层const特性被忽略掉了）
    auto c=cr;//c是一个整数
    auto d=&i;//d是一个整形指针（指向整数的指针）
    auto e=&ci;//e是一个指向整数常量的指针。
//如果希望推断出的auto类型是一个顶层const，需要明确指出：
    const auto f=ci;//ci的推演类型是int，f是const int。
    //可以将引用的类型设为auto。
    auto &g=ci;//g是一一个整形常量引用
    const auto &j=42;//引用只能绑定常量的时候才能直接连整数
}
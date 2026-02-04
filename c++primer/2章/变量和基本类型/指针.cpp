#include<iostream>
using namespace std;

int main(){
    int ival=42;
    int *p=&ival;
    cout<<*p<<"\n"<<endl;
    *p=0;
    cout<<ival<<endl;//p和ival为同一个地址，当*p更改后，ival也会更改。
}
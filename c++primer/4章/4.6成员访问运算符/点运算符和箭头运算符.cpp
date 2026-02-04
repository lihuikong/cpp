#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="a string",*p=&s1;
    auto n=s1.size();
    int x=(*p).size();
    int m=p->size();
    //三种方式表达的意思相同
    //*p.size();格式不对，因为p是一个指针，没有名为size的成员。
    return 0;
}
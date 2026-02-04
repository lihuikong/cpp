#include<iostream>
using namespace std;

int main(){
    int a=0,b;
    b=a++;
    //b等于a的值，然后再进行a++的运行。b=0，a=1；
    cout<<b<<" "<<a<<endl;
    b=++a;
    //先进行a++再对b进行赋值，此时a=2，b=2
    cout<<b<<" "<<a<<endl;
    return 0;
}
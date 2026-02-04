#include<iostream>

using namespace std;

int main(){
    bool b=42;//bool值只辨真假
    int i=b;//i的值为1
    i=3.14;//i的值为3，因为i为i·nt类型
    double pi = i;//pi也为3，因为i为3
    unsigned char c=-1;/*unsigned类型只能表示0至255区间的数
                         若是超出区间就会得到进行对256取模后的余数。*/
    //signed char c2= 256;这个超出范围了所以c2的值是未定义的。
    signed char c2=127;//只能另外给c2取个值。
    cout<<b<<endl;
    cout<<i<<endl;
    cout<<pi<<endl;
    cout<<(int)c<<endl;
    cout<<(int)c2<<endl;
    return 0;
}
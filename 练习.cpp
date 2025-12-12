#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    short short_value=32767;
    short_value+=1;
    int m,n=1;
    cout<<short_value<<endl;
    return 0;
}
//short能表示的最大值为32767，当数据溢出时大多数不会报错而是输出一个不可预知的结果。
//在这个程序中，符号为本来是0，因为溢出被改成了1就会变成一个负值。
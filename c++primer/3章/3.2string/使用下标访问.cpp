#include<iostream>
#include<string>
using namespace std;

int main(){
    const string hexdigits="0123456789ABCDEF";
    cout<<"请输入一个十进制的数字，在0到15之间："
    <<"用空格分开，用^+d结束。"<<endl;
    string result;
    int n;
    while(cin>>n){
        if(n<hexdigits.size()&&n>=0){
            result+=hexdigits[n];
        }else{
            break;
        }
    }
    cout<<"十六进制的数为："<<result<<endl;
    return 0;
}

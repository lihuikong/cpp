#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b&&b>c&&c>d){
        cout<<"输入正确。"<<endl;
    }else{
        cout<<"输入的值不符规则。"<<endl;
        cin>>a>>b>>c>>d;
    }
    return 0;
}
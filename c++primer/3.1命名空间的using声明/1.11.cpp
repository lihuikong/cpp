#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"请输入两个整数：（先小后大）"<<endl;
    cin>>m>>n;
    for(int i=m;i<=n;++i){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    return 0;
}
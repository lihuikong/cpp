#include<iostream>
using namespace std;

int main(){
    int a,x;
    cin>>x;
    a=x%2;
    if(a==0){
        cout<<"x为偶数";
    }else{
        cout<<"x为奇数";
    }
    cout<<endl;
    return 0;
}
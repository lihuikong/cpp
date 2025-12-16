#include<iostream>
using namespace std;
#define m 20
int real(int x){
    if(x>=0){
        return x;
    }else{
        return -x;
    }
}
int main(){
    int x;
    cin>>x;
    int result=real(x);
    cout<<result<<endl;
    return 0;
}
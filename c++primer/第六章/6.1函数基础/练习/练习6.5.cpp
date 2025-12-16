#include<iostream>
using namespace std;

long long fact(int a){
    long long m=1;
    for(int i=1;i<=a;++i){
        m*=i;
    }
    return m;
}
int main(){
    int x;
    cin>>x;
    long long result=fact(x);
    cout<<result<<endl;
    return 0;
}
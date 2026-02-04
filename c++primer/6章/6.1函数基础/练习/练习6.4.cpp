#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int result=sum(a,b);
    cout<<result<<endl;
    return 0;
}
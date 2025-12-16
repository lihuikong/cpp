#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int count(){
    static int c=0;
    return ++c;
}
int main(){
    int m,n;
    while(cin>>m>>n){
        cout<<sum(m,n)<<" "<<count()<<endl;
    }
    return 0;
}
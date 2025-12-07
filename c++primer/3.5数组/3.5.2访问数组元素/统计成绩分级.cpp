#include<iostream>
#include<string>
using namespace std;

int main(){
    unsigned scores[11]={};//11个分数段，全部初始化为0
    unsigned grade;
    while(cin>>grade){
        if(grade<=100){
            ++scores[grade/10];
        }
    }
    for(auto i:scores){
            cout<<i<<" ";
        }
    cout<<endl;
    return 0;
}
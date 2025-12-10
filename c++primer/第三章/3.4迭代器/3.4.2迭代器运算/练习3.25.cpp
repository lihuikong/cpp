#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<unsigned> text(11,0);
    unsigned grade=0;
    while(cin>>grade){
        auto str=text.begin();
        if(grade<=100){
        str+=grade/10;
        *str+=1;
        }
    }
    for(auto &m:text){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
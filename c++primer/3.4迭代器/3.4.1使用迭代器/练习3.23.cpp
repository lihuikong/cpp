#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> text{1,2,3,4,5,6,7,8,9,10};
    for(auto it=text.begin();it!=text.end();++it){
        *it*=2;
    }
    for(auto &m:text){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
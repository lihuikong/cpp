#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> text{"hello","world"};
    for(auto it=text.begin();it!=text.end()&&!it->empty();++it){
        for(auto &m:*it){
            m=toupper(m);
        }
    }
    for(auto &n:text){
        cout<<n<<endl;
    }
    return 0;
}
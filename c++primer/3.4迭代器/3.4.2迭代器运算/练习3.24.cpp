#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> line;
    int m;
    while(cin>>m){
        line.push_back(m);
    }
    auto str=line.begin();
    for(int i=1;i!=line.size();++i){
        cout<<*str+*(str+1)<<" ";
        ++str;
    }
    cout<<endl;
    return 0;
}
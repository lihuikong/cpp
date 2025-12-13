#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ex;
    int m;
    while(cin>>m){
        (m==1||m%2!=0)?m*=2:m;
        ex.push_back(m);
    }
    for(auto n:ex){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
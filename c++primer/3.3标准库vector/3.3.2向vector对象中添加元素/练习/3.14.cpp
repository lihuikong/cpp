#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    for(int m:v){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
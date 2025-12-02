#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> mathgrade(10,1);
    for(int x:mathgrade){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
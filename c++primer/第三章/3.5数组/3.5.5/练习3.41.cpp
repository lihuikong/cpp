#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[3]={1,2,3};
    vector<int> ARR(arr1,arr1+3);
    for(auto &m:ARR){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
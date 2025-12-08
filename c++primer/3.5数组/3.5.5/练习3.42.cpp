#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
    vector<int> str{1,2,3};
    int arr[3];
    for(int i=0;i<str.size();++i){
        arr[i]=str[i];
    }
    for(int m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
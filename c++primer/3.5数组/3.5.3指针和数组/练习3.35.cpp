#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    while(*ptr<=5){
        *ptr=0;
        ++ptr;
    }
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}
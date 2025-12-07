#include<iostream>
using namespace std;

bool areArraysEqual(int arr1[],int arr2[],int size){
    for(int i=0;i<size;++i){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={1,2,3};
    if(areArraysEqual(arr1,arr2,3)){
        cout<<"两个数组相等"<<endl;
    }else{
        cout<<"两个数组不相等"<<endl;
    }
    return 0;
}
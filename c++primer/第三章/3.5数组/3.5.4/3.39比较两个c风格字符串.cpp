#include<iostream>
#include<cstring>
using namespace std;

int main(){
    const char str1[]={"hello"};
    const char str2[]={"hello"};
    if(strcmp(str1,str2)>0){
        cout<<"str1大"<<endl;
    }else if(strcmp(str1,str2)<0){
        cout<<"str2大"<<endl;
    }else{
        cout<<"一样大"<<endl;
    }
    return 0;
}
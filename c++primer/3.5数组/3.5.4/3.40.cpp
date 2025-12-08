#include<iostream>
#include<cstring>
using namespace std;

int main(){
    constexpr char str1[]="hello";
    constexpr char str2[]="world";
    char str3[100]="";
    strcpy(str3,str1);
    strcat(str3," ");
    strcat(str3,str2);
    cout<<str3<<endl;
    return 0;
}
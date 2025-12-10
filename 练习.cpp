#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int s=10;
    int &m=s;
    int *p=&s;
    cout<<m<<endl;
    cout<<*p<<endl;
    return 0;
}
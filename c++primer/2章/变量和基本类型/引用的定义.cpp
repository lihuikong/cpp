#include<iostream>
using namespace std;

int main(){
    int i=1024,i2=2048;
    int &r=i,r2=i2;
    int i3=1024,&r1=i3;
    int &r3=i3,&r4=i2;
    int &i5=r;
    /*cout<<i <<"\n"
    <<i2<<"\n"
    <<r <<"\n"
    <<r2 <<"\n"
    <<r3 <<"\n"
    <<r4 <<"\n"
    <<i3 <<"\n"
    <<r1<<endl;*/
    cout<<i5<<endl;
    return 0;
}
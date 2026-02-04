#include<iostream>
using namespace std;

int main(){
    int a=100;
    int *const str=&a;
    int const *sdr=str;
    a=200;
    *str=20;
    cout<<*sdr<<endl;
    return 0;
}
//a一变所有指向他的指针都变，无论是什么种类的指针，但是当你更改指向常数性的指针，同样可以更改a的值，这时所有指针都会更改。
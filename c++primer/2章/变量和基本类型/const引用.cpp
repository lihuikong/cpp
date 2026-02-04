#include<iostream>
using namespace std;

int main(){
    int i=0;
    int &r1=i;
    const int &r2=i;
    r1=10;
    cout<<r2<<endl;
    return 0;
}
//const定义的常量不能直接被更改，唯一的方法就是可以使用这种间接的方法，更改被引用的变量，来更改常量，因为r2只是i的一个别名。
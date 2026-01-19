#include<iostream>
using namespace std;

//设定形参
int sum(int a,int b){
    return a+b;
}

//设定局部变量
int Local_Variable(){
    int c = 20;
    return c;
}

//设定静态局部变量
int Static_Variable()
{
    static int count = 0;
    count ++;
    return count;
}

int main(){
    int m,n;
    while(cin>>m>>n){
        static int Sum =0;
        Sum += sum(m,n);
        static int loop = 0;
        loop += Static_Variable();
        cout << Sum << " " << loop << endl;
    }
    int k = 0;
    k = Local_Variable();
    cout << k << endl;
    return 0;
}
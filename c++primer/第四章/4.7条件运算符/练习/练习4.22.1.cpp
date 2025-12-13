#include<iostream>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    cout<<((grade>=90)?"high pass":(grade>=60)?(grade<75)?"low pass":"pass":"fail")<<endl;
    return 0;
}

//只用条件运算符来判断条件。
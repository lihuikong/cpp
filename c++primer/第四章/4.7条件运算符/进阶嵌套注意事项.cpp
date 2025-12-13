#include<iostream>
#include<string>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    cout<<((grade)>60?"及格":"不及格");
    return 0;
}
//因为条件运算符（A？B：C）的优先级非常低，所以在使用时，要加上（）防止输出其他结果。
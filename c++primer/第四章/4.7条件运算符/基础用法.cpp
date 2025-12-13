#include<iostream>
#include<string>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    string line=(grade>60)?"过关":"不及格";
    cout<<line<<endl;
    return 0;
}
//A?B:C 格式意为如果A成立则输出B否则输出C。
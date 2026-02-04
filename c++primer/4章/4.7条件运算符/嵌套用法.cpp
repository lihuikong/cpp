#include<iostream>
#include<string>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    string line=(grade>90)?"优秀":(grade>60)?"及格":"挂科";
    cout<<line<<endl;
    return 0;
}
//注意：随着嵌套的层数增加，代码的可读性会急剧下降。
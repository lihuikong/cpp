#include<iostream>
#include<cstring>
using namespace std;

struct Sales_data{
    char name[100];
    int age;
};

int main(){
    Sales_data school,work;
    cout<<"请输入学校学生的名字和年龄"<<endl;
    cin.getline(school.name,100);
    cin>>school.age;
    cin.ignore();
    cout<<"请输入工作的名字和年龄"<<endl;
    cin>>work.name>>work.age;
    cout<<"学校的名字和年龄是："<<school.name<<" "<<school.age<<endl;
    cout<<"工作的名字和年龄是："<<work.name<<" "<<work.age<<endl;
    return 0;
}
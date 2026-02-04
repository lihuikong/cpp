#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> v1(10);//初始化一个含有10个元素的vector对象。
    vector<int> v2{10};//初始化一个含有一个元素10的vector对象。
    vector<int> v3(10,1);//初始化一个含有十个整数1的vector对象。
    vector<int> v4{10,1};//初始化一个含有两个整数10和1的vector对象。
    return 0;
}
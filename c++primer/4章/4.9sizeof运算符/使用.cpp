#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    //整型 short（2） int（4） long（4） long long（8）
    //可以利用sizeof计算出整型的类型大小
    //语法：sizeof（数据类型/变量）
    short num=10;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(num)<<endl;
    int num3=100;
    int *p=&num3;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    //sizeof(p)是指针本身的大小，sizeof（*p)是指向对象的类型的大小。
    int arr[2]={1,2};
    cout<<sizeof(arr)<<endl;
    //对于数组使用sizeof则是等于对于每个数组内的元素进行sizeof运算后再进行相加，arr[2]就是8，arr[3]就是12.
    string line="hello world!";
    cout<<sizeof(line)<<endl;
    //返回的大小和line里面的内容无关，取决于编译器，大部分是24,28,32.
    vector<int> acc(3,1);
    cout<<sizeof(acc)<<endl;
    //和sring一样是固定值。
    
    return 0;
}

#include "Person.h"
#include<iostream>

int main(){
    //调用构造函数，在栈上创建一个名为
    Person student("Jarvis","Henan University of Engineering");
    //调用已经在头文件public里面声明过的函数进行输出。
    student.printInfo();
    return 0;
}
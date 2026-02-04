#pragma once//保证同一个头文件在一次编译过程中只被包含（include）一次。
#include<string>
//不要在头文件中使用using namespace std；  因为这样会导致每次被使用的时候都要开启using库，会发生错误
namespace Unite6_exercise {
    int f();
    int calc(int v1,int v2);
    double square(double x);
}
//每个函数只写函数体不加具体实现的代码。
//具体的代码在.cpp文件中实现，main.cpp文件用于运行整个函数。
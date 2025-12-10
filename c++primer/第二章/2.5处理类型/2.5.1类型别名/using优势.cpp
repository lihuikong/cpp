#include<iostream>
using namespace std;

typedef char *str;
const str pre;

using sttr=char*;
const sttr pre1;
//无论是using还是typedef定义的，const str pre的含义都是定义了一个指向char类型的常数指针
//注意！！！意思为指针本身就是一个常量，而非指向一个char类型的常数。
//如果想要指向一个char类型的常数，就要这么写：
typedef const char *std;
//或者 
using std1=const char*;

std prre;
std1 prre1;

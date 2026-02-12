#include "Screen.h"

void Screen::some_mumber() const
{
    ++access_ctr; // 保存一个计数值，用于记录成员函数被调用的次数
}
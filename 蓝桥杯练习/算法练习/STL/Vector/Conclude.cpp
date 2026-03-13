#include <iostream>
#include <vector>
#include <algorithm> //使用sort排序要用到此头文件
using namespace std;

int main()
{
    // 声明
    vector<int> a;

    // 加入元素
    a.push_back(5);

    // 访问元素
    int i = 1;
    a[i];

    // 访问元素
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }

    // 或者：
    for (int x : a)
    {
        cout << x;
    }

    // 排序：
    sort(a.begin(), a.end()); // 默认升序

    // 反转：
    reverse(a.begin(), a.end());

    // 清空
    a.clear();
}
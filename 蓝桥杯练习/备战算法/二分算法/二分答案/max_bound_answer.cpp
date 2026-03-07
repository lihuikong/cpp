// 二分答案模版（最大可行解）
// 适用于：找最大的 x 使得check（x）成立

#include <iostream>
using namespace std;

bool check(int x)
{
    // 判定函数
    return true;
}

int main()
{
    int l = 0;
    int r = 1000000000;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        // 此处 (l + r + 1) / 2 是为了避免死循环。
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}
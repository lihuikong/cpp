// 二分答案模版（最小可行解）
// 适用于找最小的 x 使得check（x）成立

#include <iostream>
using namespace std;

bool check(int x)
{
    // 在这里写判定逻辑
    // 如果 x 可行 return true
    // 否则 return false
    return true;
}

int main()
{
    int l = 0;
    int r = 1000000000;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
            // 这里自动就避免了死循环。
        }
    }
    cout << l << endl;
    return 0;
}
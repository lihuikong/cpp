// 题目：有 n 根木头，长度分别为 a[i]，要切成长度为 x 的小段。
// 求：最大 x，使得能得到至少 k 段

// 使用了最右答案查找，为了确定最大的 x。

#include <iostream>
using namespace std;

int n, k;
int a[100005];

bool check(int x)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] / x;
    }

    return sum >= k;
}

int main()
{
    cout << "请输入木头个数，得到的段数" << endl;
    cin >> n >> k;

    int max_len = 0;

    cout << "请输入每段木头的长度" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_len)
        {
            max_len = a[i];
        }
    }
    int l = 1;
    int r = max_len;

    while (l < r)
    {
        int mid = (l + r + 1) / 2;

        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << "可切成每最长为" << l << "的" << k << "段" << endl;
    return 0;
}
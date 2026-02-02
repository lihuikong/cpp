#include <iostream>

void hailstone(int &length, int n)
{
    // 判定出口
    if (n == 1)
    {
        return;
    }

    length++;

    // 递归路径
    if (n % 2 == 0)
    {
        hailstone(length, n / 2);
    }
    else
    {
        hailstone(length, 3 * n + 1);
    }
}
int main()
{
    int n;
    int length = 1;
    std::cin >> n;
    hailstone(length, n);
    std::cout << length << std::endl;
    return 0;
}
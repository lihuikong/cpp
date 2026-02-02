#include <iostream>

/*
n盘子数量
from起始柱子
aux中转柱子
to目标柱子
*/

void hanoi(int n, char from, char aux, char to)
{
    // 递归出口：如果只有一个盘子就直接移动
    if (n == 1)
    {
        std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
        return;
    }

    // 第一步：将 n-1 个盘子从 from 移动到 aux ，借助 to
    hanoi(n - 1, from, to, aux);

    // 第二步：将第 n 个盘子(最大的)从 from 移动到 to
    std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;

    // 第三步：将 n-1 个盘子从 aux 移动到 to，借助 from
    hanoi(n - 1, aux, from, to);
}

int main()
{
    int n;
    std::cout << " 请输入盘子数量：";
    if (!(std::cin >> n) || n <= 0)
    {
        std::cerr << " 输入无效，请输入正整数。" << std::endl;
        return 1;
    }

    std::cout << "移动步数如下：" << std::endl;
    hanoi(n, 'A', 'B', 'C');

    return 0;
}
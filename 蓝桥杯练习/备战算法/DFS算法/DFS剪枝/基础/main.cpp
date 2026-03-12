// 剪枝就是：在搜索过程中，提前判断“这条路已经没必要继续搜了”，直接 return。

// 题目：从 1 到 n 中选若干个数，使它们的和等于 target，输出所有方案
#include <iostream>
using namespace std;

const int N = 30;

int n, target;
int path[N];

/*  start：从哪个数字开始选，避免重复。
    step：当前已经选了几个数，也就是 path 填到了哪里。
    sum：当前已经选出来的数字和。
*/

void dfs(int start, int step, int sum)
{
    if (sum == target)
    { // 结束条件1:找到答案
        for (int i = 0; i < step; i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    // 剪枝条件
    if (sum > target)
        return;

    // 枚举选择
    for (int i = start; i <= n; i++)
    {
        path[step] = i;
        dfs(i + 1, step + 1, sum + i);
    }
}

int main()
{
    cout << "输入上限n和目标求和值：" << endl;
    cin >> n >> target;
    dfs(1, 0, 0);
    return 0;
}
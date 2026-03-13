/*
输入 n
输出 1~n 的所有排列
*/

#include <iostream>
using namespace std;

const int N = 10;

int n;       // 要排列的数字范围
int path[N]; // 存入当前排列
bool vis[N]; // 标记数字是否已经被用过

void dfs(int step) // step：当前排到的位置。
{
    if (step == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << path[i];
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            path[step] = i;

            dfs(step + 1);

            vis[i] = false;
        }
    }
}

int main()
{
    cout << "put in a number for ranging:" << endl;
    cin >> n;
    dfs(0);
    return 0;
}
#include <iostream>
using namespace std;

const int N = 105;

int n, m;       // 地图大小，n：行；m：列。
int a[N][N];    // 存放地图数据，1:陆地；0:水
bool vis[N][N]; // 标记数组是否已经被访问过，默认初始值为false

// 方向数组：（1，0）：向下；（-1，0）：向上；（0，1）：向右；（0，-1）：向左
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// dfs算法：从格子（x，y）开始把所有和他连在一起的1进行搜索并且标记
void dfs(int x, int y)
{
    vis[x][y] = true; // 标记已经访问过了。

    // 依次检查上 下 右 左四个方向
    for (int i = 0; i < 4; i++)
    {
        // nx，ny表示下一个将要去的方向。
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m // 防止越界
            && !vis[nx][ny]                        // 避免重复搜索
            && a[nx][ny] == 1)
        {                // 证明相连的前提为证明是陆地
            dfs(nx, ny); // 递归：一条路走到底，再换路
        }
    }
}

int main()
{
    cout << "输入地图大小（行和列）：" << endl;
    cin >> n >> m;

    cout << "输入地图内每个格子内部的数值（陆地为1，水为0）：" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // 对岛屿数量计数为ans
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1 && !vis[i][j])
            {              // 前提条件：是陆地并且没有被标记过
                dfs(i, j); // 作用：把整个岛屿进行全部标记搜索
                ans++;
            }
        }
    }

    cout << "岛屿有" << ans << "个" << endl;
    return 0;
}
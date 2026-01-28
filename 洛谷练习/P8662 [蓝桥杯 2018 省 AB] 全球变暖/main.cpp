#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 输入并且存储二元数组
struct Input2Arr
{
    int N;
    vector<vector<char>> seaRegion;
    Input2Arr()
    {
        cin >> N;
        seaRegion.resize(N, vector<char>(N));
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                cin >> seaRegion[i][j];
            }
        }
    }
};

// 计算有几个岛屿不会被淹没
int overwhelmed_land_count(vector<vector<char>> &grid)
{
    int n = grid.size();
    int drownedIslands = 0;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == '#' && !vis[i][j])
            {
                // 发现一个原始岛屿
                bool islandSurvives = false;

                // BFS开始
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;

                while (!q.empty())
                {
                    pair<int, int> curr = q.front();
                    q.pop();
                    int x = curr.first, y = curr.second;

                    // 判断，如果这个点的四面都是陆地，他就是高地，不会被淹
                    bool isInner = true;
                    for (int d = 0; d < 4; d++)
                    {
                        if (grid[x + dx[d]][y + dy[d]] == '.')
                        {
                            isInner = false;
                            // 临海，会被淹
                        }
                    }
                    if (isInner)
                        islandSurvives = true;

                    // 寻找这个岛的其他像素
                    for (int d = 0; d < 4; ++d)
                    {
                        int nx = x + dx[d], ny = y + dy[d];
                        if (!vis[nx][ny] && grid[nx][ny] == '#')
                        {
                            vis[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
                if (!islandSurvives)
                    drownedIslands++;
            }
        }
    }
    return drownedIslands;
}

int main()
{
    // 实例化结构体
    Input2Arr input;

    // 调用核心算法
    int result = overwhelmed_land_count(input.seaRegion);

    cout << result << endl;
    return 0;
}
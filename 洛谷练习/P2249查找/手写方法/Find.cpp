#include <iostream>
#include <vector>

// 输入函数
void input(int &n, int &m, std::vector<int> &arr, std::vector<int> &agent)
{
    std::cin >> n;
    std::cin >> m;
    int k, l;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> k;
        arr.push_back(k);
    }
    for (int j = 0; j < m; ++j)
    {
        std::cin >> l;
        agent.push_back(l);
    }
}

// 搜索指定值
void Find(std::vector<int> &arr, std::vector<int> &agent, std::vector<int> &out)
{
    int n = arr.size(), m = agent.size();
    for (int i = 0; i < m; ++i)
    {
        bool found = false;
        for (int j = 0; j < n; ++j)
        {
            if (arr[j] == agent[i])
            {
                out.push_back(j + 1);
                found = true;
                break;
            }
        }
        if (!found)
        {
            out.push_back(-1);
        }
    }
}

// main运行函数
int main()
{
    int n, m;
    std::vector<int> arr;
    std::vector<int> agent;
    std::vector<int> out;
    input(n, m, arr, agent);
    Find(arr, agent, out);
    for (auto I : out)
    {
        std::cout << I << " ";
    }
    std::cout << std::endl;
    return 0;
}
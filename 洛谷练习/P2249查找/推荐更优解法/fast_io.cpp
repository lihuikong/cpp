#include <iostream>
#include <vector>

// 使用快速IO,为了解决输入输出太慢导致程序被冤死的的问题
void fast_io()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
}

int binary_search_first(const std::vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // 防止int溢出

        if (arr[mid] >= target)
        {
            if (arr[mid] == target)
                ans = mid + 1;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    fast_io();
    int n, m;
    if (!(std::cin >> n >> m))
        return 0;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    for (int i = 0; i < m; ++i)
    {
        int q;
        std::cin >> q;
        std::cout << binary_search_first(arr, q) << (i == m - 1 ? "" : " ");
    }
    std::cout << std::endl;
    return 0;
}
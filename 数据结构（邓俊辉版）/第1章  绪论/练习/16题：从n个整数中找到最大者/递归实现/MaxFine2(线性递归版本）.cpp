#include <vector>

int MaxFind2(std::vector<int> &arr, int n)
{
    if (n == 1)
        return arr[0]; // 递归基

    // 线性递归：比较最后一个元素和前n-1个的最大值
    int subMax = MaxFind2(arr, n - 1);
    return (arr[n - 1] > subMax) ? arr[n - 1] : subMax;
}
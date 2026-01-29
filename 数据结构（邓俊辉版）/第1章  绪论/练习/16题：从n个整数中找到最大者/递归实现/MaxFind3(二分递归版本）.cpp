#include <vector>

int maxDivideConquer(std::vector<int> &arr, int low, int high)
{
    // 递归基：区间内只有一个元素
    if (low == high)
    {
        return arr[low];
    }

    // 计算中间位置，将位置一分为二
    int mid = low + ((high - low) >> 1);

    // 递推：分别递归寻找左右两边的最大值
    int leftMax = maxDivideConquer(arr, low, mid);
    int rightMax = maxDivideConquer(arr, mid + 1, high);

    // 两边最大的比较
    return (leftMax > rightMax) ? leftMax : rightMax;
}
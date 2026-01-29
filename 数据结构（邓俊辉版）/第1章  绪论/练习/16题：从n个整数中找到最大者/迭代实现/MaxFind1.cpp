#include <vector>

int Max_Find1(std::vector<int> &arr)
{
    if (arr.empty())
        return -1;
    int temp = arr[0];
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        temp = ((arr[i] > temp) ? arr[i] : temp);
    }
    return temp;
}
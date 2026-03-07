int left_bound(int a[], int n, int target)
{
    int left = 0, right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    if (left < n && a[left == target])
    {
        return left;
    }
    return -1;
}
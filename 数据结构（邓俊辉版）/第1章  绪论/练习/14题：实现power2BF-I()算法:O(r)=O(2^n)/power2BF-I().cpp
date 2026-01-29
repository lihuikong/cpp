int power2_I(int n)
{
    if (n == 0)
        return 1;
        
    // 递归：等于pow *= 2;
    // 通过-1递归，确定递归深度是2，保持O(n)复杂度
    return power2_I(n - 1) << 1;
}
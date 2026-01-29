int power2(int n) // 输入的是2的次方数
{
    int pow = 1;
    int p = 2;

    while (n > 0)
    {
        if (n & 1)
        {
            pow *= p;
        }
        p *= p;
        n >>= 1; // 二进制少一位，十进制除二
    }
    return pow;
}
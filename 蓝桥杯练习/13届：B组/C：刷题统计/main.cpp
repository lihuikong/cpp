#include <iostream>

int main()
{
    long long a, b, n, j, k;
    long long sum, result;
    std::cin >> a >> b >> n;
    sum = 5 * a + 2 * b; // sum为每周的做题数。
    // j为周数，k为不能满减的剩余题数。
    j = n / sum, k = n % sum;
    result = 7 * j;
    if (k != 0)
    {
        if (k / a <= 5 && k % a != 0)
        {
            result += (k / a) + 1;
        }
        else
        {
            result += k / a;
        }
    }

    std::cout << result << std::endl;
    return 0;
}
#include <iostream>
#include <algorithm>
int main()
{
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i)
    {
        std::cout << std::max(i, N - i - 1) * 2 << std::endl;
    }
    return 0;
}
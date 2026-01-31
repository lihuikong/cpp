#include <iostream>

int fib(int n)
{
    return (2 > n) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

int main()
{
    // 声明进制N+1，A的位数Ma，B的位数Mb,A-B的结果ans
    long long N, Ma, Mb, ans = 0;
    
    // 输入数据
    std::cin >> N >> Ma;
    
    std::vector<long long> A(Ma);
    for (int i = 0; i < Ma; ++i)
    {
        std::cin >> A[i];
    }
    std::cin >> Mb;
    std::vector<long long> B(Mb, 0);
    
    for (int i = Ma - Mb; i < Ma; ++i)
    {
        std::cin >> B[i];
    }
    for (int i = 0; i < Ma; ++i)
    {
        long long current_base = std::max({A[i] + 1, B[i] + 1, 2LL});
        ans = (ans * current_base + (A[i] - B[i])) % MOD;
    }
    std::cout << (ans + MOD) % MOD << std::endl;
    return 0;
}
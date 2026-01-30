#include <vector>
bool critiseEqualSon2(const std::vector<int> &S, int target, int n)
{
    if (n < 0 || target < 0)
        return false;

    if (target == 0)
        return true;

    return critiseEqualSon2(S, target - S[n], n - 1) || critiseEqualSon2(S, target, n - 1);
}
#include <iostream>
using namespace std;

long long S(long long x)
{
    // 得到从1到x的平方的和
    return x * (x + 1) * (2 * x + 1) / 6;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long L, R;
        cin >> L >> R;
        cout << S(R) - S(L - 1) << endl;
    }

    return 0;
}
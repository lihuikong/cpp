#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> q(n);
    int maxx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
        if (q[i] > maxx)
        {
            maxx = q[i];
        }
    }

    vector<bool> isprime(maxx + 1, true); // 表示这个数是否是质数，初始化为全部都认为是，后面再改
    vector<int> rank(maxx + 1);           // 表示这个数是第几个质数。

    isprime[0] = isprime[1] = false; // 0和1都不是质数

    int cnt = 0;

    for (int i = 2; i <= maxx; i++)
    {
        if (isprime[i])
        {
            cnt++;
            rank[i] = cnt;

            for (long long j = 1LL * i * i; j <= maxx; j += i)
            {
                // c++中的整数的默认类型为int，1ll则表示long long类型的1
                // j从i的平方开始是为了省略一些计算量，不要重复计算
                isprime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << rank[q[i]] << endl;
    }
    return 0;
}
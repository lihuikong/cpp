#include <iostream>
using namespace std;

int main()
{
    int k;
    int n = 0;
    double sum = 0.0;
    cin >> k;
    for (n = 1;; ++n)
    {
        sum += 1.0 / n;
        if (sum > k)
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}